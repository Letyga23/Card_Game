/********************************************************************************
** Form generated from reading UI file 'blackjackwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLACKJACKWINDOW_H
#define UI_BLACKJACKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlackjackWindows
{
public:
    QAction *action_2;
    QAction *action_3;
    QAction *action;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_7;
    QLabel *label_21;
    QLabel *label_24;
    QLabel *label_26;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_20;
    QLabel *label_3;
    QLabel *label_23;
    QLabel *label_15;
    QLabel *label_17;
    QLabel *label_25;
    QLabel *label_22;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_27;
    QLabel *label_4;
    QLabel *label_13;
    QLabel *label_19;
    QLabel *label_18;
    QLabel *label_16;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *toolBar;

    void setupUi(QMainWindow *BlackjackWindows)
    {
        if (BlackjackWindows->objectName().isEmpty())
            BlackjackWindows->setObjectName(QString::fromUtf8("BlackjackWindows"));
        BlackjackWindows->resize(896, 641);
        BlackjackWindows->setStyleSheet(QString::fromUtf8("QWidget#centralwidget {\n"
"	background-color: rgb(0, 170, 127);\n"
"	border: 3px solid #4d4d4d;\n"
"}"));
        action_2 = new QAction(BlackjackWindows);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        action_2->setFont(font);
        action_2->setIconVisibleInMenu(true);
        action_3 = new QAction(BlackjackWindows);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_3->setFont(font);
        action = new QAction(BlackjackWindows);
        action->setObjectName(QString::fromUtf8("action"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(10);
        action->setFont(font1);
        centralwidget = new QWidget(BlackjackWindows);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setMinimumSize(QSize(80, 120));

        gridLayout->addWidget(label_8, 10, 8, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_5->setFont(font2);

        gridLayout->addWidget(label_5, 1, 2, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(80, 120));

        gridLayout->addWidget(label, 10, 1, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(80, 120));

        gridLayout->addWidget(label_7, 10, 7, 1, 1);

        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);
        label_21->setMinimumSize(QSize(80, 120));

        gridLayout->addWidget(label_21, 2, 5, 1, 1);

        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        sizePolicy.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy);
        label_24->setMinimumSize(QSize(80, 120));

        gridLayout->addWidget(label_24, 3, 5, 1, 1);

        label_26 = new QLabel(centralwidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        sizePolicy.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy);
        label_26->setMinimumSize(QSize(80, 120));

        gridLayout->addWidget(label_26, 3, 6, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI"));
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 11, 1, 1, 9);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMaximumSize(QSize(16777215, 100));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Segoe UI"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        pushButton_2->setFont(font4);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: rgb(255, 85, 0);\n"
"   border: 2px solid #27ae60;\n"
"   padding: 10px;\n"
"	color: #ecf0f1;\n"
"	border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	 background-color: rgb(255, 165, 39);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	 background-color: rgb(136, 45, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_2, 8, 3, 1, 2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMaximumSize(QSize(16777215, 100));
        pushButton->setFont(font4);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: rgb(255, 85, 0);\n"
"   border: 2px solid #27ae60;\n"
"   padding: 10px;\n"
"	color: #ecf0f1;\n"
"	border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	 background-color: rgb(255, 165, 39);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	 background-color: rgb(136, 45, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton, 8, 1, 1, 2);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);
        label_20->setMinimumSize(QSize(80, 120));

        gridLayout->addWidget(label_20, 3, 4, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Segoe UI"));
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        label_3->setFont(font5);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        sizePolicy.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy);
        label_23->setMinimumSize(QSize(80, 120));

        gridLayout->addWidget(label_23, 2, 6, 1, 1);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Segoe UI"));
        font6.setPointSize(14);
        label_15->setFont(font6);

        gridLayout->addWidget(label_15, 9, 1, 1, 1);

        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setEnabled(true);
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);"));

        gridLayout->addWidget(label_17, 7, 1, 1, 9);

        label_25 = new QLabel(centralwidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        sizePolicy.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy);
        label_25->setMinimumSize(QSize(80, 120));

        gridLayout->addWidget(label_25, 2, 7, 1, 1);

        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        sizePolicy.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy);
        label_22->setMinimumSize(QSize(80, 120));

        gridLayout->addWidget(label_22, 3, 7, 1, 1);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setMinimumSize(QSize(80, 120));

        gridLayout->addWidget(label_12, 10, 4, 1, 1);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        label_14->setMinimumSize(QSize(80, 120));

        gridLayout->addWidget(label_14, 10, 6, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font5);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setMinimumSize(QSize(80, 120));

        gridLayout->addWidget(label_10, 10, 2, 1, 1);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setMinimumSize(QSize(80, 120));

        gridLayout->addWidget(label_11, 10, 3, 1, 1);

        label_27 = new QLabel(centralwidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setStyleSheet(QString::fromUtf8("image: url(:/assets/\320\232\320\276\320\273\320\276\320\264\320\260.png);"));

        gridLayout->addWidget(label_27, 3, 1, 1, 2);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setMinimumSize(QSize(80, 120));

        gridLayout->addWidget(label_13, 10, 5, 1, 1);

        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        sizePolicy.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy);
        label_19->setMinimumSize(QSize(80, 120));

        gridLayout->addWidget(label_19, 2, 4, 1, 1);

        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setEnabled(true);
        label_18->setMaximumSize(QSize(14, 16777215));
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);"));

        gridLayout->addWidget(label_18, 0, 3, 7, 1);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font6);

        gridLayout->addWidget(label_16, 0, 4, 1, 1);

        BlackjackWindows->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(BlackjackWindows);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 896, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        BlackjackWindows->setMenuBar(menuBar);
        toolBar = new QToolBar(BlackjackWindows);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        BlackjackWindows->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu->menuAction());
        menu->addSeparator();
        menu->addAction(action_2);
        menu->addAction(action_3);
        menu->addAction(action);
        toolBar->addAction(action_2);

        retranslateUi(BlackjackWindows);

        QMetaObject::connectSlotsByName(BlackjackWindows);
    } // setupUi

    void retranslateUi(QMainWindow *BlackjackWindows)
    {
        BlackjackWindows->setWindowTitle(QApplication::translate("BlackjackWindows", "\320\221\320\273\321\215\320\272\320\264\320\266\320\265\320\272", nullptr));
        action_2->setText(QApplication::translate("BlackjackWindows", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\267\320\260\320\275\320\276\320\262\320\276", nullptr));
        action_2->setIconText(QApplication::translate("BlackjackWindows", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\267\320\260\320\275\320\276\320\262\320\276", nullptr));
        action_3->setText(QApplication::translate("BlackjackWindows", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
        action->setText(QApplication::translate("BlackjackWindows", "\320\237\320\276\320\273\320\275\320\276\321\215\320\272\321\200\320\260\320\275\320\275\321\213\320\271 \321\200\320\265\320\266\320\270\320\274", nullptr));
#ifndef QT_NO_SHORTCUT
        action->setShortcut(QApplication::translate("BlackjackWindows", "F11", nullptr));
#endif // QT_NO_SHORTCUT
        label_8->setText(QString());
        label_5->setText(QApplication::translate("BlackjackWindows", "\320\276", nullptr));
        label->setText(QString());
        label_7->setText(QString());
        label_21->setText(QString());
        label_24->setText(QString());
        label_26->setText(QString());
        label_6->setText(QApplication::translate("BlackjackWindows", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        pushButton_2->setText(QApplication::translate("BlackjackWindows", "\320\245\320\262\320\260\321\202\320\270\321\202", nullptr));
        pushButton->setText(QApplication::translate("BlackjackWindows", "\320\222\320\267\321\217\321\202\321\214 \320\272\320\260\321\200\321\202\321\203", nullptr));
        label_20->setText(QString());
        label_3->setText(QApplication::translate("BlackjackWindows", "\320\224\320\270\320\273\320\273\320\265\321\200:", nullptr));
        label_23->setText(QString());
        label_15->setText(QApplication::translate("BlackjackWindows", "\320\222\320\260\321\210\320\270 \320\272\320\260\321\200\321\202\321\213:", nullptr));
        label_17->setText(QString());
        label_25->setText(QString());
        label_22->setText(QString());
        label_12->setText(QString());
        label_14->setText(QString());
        label_2->setText(QApplication::translate("BlackjackWindows", "\320\222\321\213:", nullptr));
        label_10->setText(QString());
        label_11->setText(QString());
        label_27->setText(QString());
        label_4->setText(QApplication::translate("BlackjackWindows", "\320\276", nullptr));
        label_13->setText(QString());
        label_19->setText(QString());
        label_18->setText(QString());
        label_16->setText(QApplication::translate("BlackjackWindows", "\320\224\320\270\320\273\320\273\320\265\321\200:", nullptr));
        menu->setTitle(QApplication::translate("BlackjackWindows", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217", nullptr));
        toolBar->setWindowTitle(QApplication::translate("BlackjackWindows", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BlackjackWindows: public Ui_BlackjackWindows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLACKJACKWINDOW_H
