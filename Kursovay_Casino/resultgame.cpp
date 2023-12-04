#include "resultgame.h"
#include <QSql>

QSqlDatabase* ResultGame::_db = nullptr;
QSqlTableModel* ResultGame::_model = nullptr;

ResultGame::ResultGame()
{ 
    _db = new QSqlDatabase(QSqlDatabase::addDatabase("QSQLITE"));
    _db->setDatabaseName("Save/save.sqlite");
    _model = new QSqlTableModel(nullptr, *_db);
}

void ResultGame::win(QString game)
{
    int id = idGame(game);

    _db->open();
    QString zapros = "INSERT INTO Statistics (id_game, id_result) VALUES (" + QString::number(id) + ", 2);";
    QSqlQuery quary(zapros);
    quary.next();
    _db->close();
}

void ResultGame::lost(QString game)
{
    int id = idGame(game);

    _db->open();
    QString zapros = "INSERT INTO Statistics (id_game, id_result) VALUES (" + QString::number(id) + ", 1);";
    QSqlQuery quary(zapros);
    quary.next();
    _db->close();
}

void ResultGame::draw(QString game)
{
    int id = idGame(game);

    _db->open();
    QString zapros = "INSERT INTO Statistics (id_game, id_result) VALUES (" + QString::number(id) + ", 3);";
    QSqlQuery quary(zapros);
    quary.next();
    _db->close();
}

int ResultGame::idGame(QString game)
{
    int id = 0;

    if(game == "Блэкджек")
        id = 1;
    else if(game == "Девятка")
        id = 2;

    return id;
}

void ResultGame::resetProgress()
{
    _db->open();
    QString zapros = "DELETE FROM Statistics;";
    QSqlQuery quary(zapros);
    quary.next();
    _db->close();
}

QSqlTableModel* ResultGame::getStatisticsModel()
{
    _db->open();
    _model->setTable("Statistics_pred");
    _model->select();
    _db->close();
    return _model;
}

int ResultGame::getNumberWins()
{
    int number;

    _db->open();
    QString zapros = "SELECT COUNT(*) FROM Statistics WHERE id_result = 2;";
    QSqlQuery quary(zapros);
    quary.next();
    number = quary.value(0).toInt();
    _db->close();

    return number;

}
