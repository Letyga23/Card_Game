#include "devytkawindow.h"
#include "ui_devytkawindow.h"
#include "mainwindow.h"
#include "constant.h"
#include "numberofplayers.h"
#include "awards.h"
#include <QMap>
#include <QTimer>
#include <QScreen>
#include <QDebug>

QMap<QString, QLabel*> DevytkaWindow::cardOnTable;

DevytkaWindow::DevytkaWindow(bool fullScreen, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DevytkaWindow),
    _fullScreen(fullScreen)
{
    ui->setupUi(this);
    _startGame = false;

    QScreen *primaryScreen = QGuiApplication::primaryScreen();
    QRect screenGeometry = primaryScreen->geometry();
    _screenWidth = screenGeometry.width() / 1.45;
    _screenHeight = screenGeometry.height() / 1.35;
    this->setMinimumSize(_screenWidth, _screenHeight);

    if(_fullScreen)
        this->showFullScreen();
    else
        this->resize(_screenWidth, _screenHeight);

    QList<QToolButton*> buttons = ui->centralwidget->findChildren<QToolButton*>();
    for(QToolButton* button : buttons)
    {
        connect(button, &QToolButton::clicked, this, &DevytkaWindow::playerMove);
        button->setVisible(false);
    }

    QString asset = Awards::_setAsset;

    QList<QLabel*> labels = ui->centralwidget->findChildren<QLabel*>();
    for(QLabel* label : labels)
        label->setStyleSheet("image: url(:/assets/" + asset + "/shirt.png);");

    ui->diamonds9->setStyleSheet("image: url(:/" + asset + "/Diamonds/assets/" + asset + "/Diamonds/Бубна.png);");
    ui->clubs9->setStyleSheet("image: url(:/" + asset + "/Clubs/assets/" + asset + "/Clubs/Крестия.png);");
    ui->hearts9->setStyleSheet("image: url(:/" + asset + "/Hearts/assets/" + asset + "/Hearts/Черва.png);");
    ui->spades9->setStyleSheet("image: url(:/" + asset + "/Spades/assets/" + asset + "/Spades/Пика.png);");

    ui->game_progress->setStyleSheet("background-color: rgb(170, 0, 0); color: rgb(255, 255, 255)");

    cardOnTable[":/" + asset + "/Clubs/assets/" + asset + "/Clubs/2.png"] = ui->clubs2;
    cardOnTable[":/" + asset + "/Clubs/assets/" + asset + "/Clubs/3.png"] = ui->clubs3;
    cardOnTable[":/" + asset + "/Clubs/assets/" + asset + "/Clubs/4.png"] = ui->clubs4;
    cardOnTable[":/" + asset + "/Clubs/assets/" + asset + "/Clubs/5.png"] = ui->clubs5;
    cardOnTable[":/" + asset + "/Clubs/assets/" + asset + "/Clubs/6.png"] = ui->clubs6;
    cardOnTable[":/" + asset + "/Clubs/assets/" + asset + "/Clubs/7.png"] = ui->clubs7;
    cardOnTable[":/" + asset + "/Clubs/assets/" + asset + "/Clubs/8.png"] = ui->clubs8;
    cardOnTable[":/" + asset + "/Clubs/assets/" + asset + "/Clubs/9.png"] = ui->clubs9;
    cardOnTable[":/" + asset + "/Clubs/assets/" + asset + "/Clubs/10.png"] = ui->clubs10;
    cardOnTable[":/" + asset + "/Clubs/assets/" + asset + "/Clubs/J.png"] = ui->clubsJ;
    cardOnTable[":/" + asset + "/Clubs/assets/" + asset + "/Clubs/Q.png"] = ui->clubsQ;
    cardOnTable[":/" + asset + "/Clubs/assets/" + asset + "/Clubs/K.png"] = ui->clubsK;
    cardOnTable[":/" + asset + "/Clubs/assets/" + asset + "/Clubs/A.png"] = ui->clubsA;

    cardOnTable[":/" + asset + "/Diamonds/assets/" + asset + "/Diamonds/2.png"] = ui->diamonds2;
    cardOnTable[":/" + asset + "/Diamonds/assets/" + asset + "/Diamonds/3.png"] = ui->diamonds3;
    cardOnTable[":/" + asset + "/Diamonds/assets/" + asset + "/Diamonds/4.png"] = ui->diamonds4;
    cardOnTable[":/" + asset + "/Diamonds/assets/" + asset + "/Diamonds/5.png"] = ui->diamonds5;
    cardOnTable[":/" + asset + "/Diamonds/assets/" + asset + "/Diamonds/6.png"] = ui->diamonds6;
    cardOnTable[":/" + asset + "/Diamonds/assets/" + asset + "/Diamonds/7.png"] = ui->diamonds7;
    cardOnTable[":/" + asset + "/Diamonds/assets/" + asset + "/Diamonds/8.png"] = ui->diamonds8;
    cardOnTable[":/" + asset + "/Diamonds/assets/" + asset + "/Diamonds/9.png"] = ui->diamonds9;
    cardOnTable[":/" + asset + "/Diamonds/assets/" + asset + "/Diamonds/10.png"] = ui->diamonds10;
    cardOnTable[":/" + asset + "/Diamonds/assets/" + asset + "/Diamonds/J.png"] = ui->diamondsJ;
    cardOnTable[":/" + asset + "/Diamonds/assets/" + asset + "/Diamonds/Q.png"] = ui->diamondsQ;
    cardOnTable[":/" + asset + "/Diamonds/assets/" + asset + "/Diamonds/K.png"] = ui->diamondsK;
    cardOnTable[":/" + asset + "/Diamonds/assets/" + asset + "/Diamonds/A.png"] = ui->diamondsA;

    cardOnTable[":/" + asset + "/Hearts/assets/" + asset + "/Hearts/2.png"] =  ui->hearts2;
    cardOnTable[":/" + asset + "/Hearts/assets/" + asset + "/Hearts/3.png"] =  ui->hearts3;
    cardOnTable[":/" + asset + "/Hearts/assets/" + asset + "/Hearts/4.png"] =  ui->hearts4;
    cardOnTable[":/" + asset + "/Hearts/assets/" + asset + "/Hearts/5.png"] =  ui->hearts5;
    cardOnTable[":/" + asset + "/Hearts/assets/" + asset + "/Hearts/6.png"] =  ui->hearts6;
    cardOnTable[":/" + asset + "/Hearts/assets/" + asset + "/Hearts/7.png"] =  ui->hearts7;
    cardOnTable[":/" + asset + "/Hearts/assets/" + asset + "/Hearts/8.png"] =  ui->hearts8;
    cardOnTable[":/" + asset + "/Hearts/assets/" + asset + "/Hearts/9.png"] =  ui->hearts9;
    cardOnTable[":/" + asset + "/Hearts/assets/" + asset + "/Hearts/10.png"] = ui->hearts10;
    cardOnTable[":/" + asset + "/Hearts/assets/" + asset + "/Hearts/J.png"] = ui->heartsJ;
    cardOnTable[":/" + asset + "/Hearts/assets/" + asset + "/Hearts/Q.png"] = ui->heartsQ;
    cardOnTable[":/" + asset + "/Hearts/assets/" + asset + "/Hearts/K.png"] = ui->heartsK;
    cardOnTable[":/" + asset + "/Hearts/assets/" + asset + "/Hearts/A.png"] = ui->heartsA;

    cardOnTable[":/" + asset + "/Spades/assets/" + asset + "/Spades/2.png"] = ui->spades2;
    cardOnTable[":/" + asset + "/Spades/assets/" + asset + "/Spades/3.png"] = ui->spades3;
    cardOnTable[":/" + asset + "/Spades/assets/" + asset + "/Spades/4.png"] = ui->spades4;
    cardOnTable[":/" + asset + "/Spades/assets/" + asset + "/Spades/5.png"] = ui->spades5;
    cardOnTable[":/" + asset + "/Spades/assets/" + asset + "/Spades/6.png"] = ui->spades6;
    cardOnTable[":/" + asset + "/Spades/assets/" + asset + "/Spades/7.png"] = ui->spades7;
    cardOnTable[":/" + asset + "/Spades/assets/" + asset + "/Spades/8.png"] = ui->spades8;
    cardOnTable[":/" + asset + "/Spades/assets/" + asset + "/Spades/9.png"] = ui->spades9;
    cardOnTable[":/" + asset + "/Spades/assets/" + asset + "/Spades/10.png"] = ui->spades10;
    cardOnTable[":/" + asset + "/Spades/assets/" + asset + "/Spades/J.png"] = ui->spadesJ;
    cardOnTable[":/" + asset + "/Spades/assets/" + asset + "/Spades/Q.png"] = ui->spadesQ;
    cardOnTable[":/" + asset + "/Spades/assets/" + asset + "/Spades/K.png"] = ui->spadesK;
    cardOnTable[":/" + asset + "/Spades/assets/" + asset + "/Spades/A.png"] = ui->spadesA;
}

