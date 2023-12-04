#ifndef STATISTICS_H
#define STATISTICS_H

#include <QDialog>
#include <QSqlTableModel>

namespace Ui {
class Statistics;
}

class Statistics : public QDialog
{
    Q_OBJECT
    Ui::Statistics* ui;

public:
    explicit Statistics(QWidget *parent = nullptr);
    ~Statistics();

private slots:
    void on_pushButton_clicked();

};

#endif // STATISTICS_H
