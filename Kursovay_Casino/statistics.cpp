#include "statistics.h"
#include "ui_statistics.h"
#include "resultgame.h"
#include "awards.h"

Statistics::Statistics(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Statistics)
{
    ui->setupUi(this);

    QFont font = ui->tableView->horizontalHeader()->font();
    font.setBold(true);
    ui->tableView->horizontalHeader()->setFont(font);

    // Устанавливаем растягивание для заголовков строк и столбцов
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    //Заперт редактирования данных в ячейке
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setModel(ResultGame::getStatisticsModel());
}

Statistics::~Statistics()
{
    delete ui;
}

void Statistics::on_pushButton_clicked()
{
    ResultGame::resetProgress();
    ui->tableView->setModel(ResultGame::getStatisticsModel());
    Awards::_setCard = Set::Standart;
}
