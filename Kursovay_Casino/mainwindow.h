#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Ui::MainWindow *ui;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onGameSelected(const QString &gameName);
    void on_exitButton_clicked();
    void on_statisticsButton_clicked();
    void on_startGameButton_clicked();
    void on_rewardsButton_clicked();
};
#endif // MAINWINDOW_H