DevytkaWindow::~DevytkaWindow()
{
    delete ui;
    delete _game;
}

void DevytkaWindow::on_action_4_triggered()
{
    DevytkaWindow *w = new DevytkaWindow(_fullScreen);
    w->show();
    close();
}

void DevytkaWindow::on_action_5_triggered()
{
    MainWindow *w = new MainWindow();
    w->show();
    close();
}

void DevytkaWindow::playerMove()
{
    QToolButton* button = qobject_cast<QToolButton*>(sender());
    QString buttonName = button->objectName();

    if (_game->movePlayer(button))
        _game->moveBot();
    else
    {
        ui->game_progress->setText("Нельзя положить эту карту");
        QTimer::singleShot(1000, [=]() { ui->game_progress->clear();} );
    }
}

void DevytkaWindow::on_action_2_triggered()
{
    ui->game_progress->setText("Вы пропустил ход");
    QTimer::singleShot(2000, [=]() { ui->game_progress->clear();} );
    _game->moveBot();
}

void DevytkaWindow::on_action_triggered()
{
    if(!_startGame)
    {
        NumberOfPlayers dialog(this);

        if (dialog.exec() == QDialog::Accepted)
        {
            Devytka::numPlayers = dialog.getNumPlayers() + 1;
            ui->action->setEnabled(false);
            ui->action_2->setEnabled(true);
        }
        else
            return;

        resizeEvent(nullptr);

        _game = new Devytka(ui);
        QList<QToolButton*> buttons = ui->centralwidget->findChildren<QToolButton*>();
        for(QToolButton* button : buttons)
            button->setEnabled(true);

        _game->moveBot();
        _startGame = true;
    }
}


void DevytkaWindow::on_action_3_triggered()
{
    if (_fullScreen)
    {
        showNormal();
        _fullScreen = false;
        ui->action_3->setText("Полноэкранный режим");
        this->resize(_screenWidth, _screenHeight);
    }
    else
    {
        showFullScreen();
        _fullScreen = true;
        ui->action_3->setText("Оконный режим");
    }
}

void DevytkaWindow::resizeEvent(QResizeEvent *event)
{
    QMainWindow::resizeEvent(event);

    int buttonWidth = width() / 13;
    int buttonHeight = height() / 6;

    if(Devytka::numPlayers == 4)
        buttonHeight = height() / 5;

    QList<QToolButton*> buttons = ui->centralwidget->findChildren<QToolButton*>();
    for (QToolButton* button : buttons)
    {
        button->setFixedSize(buttonWidth, buttonHeight);
        button->setIconSize(button->size());
    }
}
