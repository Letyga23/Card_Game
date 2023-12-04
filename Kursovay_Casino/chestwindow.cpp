#include "chestwindow.h"
#include "ui_chestwindow.h"

ChestWindow::ChestWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChestWindow)
{
    ui->setupUi(this);
}

ChestWindow::~ChestWindow()
{
    delete ui;
}
