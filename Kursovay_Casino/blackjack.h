#ifndef BLACKJACK_H
#define BLACKJACK_H

#include "deck.h"
#include "player.h"
#include <QString>

namespace Ui {class BlackjackWindows;}

class Blackjack
{
    QString _nameGame;
    Ui::BlackjackWindows *ui;
    Deck _deck;
    Player _bot;
    Player _player;
    int _movePlayer;
    int _moveBot;

public:
    Blackjack(Ui::BlackjackWindows *_ui);

    void botTurn();
    void takeKard();
    void enough();  
};

#endif // BLACKJACK_H
