#include "blackjackwindow.h"
#include "ui_blackjackwindow.h"
#include "mainwindow.h"

QMap<int, QLabel*> BlackjackWindows::cardOnTablePlayer;
QMap<int, QLabel*> BlackjackWindows::cardOnTableDiller;

BlackjackWindows::BlackjackWindows(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BlackjackWindows)
{
    ui->setupUi(this);

    ui->label_6->setText("");
    _game = new Blackjack(ui);

    cardOnTablePlayer[0] = ui ->label;
    cardOnTablePlayer[1] = ui ->label_10;
    cardOnTablePlayer[2] = ui ->label_11;
    cardOnTablePlayer[3] = ui ->label_12;
    cardOnTablePlayer[4] = ui ->label_13;
    cardOnTablePlayer[5] = ui ->label_14;
    cardOnTablePlayer[6] = ui ->label_7;
    cardOnTablePlayer[7] = ui ->label_8;

    cardOnTableDiller[0] = ui ->label_19;
    cardOnTableDiller[1] = ui ->label_21;
    cardOnTableDiller[2] = ui ->label_23;
    cardOnTableDiller[3] = ui ->label_25;
    cardOnTableDiller[4] = ui ->label_20;
    cardOnTableDiller[5] = ui ->label_22;
    cardOnTableDiller[6] = ui ->label_24;
    cardOnTableDiller[7] = ui ->label_26;
}


BlackjackWindows::~BlackjackWindows()
{
    delete ui;
}

void BlackjackWindows::on_pushButton_clicked()
{
    _game->takeKard();
}

void BlackjackWindows::on_pushButton_2_clicked()
{
    _game->enough();
}


void BlackjackWindows::on_action_2_triggered()
{
    delete _game;
    _game = new Blackjack(ui);
    ui->label_6->setText("");
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);

    for(int i = 0; i < 9; i++)
        cardOnTablePlayer[i]->setStyleSheet("");

    for(int i = 0; i < 8; i++)
        cardOnTableDiller[i]->setStyleSheet("");
}

void BlackjackWindows::on_action_3_triggered()
{
    MainWindow *w = new MainWindow();
    w->show();
    close();
}

void BlackjackWindows::on_action_triggered()
{
    if (_fullScreen)
    {
        showNormal();
        _fullScreen = false;
        ui->action->setText("Полноэкранный режим");
    }
    else
    {
        showFullScreen();
        _fullScreen = true;
        ui->action->setText("Оконный режим");
    }
}
