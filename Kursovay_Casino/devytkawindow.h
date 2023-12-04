#ifndef DEVYTKAWINDOW_H
#define DEVYTKAWINDOW_H

#include <QMainWindow>
#include "devytka.h"

namespace Ui {
class DevytkaWindow;
}

class DevytkaWindow : public QMainWindow
{
    Q_OBJECT
    Ui::DevytkaWindow *ui;
    Devytka* _game;
    bool _startGame;
    bool _fullScreen;
    int _screenWidth;
    int _screenHeight;

public:
    explicit DevytkaWindow(bool fullScreen = false, QWidget *parent = nullptr);
    ~DevytkaWindow();
    static QMap<QString, QLabel*> cardOnTable;

private:
    void resizeEvent(QResizeEvent* event);

private slots:
    void on_action_4_triggered();
    void on_action_5_triggered();
    void playerMove();
    void on_action_2_triggered();
    void on_action_triggered();
    void on_action_3_triggered();
};

#endif // DEVYTKAWINDOW_H
