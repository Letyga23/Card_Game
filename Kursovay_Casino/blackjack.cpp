#include "blackjack.h"
#include "ui_blackjackwindow.h"
#include "blackjackwindow.h"
#include "resultgame.h"
#include <QPropertyAnimation>
#include <QTimer>

Blackjack::Blackjack(Ui::BlackjackWindows *_ui) : ui(_ui)
{
    _nameGame = "Блэкджек";
    ui->label_5->setText("0");
    ui->label_4->setText("0");
    _movePlayer = 0;
    _moveBot = 0;
}

void Blackjack::botTurn()
{
    while (_bot.score() < minimumDealerScore)
    {
        QString filePatch = _bot.drawCard(_deck);
        QLabel* label = BlackjackWindows::cardOnTableDiller[_moveBot++];

        QRect startPosition = ui->label_27->geometry();
        QRect finishPosition = label->geometry();

        QLabel* tempLabel = new QLabel(ui->centralwidget);
        tempLabel->setStyleSheet("image: url(" + filePatch + ");");
        tempLabel->setGeometry(startPosition);
        tempLabel->show();
        tempLabel->raise();

        QPropertyAnimation* animation = new QPropertyAnimation(tempLabel, "geometry");
        animation->setDuration(1000);
        animation->setStartValue(startPosition);
        animation->setEndValue(finishPosition);

        animation->start();

        QTimer::singleShot(1000, [label, filePatch, tempLabel]()
        {
            tempLabel->deleteLater();
            label->setStyleSheet("image: url(" + filePatch + ");");
        });
    }
}

void Blackjack::takeKard()
{
    QString filePatch = _player.drawCard(_deck);
    ui->label_4->setText(QString::number(_player.score()));

    QLabel* label = BlackjackWindows::cardOnTablePlayer[_movePlayer++];

    QRect startPosition = ui->label_27->geometry();
    QRect finishPosition = label->geometry();

    QLabel* tempLabel = new QLabel(ui->centralwidget);
    tempLabel->setStyleSheet("image: url(" + filePatch + ");");
    tempLabel->setGeometry(startPosition);
    tempLabel->show();
    tempLabel->raise();

    QPropertyAnimation* animation = new QPropertyAnimation(tempLabel, "geometry");
    animation->setDuration(1000);
    animation->setStartValue(startPosition);
    animation->setEndValue(finishPosition);

    animation->start();

    QTimer::singleShot(1000, [label, filePatch, tempLabel]()
    {
        tempLabel->deleteLater();
        label->setStyleSheet("image: url(" + filePatch + ");");
    });

    if(_player.isBust())
    {
        ui->pushButton->setEnabled(false);
        ui->pushButton_2->setEnabled(false);
        enough();
    }
}

void Blackjack::enough()
{
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);;
    botTurn();

    ui->label_5->setText(QString::number(_bot.score()));
    if (_player.isBust() and _bot.isBust())
    {
        ResultGame::draw(_nameGame);
        ui->label_6->setText("Ничья");
    }
    else if(!_player.isBust() and _bot.isBust() )
    {
        ResultGame::win(_nameGame);
        ui->label_6->setText("Вы выйграли! У диллера перебор");
    }
    else if(!_player.isBust() and _player.score() > _bot.score())
    {
        ResultGame::win(_nameGame);
        ui->label_6->setText("Вы выйграли! У диллера: " + QString::number(_bot.score()));
    }
    else if(_player.score() == _bot.score())
    {
        ResultGame::draw(_nameGame);
        ui->label_6->setText("Ничья");
    }
    else
    {
        ResultGame::lost(_nameGame);
        ui->label_6->setText("Вы проиграли! У диллера: " + QString::number(_bot.score()));
    }
}
