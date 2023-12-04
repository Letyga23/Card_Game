#ifndef CHEST_H
#define CHEST_H

#include "chestwindow.h"
#include "deck.h"
#include "player.h"

class Chest
{
    Ui::ChestWindow* _ui;
    QString _nameGame;
    Deck _deck;
    Player _player;
    Player _bot;

public:
    Chest();
};

#endif // CHEST_H
