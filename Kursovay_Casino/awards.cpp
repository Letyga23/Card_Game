#include "awards.h"
#include "ui_awards.h"
#include "resultgame.h"
#include "urlcard.h"
#include <QDesktopServices>
#include <QUrl>
#include <QFile>
#include <QDebug>

Set Awards::_setCard = Set::Standart;
QString Awards::_setAsset = "Standart";

Awards::Awards(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Awards)
{
    ui->setupUi(this);

    _assetSelection =
    {
        {Set::Standart, "Standart"},
        {Set::Average, "Average"},
        {Set::Premium, "Premium"}
    };
}

Awards::~Awards()
{
    delete ui;
}

void Awards::installSet()
{
    if(_setCard == Set::Standart)
        ui->standartSet->setChecked(true);
    else if(_setCard == Set::Average)
        ui->averageSet->setChecked(true);
    else if(_setCard == Set::Premium)
        ui->premiumSet->setChecked(true);
}

void Awards::showEvent(QShowEvent *event)
{
    Q_UNUSED(event);

    int numWin = ResultGame::getNumberWins();
    ui->numberWin->setText(QString::number(numWin));

    if(numWin >= 5)
        ui->averageSet->setEnabled(true);

    if(numWin >= 10)
        ui->premiumSet->setEnabled(true);

    installSet();
}

void Awards::on_pushButton_clicked()
{
    _setAsset = _assetSelection[_setCard];
    UrlCard::initializeUrlCard();
    accept();
}

void Awards::on_standartSet_clicked()
{
    _setCard = Set::Standart;
}

void Awards::on_averageSet_clicked()
{
    _setCard = Set::Average;
}

void Awards::on_premiumSet_clicked()
{
    _setCard = Set::Premium;
}

void Awards::on_pushButton_2_clicked()
{
    QString resourcePath = "://assets/standartSet.png";
    QString tempDir = QStandardPaths::writableLocation(QStandardPaths::TempLocation);
    QString tempFilePath = tempDir + "/standartSet.png";
    QFile::copy(resourcePath, tempFilePath);
    QUrl fileUrl = QUrl::fromLocalFile(tempFilePath);
    QDesktopServices::openUrl(fileUrl);
}

void Awards::on_pushButton_4_clicked()
{
    QString resourcePath = "://assets/averageSet.png";
    QString tempDir = QStandardPaths::writableLocation(QStandardPaths::TempLocation);
    QString tempFilePath = tempDir + "/averageSet.png";
    QFile::copy(resourcePath, tempFilePath);
    QUrl fileUrl = QUrl::fromLocalFile(tempFilePath);
    QDesktopServices::openUrl(fileUrl);
}

void Awards::on_pushButton_3_clicked()
{
    QString resourcePath = "://assets/premiumSet.png";
    QString tempDir = QStandardPaths::writableLocation(QStandardPaths::TempLocation);
    QString tempFilePath = tempDir + "/premiumSet.png";
    QFile::copy(resourcePath, tempFilePath);
    QUrl fileUrl = QUrl::fromLocalFile(tempFilePath);
    QDesktopServices::openUrl(fileUrl);
}
