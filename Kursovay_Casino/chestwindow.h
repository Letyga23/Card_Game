#ifndef CHESTWINDOW_H
#define CHESTWINDOW_H

#include <QMainWindow>

namespace Ui {
class ChestWindow;
}

class ChestWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChestWindow(QWidget *parent = nullptr);
    ~ChestWindow();

private:
    Ui::ChestWindow *ui;
};

#endif // CHESTWINDOW_H
