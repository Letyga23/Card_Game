#include "mainwindow.h"
#include "gamedialog.h"
#include "ui_mainwindow.h"
#include "blackjackwindow.h"
#include "devytkawindow.h"
#include "chestwindow.h"
#include "statistics.h"
#include "resultgame.h"
#include "awards.h"
#include "urlcard.h"
#include "awards.h"
#include "urlcard.h"
#include <QApplication>
#include <QMouseEvent>
#include <QBitmap>
#include <QPainter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ResultGame();
    Awards();
    UrlCard();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onGameSelected(const QString &gameName)
{
    QMainWindow* gameWindow = nullptr;

    if(gameName == "Блэкджек")
        gameWindow = new BlackjackWindows();

    else if(gameName == "Девятка")
        gameWindow = new DevytkaWindow();

    else if(gameName == "Сундук")
        gameWindow = new ChestWindow();

    gameWindow->show();
    close();
}


void MainWindow::on_exitButton_clicked()
{
    close();
}

void MainWindow::on_statisticsButton_clicked()
{
    Statistics statistic(nullptr);
    statistic.exec();
}

void MainWindow::on_startGameButton_clicked()
{
    GameDialog dialog(nullptr);
    connect(&dialog, &GameDialog::gameSelected, this, &MainWindow::onGameSelected);
    dialog.exec();
}

void MainWindow::on_rewardsButton_clicked()
{
    Awards award(nullptr);
    award.exec();
}
