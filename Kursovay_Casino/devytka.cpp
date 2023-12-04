#include "devytka.h"
#include "resultgame.h"
#include "urlcard.h"
#include "constant.h"
#include "devytkawindow.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QPropertyAnimation>
#include <QTimer>


int Devytka::numPlayers;

Devytka::Devytka(Ui::DevytkaWindow *_ui) :  _player(_deck, numPlayers), ui(_ui)
{
    _nameGame = "Девятка";

    for (int suit = 0; suit < numSuit; ++suit)
        _numTableCardsBySuit[suit] = 0;

    for(int i = 1; i < numPlayers; i++)
        _bot.push_back(new Player(_deck, numPlayers));

    _win = false;

    _player.m_sortHandBySuit();
    std::vector<Card> cardInHand = _player.getCardInHand();

    QList<QToolButton*> buttons = ui->centralwidget->findChildren<QToolButton*>();
    std::sort(buttons.begin(), buttons.end(), [](QToolButton* a, QToolButton* b) { return a->objectName() < b->objectName(); });

    QChar separator = '/';
    QStringList parts;

    for (int i = 0; i < static_cast<int>(_player.getCardInHand().size()); i++)
    {
        QString url = UrlCard::getUrlCard(cardInHand[i]);
        parts = url.split(separator);

        QSize iconSize(buttons[i]->size());
        QIcon icon(url);
        icon.addPixmap(QPixmap(url), QIcon::Disabled);
        buttons[i]->setIcon(icon);
        buttons[i]->setIconSize(iconSize);

        QString QToolButton = "QToolButton { border: 8px solid transparent;}";
        QString hover = "QToolButton:hover { border: none;}";

        buttons[i]->setStyleSheet(QToolButton + hover);
        buttons[i]->setObjectName(parts[parts.size()-2] + "/" + parts[parts.size()-1]);
    }

    for(int i = 0; i < static_cast<int>(_player.getCardInHand().size()); i++)
        buttons[i]->setVisible(true);
}

void Devytka::moveBot()
{
    int timeAnimation = 1000;
    int timeStartAnimation = 1000;
    int time = timeAnimation + timeStartAnimation;
    int skip = 0;

    if(!_win)
    {
        QList<QToolButton*> buttons = ui->centralwidget->findChildren<QToolButton*>();
        for(QToolButton* button : buttons)
            button->setEnabled(false);
        ui->action_2->setEnabled(false);

        for (Player* bot : _bot)
        {
            for (int i = 0; i < bot->getNumCardsInHand(); ++i)
            {
                const Card selectedCard = bot->getCardInHand(i);
                if (canPlayCard(selectedCard))
                {
                    QString url = UrlCard::getUrlCard(selectedCard);
                    QLabel* label = DevytkaWindow::cardOnTable[url];

                    QRect startPosition(ui->centralwidget->width(), 0, label->width(), label->height());
                    QRect finishPosition = label->geometry();

                    QLabel* tempLabel = new QLabel(ui->centralwidget);
                    tempLabel->setStyleSheet("image: url(" + url + ");");
                    tempLabel->setGeometry(startPosition);
                    tempLabel->show();
                    tempLabel->raise();

                    QPropertyAnimation* animation = new QPropertyAnimation(tempLabel, "geometry");
                    animation->setDuration(timeAnimation);
                    animation->setStartValue(startPosition);
                    animation->setEndValue(finishPosition);

                    if(!_win)
                    {
                        QTimer::singleShot(timeStartAnimation, [animation](){ animation->start(); });
                        QTimer::singleShot(time, [label, url, buttons, tempLabel, bot, this, selectedCard]()
                        {
                            tempLabel->deleteLater();
                            label->setStyleSheet("image: url(" + url + ");");

                            int suit = static_cast<int>(selectedCard.getSuit());
                            _cardsOnTable[suit].push_back(static_cast<int>(selectedCard.getRank()));
                            _numTableCardsBySuit[suit]++;
                            bot->removeCardFromHand(selectedCard);

                            if (bot->getNumCardsInHand() == 0)
                            {
                                ResultGame::lost(_nameGame);
                                QMessageBox messadge;
                                messadge.setWindowTitle("Результат");
                                messadge.setText("Компьютер выйграл");
                                messadge.setFont(QFont("Segoe UI", 14));
                                messadge.setButtonText(QMessageBox::Ok, "Эх");
                                messadge.exec();
                                _win = true;
                                return;
                            }
                        });
                    }
                    break;
                }
                else if(i == (bot->getNumCardsInHand() - 1))
                    skip++;
            }

            timeStartAnimation += timeAnimation;
            time = timeAnimation + timeStartAnimation;
        }

        switch (skip)
        {
        case 1:
            ui->game_progress->setText("Бот пропустил ход");
            break;
        case 2:
            ui->game_progress->setText("Два бота пропустили ход");
            break;
        case 3:
            ui->game_progress->setText("Три бота пропустили ход");
            break;
        }
        QTimer::singleShot(2000, [=]() { ui->game_progress->clear();} );

        QTimer::singleShot(time - 1000, [=]()
        {
            for(QToolButton* button : buttons)
                button->setEnabled(true);
            ui->action_2->setEnabled(true);
        });
    }
}


