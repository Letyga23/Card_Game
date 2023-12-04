#ifndef NUMBEROFPLAYERS_H
#define NUMBEROFPLAYERS_H

#include <QDialog>

namespace Ui {
class NumberOfPlayers;
}

class NumberOfPlayers : public QDialog
{
    Q_OBJECT
    int _numPlayers;

public:
    explicit NumberOfPlayers(QWidget *parent = nullptr);
    ~NumberOfPlayers();
    int getNumPlayers() const;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::NumberOfPlayers *ui;
};

#endif // NUMBEROFPLAYERS_H
