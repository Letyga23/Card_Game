#ifndef RESULGAME_H
#define RESULGAME_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>

class ResultGame
{
    static QSqlDatabase* _db;
    static QSqlTableModel* _model;

public:
    ResultGame();

    static void win(QString game);
    static void lost(QString game);
    static void draw(QString game);
    static void resetProgress();
    static QSqlTableModel* getStatisticsModel();
    static int getNumberWins();

private:
    static int idGame(QString game);
};

#endif // RESULGAME_H
