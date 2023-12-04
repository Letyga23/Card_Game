#ifndef GAMEDIALOG_H
#define GAMEDIALOG_H

#include <QDialog>

namespace Ui {
class GameDialog;
}

class GameDialog : public QDialog
{
    Q_OBJECT
    Ui::GameDialog *ui;

public:
    explicit GameDialog(QWidget *parent = nullptr);
    ~GameDialog();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

signals:
    void gameSelected(const QString &gameName);
};

#endif // GAMEDIALOG_H