bool Devytka::movePlayer(QToolButton* button)
{
    if(!_win)
    {
        Card selectedCard {button->objectName()};

        int suit = static_cast<int>(selectedCard.getSuit());
        if (canPlayCard(selectedCard))
        {
            _cardsOnTable[suit].push_back(static_cast<int>(selectedCard.getRank()));
            _numTableCardsBySuit[suit]++;

            QString url = UrlCard::getUrlCard(selectedCard);
            QLabel* label = DevytkaWindow::cardOnTable[url];

            QRect startPosition = button->geometry();
            QRect finishPosition = label->geometry();

            // Создаем временный виджет для отображения карты
            QLabel* animationLabel = new QLabel(ui->centralwidget);
            animationLabel->setStyleSheet("image: url(" + url + ");");
            animationLabel->setGeometry(startPosition);
            animationLabel->show();
            animationLabel->raise();

            // Создаем анимацию перемещения от координат кнопки до координат label
            QPropertyAnimation* animation = new QPropertyAnimation(animationLabel, "geometry");
            animation->setDuration(1000);
            animation->setStartValue(startPosition);
            animation->setEndValue(finishPosition);

            QLabel* removedCard = new QLabel(ui->centralwidget);
            removedCard->setStyleSheet("border-image: url(:/assets/" + Awards::_setAsset + "/shirt.png);");
            removedCard->setGeometry(startPosition);

            animation->start();
            button->hide();

            // По завершении анимации
            QTimer::singleShot(1000, [label, url, animationLabel]()
            {
                animationLabel->deleteLater();
                label->setStyleSheet("image: url(" + url + ");");
            });

            _player.removeCardFromHand(selectedCard);

            if (_player.getNumCardsInHand() == 0)
            {
                ResultGame::win(_nameGame);
                QMessageBox messadge;
                messadge.setWindowTitle("Результат");
                messadge.setText("Вы выйграли");
                messadge.setFont(QFont("Segoe UI", 14));
                messadge.setButtonText(QMessageBox::Ok, "Ура");
                messadge.setStyleSheet("QMessageBox {background-color: #c0e0ed}");
                messadge.exec();
                _win = true;
            }
            return true;
        }
    }
    return false;
}

bool Devytka::canPlayCard(const Card &card)
{
    CardSuit cardSuit = card.getSuit();
    CardRank cardRank = card.getRank();

    if (_nineBubna == false)
    {
        if (cardRank == CardRank::RANK_9 && cardSuit == CardSuit::SUIT_DIAMOND)
        {
            _nineBubna = true;
            return true;
        }
        return false;
    }

    int suit = static_cast<int>(cardSuit);
    if (_numTableCardsBySuit[suit] > 0)
    {
        int cardRankInt = static_cast<int>(cardRank);

        int minTableCardRankInt{};
        if (!_cardsOnTable[suit].empty())
            minTableCardRankInt = *std::min_element(_cardsOnTable[suit].begin(), _cardsOnTable[suit].end());

        int maxTableCardRankInt{};
        if (!_cardsOnTable[suit].empty())
            maxTableCardRankInt = *std::max_element(_cardsOnTable[suit].begin(), _cardsOnTable[suit].end());

        if (cardRankInt == maxTableCardRankInt + 1)
            return true;

        if (cardRankInt == minTableCardRankInt - 1)
            return true;
    }
    else
    {
        if (cardRank == CardRank::RANK_9)
            return true;
    }

    return false;
}
