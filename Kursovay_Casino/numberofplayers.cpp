#include "numberofplayers.h"
#include "ui_numberofplayers.h"

NumberOfPlayers::NumberOfPlayers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NumberOfPlayers)
{
    ui->setupUi(this);
    _numPlayers = 0;
}

NumberOfPlayers::~NumberOfPlayers()
{
    delete ui;
}

void NumberOfPlayers::on_pushButton_clicked()
{
    _numPlayers = 1;
    accept();
}

void NumberOfPlayers::on_pushButton_2_clicked()
{
    _numPlayers = 3;
    accept();
}

int NumberOfPlayers::getNumPlayers() const
{
    return _numPlayers;
}
