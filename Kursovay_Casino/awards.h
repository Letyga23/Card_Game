#ifndef AWARDS_H
#define AWARDS_H

#include <QDialog>
#include <QMap>

enum class Set{
    Standart,
    Average,
    Premium
};

namespace Ui {
class Awards;
}

class Awards : public QDialog
{
    Q_OBJECT
    Ui::Awards *ui;

public:
    explicit Awards(QWidget *parent = nullptr);
    ~Awards();
    static Set _setCard;
    static QString _setAsset;
    QMap<Set, QString> _assetSelection;

private:
    void installSet();

private slots:
    void showEvent(QShowEvent *event);
    void on_pushButton_clicked();
    void on_standartSet_clicked();
    void on_averageSet_clicked();
    void on_premiumSet_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
};

#endif // AWARDS_H
