/********************************************************************************
** Form generated from reading UI file 'chestwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHESTWINDOW_H
#define UI_CHESTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChestWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *ChestWindow)
    {
        if (ChestWindow->objectName().isEmpty())
            ChestWindow->setObjectName(QString::fromUtf8("ChestWindow"));
        ChestWindow->resize(800, 600);
        centralwidget = new QWidget(ChestWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ChestWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(ChestWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        ChestWindow->setMenuBar(menuBar);

        retranslateUi(ChestWindow);

        QMetaObject::connectSlotsByName(ChestWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ChestWindow)
    {
        ChestWindow->setWindowTitle(QApplication::translate("ChestWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChestWindow: public Ui_ChestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHESTWINDOW_H
