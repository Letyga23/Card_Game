#include "gamedialog.h"
#include "ui_gamedialog.h"
#include "blackjackwindow.h"
#include <QBitmap>
#include <QPainter>

GameDialog::GameDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameDialog)
{
    ui->setupUi(this);
}

GameDialog::~GameDialog()
{
    delete ui;
}

void GameDialog::on_pushButton_clicked()
{
    emit gameSelected("Блэкджек");
    accept();
}

void GameDialog::on_pushButton_2_clicked()
{
    emit gameSelected("Девятка");
    accept();
}

void GameDialog::on_pushButton_3_clicked()
{
    emit gameSelected("Сундук");
    accept();
}
