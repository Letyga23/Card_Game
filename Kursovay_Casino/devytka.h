#ifndef DEVYTKA_H
#define DEVYTKA_H

#include "deck.h"
#include "player.h"
#include "ui_devytkawindow.h"
#include <QPushButton>

class Devytka
{
private:
    QString _nameGame;
    Deck _deck;
    Player _player;
    std::vector<Player*> _bot;
    int _numTableCardsBySuit[numSuit];
    std::vector<int> _cardsOnTable[numSuit];
    bool _nineBubna = false;
    Ui::DevytkaWindow *ui;
    bool _win;

public:
    Devytka(Ui::DevytkaWindow *_ui);
    static int numPlayers;

    bool movePlayer(QToolButton *button);
    bool canPlayCard(const Card& card);
    void moveBot();

};

#endif // DEVYTKA_H
