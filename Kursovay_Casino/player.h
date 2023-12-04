#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <algorithm>
#include "card.h"
#include "deck.h"
#include <QString>

class Player
{
    std::vector<Card> _playerHand;
    int _score{};

public:
    static int m_budget;

    Player() {};
    Player(Deck& deck, int numPlayers);

    void removeCardFromHand(const Card& card);
    int getNumCardsInHand() const;
    QString drawCard(Deck& deck);
    int score() const;
    bool isBust() const;
    const Card& getCardInHand(int index) const;
    std::vector<Card> getCardInHand();
    int getScore();
    void m_sortHandBySuit();
};

#endif // PLAYER_H
