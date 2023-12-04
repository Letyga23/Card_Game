/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *rewardsButton;
    QPushButton *statisticsButton;
    QPushButton *exitButton;
    QPushButton *startGameButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(323, 387);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: #ff5b00;\n"
"	border: 3px solid #4d4d4d;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        rewardsButton = new QPushButton(centralwidget);
        rewardsButton->setObjectName(QString::fromUtf8("rewardsButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rewardsButton->sizePolicy().hasHeightForWidth());
        rewardsButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setWeight(75);
        rewardsButton->setFont(font1);
        rewardsButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                             background-color: #2ecc71;\n"
"                             border: 2px solid #27ae60;\n"
"                             color: #ecf0f1;\n"
"                             padding: 10px;\n"
"                             border-radius: 15px;\n"
"                          }\n"
"\n"
"QPushButton:hover {\n"
"                            background-color: #27ae60;\n"
"                            color: #ffffff;\n"
"                         }\n"
"\n"
"QPushButton:pressed {\n"
"                            background-color: #229954;\n"
"                         }"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/\320\272\321\203\320\261\320\276\320\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        rewardsButton->setIcon(icon);
        rewardsButton->setIconSize(QSize(48, 48));

        gridLayout->addWidget(rewardsButton, 3, 1, 1, 1);

        statisticsButton = new QPushButton(centralwidget);
        statisticsButton->setObjectName(QString::fromUtf8("statisticsButton"));
        sizePolicy.setHeightForWidth(statisticsButton->sizePolicy().hasHeightForWidth());
        statisticsButton->setSizePolicy(sizePolicy);
        statisticsButton->setFont(font1);
        statisticsButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                             background-color: #2ecc71;\n"
"                             border: 2px solid #27ae60;\n"
"                             color: #ecf0f1;\n"
"                             padding: 10px;\n"
"                             border-radius: 15px;\n"
"                          }\n"
"\n"
"QPushButton:hover {\n"
"                            background-color: #27ae60;\n"
"                            color: #ffffff;\n"
"                         }\n"
"\n"
"QPushButton:pressed {\n"
"                            background-color: #229954;\n"
"                         }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/assets/\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260.png"), QSize(), QIcon::Normal, QIcon::Off);
        statisticsButton->setIcon(icon1);
        statisticsButton->setIconSize(QSize(48, 48));

        gridLayout->addWidget(statisticsButton, 2, 1, 1, 1);

        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        sizePolicy.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy);
        exitButton->setFont(font1);
        exitButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                             background-color: #2ecc71;\n"
"                             border: 2px solid #27ae60;\n"
"                             color: #ecf0f1;\n"
"                             padding: 10px;\n"
"                             border-radius: 15px;\n"
"                          }\n"
"\n"
"QPushButton:hover {\n"
"                            background-color: #27ae60;\n"
"                            color: #ffffff;\n"
"                         }\n"
"\n"
"QPushButton:pressed {\n"
"                            background-color: #229954;\n"
"                         }"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/assets/\320\262\321\213\320\271\321\202\320\270.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitButton->setIcon(icon2);
        exitButton->setIconSize(QSize(48, 48));

        gridLayout->addWidget(exitButton, 4, 1, 1, 1);

        startGameButton = new QPushButton(centralwidget);
        startGameButton->setObjectName(QString::fromUtf8("startGameButton"));
        sizePolicy.setHeightForWidth(startGameButton->sizePolicy().hasHeightForWidth());
        startGameButton->setSizePolicy(sizePolicy);
        startGameButton->setFont(font1);
        startGameButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                             background-color: #2ecc71;\n"
"                             border: 2px solid #27ae60;\n"
"                             color: #ecf0f1;\n"
"                             padding: 10px;\n"
"                             border-radius: 15px;\n"
"                          }\n"
"\n"
"QPushButton:hover {\n"
"                            background-color: #27ae60;\n"
"                            color: #ffffff;\n"
"                         }\n"
"\n"
"QPushButton:pressed {\n"
"                            background-color: #229954;\n"
"                         }"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/assets/\320\275\320\260\321\207\320\260\321\202\321\214 \320\270\320\263\321\200\321\203.png"), QSize(), QIcon::Normal, QIcon::Off);
        startGameButton->setIcon(icon3);
        startGameButton->setIconSize(QSize(48, 48));

        gridLayout->addWidget(startGameButton, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
        rewardsButton->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\263\321\200\320\260\320\264\321\213", nullptr));
        statisticsButton->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
        exitButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        startGameButton->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
