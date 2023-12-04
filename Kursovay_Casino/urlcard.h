#ifndef URLCARD_H
#define URLCARD_H

#include "card.h"
#include "awards.h"
#include <QMap>
#include <QString>

class UrlCard
{
public:
    static QMap<Card, QString> _urlCard;

    UrlCard();
    static QString getUrlCard(Card card);
    static void initializeUrlCard();
};

#endif // URLCARD_H
