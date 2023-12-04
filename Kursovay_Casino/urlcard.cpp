#include "urlcard.h"

QMap<Card, QString> UrlCard::_urlCard;

UrlCard::UrlCard()
{
    initializeUrlCard();
}

QString UrlCard::getUrlCard(Card card)
{
    return _urlCard[card];
}

void UrlCard::initializeUrlCard()
{
    _urlCard =
    {
        {{CardRank::RANK_2, CardSuit::SUIT_CLUB},           ":/" + Awards::_setAsset + "/Clubs/assets/" + Awards::_setAsset + "/Clubs/2.png"},
        {{CardRank::RANK_3, CardSuit::SUIT_CLUB},           ":/" + Awards::_setAsset + "/Clubs/assets/" + Awards::_setAsset + "/Clubs/3.png"},
        {{CardRank::RANK_4, CardSuit::SUIT_CLUB},           ":/" + Awards::_setAsset + "/Clubs/assets/" + Awards::_setAsset + "/Clubs/4.png"},
        {{CardRank::RANK_5, CardSuit::SUIT_CLUB},           ":/" + Awards::_setAsset + "/Clubs/assets/" + Awards::_setAsset + "/Clubs/5.png"},
        {{CardRank::RANK_6, CardSuit::SUIT_CLUB},           ":/" + Awards::_setAsset + "/Clubs/assets/" + Awards::_setAsset + "/Clubs/6.png"},
        {{CardRank::RANK_7, CardSuit::SUIT_CLUB},           ":/" + Awards::_setAsset + "/Clubs/assets/" + Awards::_setAsset + "/Clubs/7.png"},
        {{CardRank::RANK_8, CardSuit::SUIT_CLUB},           ":/" + Awards::_setAsset + "/Clubs/assets/" + Awards::_setAsset + "/Clubs/8.png"},
        {{CardRank::RANK_9, CardSuit::SUIT_CLUB},           ":/" + Awards::_setAsset + "/Clubs/assets/" + Awards::_setAsset + "/Clubs/9.png"},
        {{CardRank::RANK_10, CardSuit::SUIT_CLUB},          ":/" + Awards::_setAsset + "/Clubs/assets/" + Awards::_setAsset + "/Clubs/10.png"},
        {{CardRank::RANK_JACK, CardSuit::SUIT_CLUB},        ":/" + Awards::_setAsset + "/Clubs/assets/" + Awards::_setAsset + "/Clubs/J.png"},
        {{CardRank::RANK_QUEEN, CardSuit::SUIT_CLUB},       ":/" + Awards::_setAsset + "/Clubs/assets/" + Awards::_setAsset + "/Clubs/Q.png"},
        {{CardRank::RANK_KING, CardSuit::SUIT_CLUB},        ":/" + Awards::_setAsset + "/Clubs/assets/" + Awards::_setAsset + "/Clubs/K.png"},
        {{CardRank::RANK_ACE, CardSuit::SUIT_CLUB},         ":/" + Awards::_setAsset + "/Clubs/assets/" + Awards::_setAsset + "/Clubs/A.png"},

        {{CardRank::RANK_2, CardSuit::SUIT_DIAMOND},        ":/" + Awards::_setAsset + "/Diamonds/assets/" + Awards::_setAsset + "/Diamonds/2.png"},
        {{CardRank::RANK_3, CardSuit::SUIT_DIAMOND},        ":/" + Awards::_setAsset + "/Diamonds/assets/" + Awards::_setAsset + "/Diamonds/3.png"},
        {{CardRank::RANK_4, CardSuit::SUIT_DIAMOND},        ":/" + Awards::_setAsset + "/Diamonds/assets/" + Awards::_setAsset + "/Diamonds/4.png"},
        {{CardRank::RANK_5, CardSuit::SUIT_DIAMOND},        ":/" + Awards::_setAsset + "/Diamonds/assets/" + Awards::_setAsset + "/Diamonds/5.png"},
        {{CardRank::RANK_6, CardSuit::SUIT_DIAMOND},        ":/" + Awards::_setAsset + "/Diamonds/assets/" + Awards::_setAsset + "/Diamonds/6.png"},
        {{CardRank::RANK_7, CardSuit::SUIT_DIAMOND},        ":/" + Awards::_setAsset + "/Diamonds/assets/" + Awards::_setAsset + "/Diamonds/7.png"},
        {{CardRank::RANK_8, CardSuit::SUIT_DIAMOND},        ":/" + Awards::_setAsset + "/Diamonds/assets/" + Awards::_setAsset + "/Diamonds/8.png"},
        {{CardRank::RANK_9, CardSuit::SUIT_DIAMOND},        ":/" + Awards::_setAsset + "/Diamonds/assets/" + Awards::_setAsset + "/Diamonds/9.png"},
        {{CardRank::RANK_10, CardSuit::SUIT_DIAMOND},       ":/" + Awards::_setAsset + "/Diamonds/assets/" + Awards::_setAsset + "/Diamonds/10.png"},
        {{CardRank::RANK_JACK, CardSuit::SUIT_DIAMOND},     ":/" + Awards::_setAsset + "/Diamonds/assets/" + Awards::_setAsset + "/Diamonds/J.png"},
        {{CardRank::RANK_QUEEN, CardSuit::SUIT_DIAMOND},    ":/" + Awards::_setAsset + "/Diamonds/assets/" + Awards::_setAsset + "/Diamonds/Q.png"},
        {{CardRank::RANK_KING, CardSuit::SUIT_DIAMOND},     ":/" + Awards::_setAsset + "/Diamonds/assets/" + Awards::_setAsset + "/Diamonds/K.png"},
        {{CardRank::RANK_ACE, CardSuit::SUIT_DIAMOND},      ":/" + Awards::_setAsset + "/Diamonds/assets/" + Awards::_setAsset + "/Diamonds/A.png"},

        {{CardRank::RANK_2, CardSuit::SUIT_HEART},          ":/" + Awards::_setAsset + "/Hearts/assets/" + Awards::_setAsset + "/Hearts/2.png"},
        {{CardRank::RANK_3, CardSuit::SUIT_HEART},          ":/" + Awards::_setAsset + "/Hearts/assets/" + Awards::_setAsset + "/Hearts/3.png"},
        {{CardRank::RANK_4, CardSuit::SUIT_HEART},          ":/" + Awards::_setAsset + "/Hearts/assets/" + Awards::_setAsset + "/Hearts/4.png"},
        {{CardRank::RANK_5, CardSuit::SUIT_HEART},          ":/" + Awards::_setAsset + "/Hearts/assets/" + Awards::_setAsset + "/Hearts/5.png"},
        {{CardRank::RANK_6, CardSuit::SUIT_HEART},          ":/" + Awards::_setAsset + "/Hearts/assets/" + Awards::_setAsset + "/Hearts/6.png"},
        {{CardRank::RANK_7, CardSuit::SUIT_HEART},          ":/" + Awards::_setAsset + "/Hearts/assets/" + Awards::_setAsset + "/Hearts/7.png"},
        {{CardRank::RANK_8, CardSuit::SUIT_HEART},          ":/" + Awards::_setAsset + "/Hearts/assets/" + Awards::_setAsset + "/Hearts/8.png"},
        {{CardRank::RANK_9, CardSuit::SUIT_HEART},          ":/" + Awards::_setAsset + "/Hearts/assets/" + Awards::_setAsset + "/Hearts/9.png"},
        {{CardRank::RANK_10, CardSuit::SUIT_HEART},         ":/" + Awards::_setAsset + "/Hearts/assets/" + Awards::_setAsset + "/Hearts/10.png"},
        {{CardRank::RANK_JACK, CardSuit::SUIT_HEART},       ":/" + Awards::_setAsset + "/Hearts/assets/" + Awards::_setAsset + "/Hearts/J.png"},
        {{CardRank::RANK_QUEEN, CardSuit::SUIT_HEART},      ":/" + Awards::_setAsset + "/Hearts/assets/" + Awards::_setAsset + "/Hearts/Q.png"},
        {{CardRank::RANK_KING, CardSuit::SUIT_HEART},       ":/" + Awards::_setAsset + "/Hearts/assets/" + Awards::_setAsset + "/Hearts/K.png"},
        {{CardRank::RANK_ACE, CardSuit::SUIT_HEART},        ":/" + Awards::_setAsset + "/Hearts/assets/" + Awards::_setAsset + "/Hearts/A.png"},

        {{CardRank::RANK_2, CardSuit::SUIT_SPADE},          ":/" + Awards::_setAsset + "/Spades/assets/" + Awards::_setAsset + "/Spades/2.png"},
        {{CardRank::RANK_3, CardSuit::SUIT_SPADE},          ":/" + Awards::_setAsset + "/Spades/assets/" + Awards::_setAsset + "/Spades/3.png"},
        {{CardRank::RANK_4, CardSuit::SUIT_SPADE},          ":/" + Awards::_setAsset + "/Spades/assets/" + Awards::_setAsset + "/Spades/4.png"},
        {{CardRank::RANK_5, CardSuit::SUIT_SPADE},          ":/" + Awards::_setAsset + "/Spades/assets/" + Awards::_setAsset + "/Spades/5.png"},
        {{CardRank::RANK_6, CardSuit::SUIT_SPADE},          ":/" + Awards::_setAsset + "/Spades/assets/" + Awards::_setAsset + "/Spades/6.png"},
        {{CardRank::RANK_7, CardSuit::SUIT_SPADE},          ":/" + Awards::_setAsset + "/Spades/assets/" + Awards::_setAsset + "/Spades/7.png"},
        {{CardRank::RANK_8, CardSuit::SUIT_SPADE},          ":/" + Awards::_setAsset + "/Spades/assets/" + Awards::_setAsset + "/Spades/8.png"},
        {{CardRank::RANK_9, CardSuit::SUIT_SPADE},          ":/" + Awards::_setAsset + "/Spades/assets/" + Awards::_setAsset + "/Spades/9.png"},
        {{CardRank::RANK_10, CardSuit::SUIT_SPADE},         ":/" + Awards::_setAsset + "/Spades/assets/" + Awards::_setAsset + "/Spades/10.png"},
        {{CardRank::RANK_JACK, CardSuit::SUIT_SPADE},       ":/" + Awards::_setAsset + "/Spades/assets/" + Awards::_setAsset + "/Spades/J.png"},
        {{CardRank::RANK_QUEEN, CardSuit::SUIT_SPADE},      ":/" + Awards::_setAsset + "/Spades/assets/" + Awards::_setAsset + "/Spades/Q.png"},
        {{CardRank::RANK_KING, CardSuit::SUIT_SPADE},       ":/" + Awards::_setAsset + "/Spades/assets/" + Awards::_setAsset + "/Spades/K.png"},
        {{CardRank::RANK_ACE, CardSuit::SUIT_SPADE},        ":/" + Awards::_setAsset + "/Spades/assets/" + Awards::_setAsset + "/Spades/A.png"}
    };
}
