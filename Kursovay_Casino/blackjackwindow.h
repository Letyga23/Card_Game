#ifndef BLACKDJACK_H
#define BLACKDJACK_H

#include <QMainWindow>
#include <QLabel>
#include "deck.h"
#include "player.h"
#include "blackjack.h"

namespace Ui {
class BlackjackWindows;
}

class BlackjackWindows : public QMainWindow
{
    Q_OBJECT
    Ui::BlackjackWindows *ui;
    Blackjack* _game;
    bool _fullScreen;

public:
    explicit BlackjackWindows(QWidget *parent = nullptr);
    ~BlackjackWindows();
    static QMap<int, QLabel*> cardOnTablePlayer;
    static QMap<int, QLabel*> cardOnTableDiller;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_action_2_triggered();
    void on_action_3_triggered();
    void on_action_triggered();
};

#endif // BLACKDJACK_H
