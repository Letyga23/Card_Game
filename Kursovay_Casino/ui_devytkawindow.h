/********************************************************************************
** Form generated from reading UI file 'devytkawindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVYTKAWINDOW_H
#define UI_DEVYTKAWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DevytkaWindow
{
public:
    QAction *action_2;
    QAction *action_4;
    QAction *action_5;
    QAction *action;
    QAction *action_3;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *spades3;
    QLabel *diamonds10;
    QLabel *diamondsK;
    QLabel *clubs4;
    QLabel *diamondsA;
    QLabel *hearts2;
    QLabel *diamonds6;
    QLabel *diamonds8;
    QLabel *clubs10;
    QLabel *diamonds5;
    QLabel *spadesA;
    QLabel *clubsQ;
    QLabel *hearts9;
    QLabel *spadesK;
    QLabel *spades2;
    QLabel *spadesQ;
    QLabel *spades5;
    QLabel *spades6;
    QLabel *clubsJ;
    QLabel *hearts10;
    QLabel *diamonds2;
    QLabel *hearts7;
    QLabel *hearts4;
    QLabel *hearts5;
    QLabel *clubs8;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *toolButton_22;
    QToolButton *toolButton_23;
    QToolButton *toolButton_24;
    QToolButton *toolButton_25;
    QToolButton *toolButton_26;
    QToolButton *toolButton_27;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QToolButton *toolButton_7;
    QToolButton *toolButton_8;
    QToolButton *toolButton_9;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_10;
    QToolButton *toolButton_11;
    QToolButton *toolButton_12;
    QToolButton *toolButton_13;
    QToolButton *toolButton_14;
    QToolButton *toolButton_15;
    QToolButton *toolButton_16;
    QToolButton *toolButton_17;
    QToolButton *toolButton_18;
    QToolButton *toolButton_19;
    QToolButton *toolButton_2;
    QToolButton *toolButton_20;
    QToolButton *toolButton_21;
    QSpacerItem *horizontalSpacer_3;
    QLabel *spades7;
    QLabel *hearts3;
    QLabel *clubsA;
    QLabel *spades9;
    QLabel *clubs2;
    QLabel *diamondsJ;
    QLabel *clubs5;
    QLabel *diamonds4;
    QLabel *diamonds7;
    QLabel *clubs9;
    QLabel *spades10;
    QLabel *heartsA;
    QLabel *heartsK;
    QLabel *clubsK;
    QLabel *diamonds3;
    QLabel *clubs3;
    QLabel *spades4;
    QLabel *spades8;
    QLabel *clubs7;
    QLabel *hearts6;
    QLabel *spadesJ;
    QLabel *clubs6;
    QLabel *hearts8;
    QLabel *game_progress;
    QLabel *diamonds9;
    QLabel *diamondsQ;
    QLabel *heartsJ;
    QLabel *heartsQ;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *toolBar;

    void setupUi(QMainWindow *DevytkaWindow)
    {
        if (DevytkaWindow->objectName().isEmpty())
            DevytkaWindow->setObjectName(QString::fromUtf8("DevytkaWindow"));
        DevytkaWindow->resize(1110, 800);
        DevytkaWindow->setStyleSheet(QString::fromUtf8("QWidget#centralwidget {\n"
"	background-color: rgb(0, 170, 127);\n"
"	border: 3px solid #4d4d4d;\n"
"}"));
        action_2 = new QAction(DevytkaWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_2->setEnabled(false);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(10);
        action_2->setFont(font);
        action_4 = new QAction(DevytkaWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_4->setFont(font);
        action_5 = new QAction(DevytkaWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_5->setFont(font);
        action = new QAction(DevytkaWindow);
        action->setObjectName(QString::fromUtf8("action"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        action->setFont(font1);
        action_3 = new QAction(DevytkaWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_3->setFont(font);
        centralwidget = new QWidget(DevytkaWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(60, 90));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spades3 = new QLabel(centralwidget);
        spades3->setObjectName(QString::fromUtf8("spades3"));
        sizePolicy.setHeightForWidth(spades3->sizePolicy().hasHeightForWidth());
        spades3->setSizePolicy(sizePolicy);
        spades3->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(spades3, 3, 4, 1, 1);

        diamonds10 = new QLabel(centralwidget);
        diamonds10->setObjectName(QString::fromUtf8("diamonds10"));
        sizePolicy.setHeightForWidth(diamonds10->sizePolicy().hasHeightForWidth());
        diamonds10->setSizePolicy(sizePolicy);
        diamonds10->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(diamonds10, 0, 11, 1, 1);

        diamondsK = new QLabel(centralwidget);
        diamondsK->setObjectName(QString::fromUtf8("diamondsK"));
        sizePolicy.setHeightForWidth(diamondsK->sizePolicy().hasHeightForWidth());
        diamondsK->setSizePolicy(sizePolicy);
        diamondsK->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(diamondsK, 0, 14, 1, 1);

        clubs4 = new QLabel(centralwidget);
        clubs4->setObjectName(QString::fromUtf8("clubs4"));
        sizePolicy.setHeightForWidth(clubs4->sizePolicy().hasHeightForWidth());
        clubs4->setSizePolicy(sizePolicy);
        clubs4->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(clubs4, 1, 5, 1, 1);

        diamondsA = new QLabel(centralwidget);
        diamondsA->setObjectName(QString::fromUtf8("diamondsA"));
        sizePolicy.setHeightForWidth(diamondsA->sizePolicy().hasHeightForWidth());
        diamondsA->setSizePolicy(sizePolicy);
        diamondsA->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(diamondsA, 0, 15, 1, 1);

        hearts2 = new QLabel(centralwidget);
        hearts2->setObjectName(QString::fromUtf8("hearts2"));
        sizePolicy.setHeightForWidth(hearts2->sizePolicy().hasHeightForWidth());
        hearts2->setSizePolicy(sizePolicy);
        hearts2->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(hearts2, 2, 3, 1, 1);

        diamonds6 = new QLabel(centralwidget);
        diamonds6->setObjectName(QString::fromUtf8("diamonds6"));
        sizePolicy.setHeightForWidth(diamonds6->sizePolicy().hasHeightForWidth());
        diamonds6->setSizePolicy(sizePolicy);
        diamonds6->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(diamonds6, 0, 7, 1, 1);

        diamonds8 = new QLabel(centralwidget);
        diamonds8->setObjectName(QString::fromUtf8("diamonds8"));
        sizePolicy.setHeightForWidth(diamonds8->sizePolicy().hasHeightForWidth());
        diamonds8->setSizePolicy(sizePolicy);
        diamonds8->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(diamonds8, 0, 9, 1, 1);

        clubs10 = new QLabel(centralwidget);
        clubs10->setObjectName(QString::fromUtf8("clubs10"));
        sizePolicy.setHeightForWidth(clubs10->sizePolicy().hasHeightForWidth());
        clubs10->setSizePolicy(sizePolicy);
        clubs10->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(clubs10, 1, 11, 1, 1);

        diamonds5 = new QLabel(centralwidget);
        diamonds5->setObjectName(QString::fromUtf8("diamonds5"));
        sizePolicy.setHeightForWidth(diamonds5->sizePolicy().hasHeightForWidth());
        diamonds5->setSizePolicy(sizePolicy);
        diamonds5->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(diamonds5, 0, 6, 1, 1);

        spadesA = new QLabel(centralwidget);
        spadesA->setObjectName(QString::fromUtf8("spadesA"));
        sizePolicy.setHeightForWidth(spadesA->sizePolicy().hasHeightForWidth());
        spadesA->setSizePolicy(sizePolicy);
        spadesA->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(spadesA, 3, 15, 1, 1);

        clubsQ = new QLabel(centralwidget);
        clubsQ->setObjectName(QString::fromUtf8("clubsQ"));
        sizePolicy.setHeightForWidth(clubsQ->sizePolicy().hasHeightForWidth());
        clubsQ->setSizePolicy(sizePolicy);
        clubsQ->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(clubsQ, 1, 13, 1, 1);

        hearts9 = new QLabel(centralwidget);
        hearts9->setObjectName(QString::fromUtf8("hearts9"));
        sizePolicy.setHeightForWidth(hearts9->sizePolicy().hasHeightForWidth());
        hearts9->setSizePolicy(sizePolicy);
        hearts9->setStyleSheet(QString::fromUtf8("image: url(:/Standart/Hearts/assets/Standart/Hearts/\320\247\320\265\321\200\320\262\320\260.png);"));

        gridLayout->addWidget(hearts9, 2, 10, 1, 1);

        spadesK = new QLabel(centralwidget);
        spadesK->setObjectName(QString::fromUtf8("spadesK"));
        sizePolicy.setHeightForWidth(spadesK->sizePolicy().hasHeightForWidth());
        spadesK->setSizePolicy(sizePolicy);
        spadesK->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(spadesK, 3, 14, 1, 1);

        spades2 = new QLabel(centralwidget);
        spades2->setObjectName(QString::fromUtf8("spades2"));
        sizePolicy.setHeightForWidth(spades2->sizePolicy().hasHeightForWidth());
        spades2->setSizePolicy(sizePolicy);
        spades2->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(spades2, 3, 3, 1, 1);

        spadesQ = new QLabel(centralwidget);
        spadesQ->setObjectName(QString::fromUtf8("spadesQ"));
        sizePolicy.setHeightForWidth(spadesQ->sizePolicy().hasHeightForWidth());
        spadesQ->setSizePolicy(sizePolicy);
        spadesQ->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(spadesQ, 3, 13, 1, 1);

        spades5 = new QLabel(centralwidget);
        spades5->setObjectName(QString::fromUtf8("spades5"));
        sizePolicy.setHeightForWidth(spades5->sizePolicy().hasHeightForWidth());
        spades5->setSizePolicy(sizePolicy);
        spades5->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(spades5, 3, 6, 1, 1);

        spades6 = new QLabel(centralwidget);
        spades6->setObjectName(QString::fromUtf8("spades6"));
        sizePolicy.setHeightForWidth(spades6->sizePolicy().hasHeightForWidth());
        spades6->setSizePolicy(sizePolicy);
        spades6->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(spades6, 3, 7, 1, 1);

        clubsJ = new QLabel(centralwidget);
        clubsJ->setObjectName(QString::fromUtf8("clubsJ"));
        sizePolicy.setHeightForWidth(clubsJ->sizePolicy().hasHeightForWidth());
        clubsJ->setSizePolicy(sizePolicy);
        clubsJ->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(clubsJ, 1, 12, 1, 1);

        hearts10 = new QLabel(centralwidget);
        hearts10->setObjectName(QString::fromUtf8("hearts10"));
        sizePolicy.setHeightForWidth(hearts10->sizePolicy().hasHeightForWidth());
        hearts10->setSizePolicy(sizePolicy);
        hearts10->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(hearts10, 2, 11, 1, 1);

        diamonds2 = new QLabel(centralwidget);
        diamonds2->setObjectName(QString::fromUtf8("diamonds2"));
        sizePolicy.setHeightForWidth(diamonds2->sizePolicy().hasHeightForWidth());
        diamonds2->setSizePolicy(sizePolicy);
        diamonds2->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(diamonds2, 0, 3, 1, 1);

        hearts7 = new QLabel(centralwidget);
        hearts7->setObjectName(QString::fromUtf8("hearts7"));
        sizePolicy.setHeightForWidth(hearts7->sizePolicy().hasHeightForWidth());
        hearts7->setSizePolicy(sizePolicy);
        hearts7->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(hearts7, 2, 8, 1, 1);

        hearts4 = new QLabel(centralwidget);
        hearts4->setObjectName(QString::fromUtf8("hearts4"));
        sizePolicy.setHeightForWidth(hearts4->sizePolicy().hasHeightForWidth());
        hearts4->setSizePolicy(sizePolicy);
        hearts4->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(hearts4, 2, 5, 1, 1);

        hearts5 = new QLabel(centralwidget);
        hearts5->setObjectName(QString::fromUtf8("hearts5"));
        sizePolicy.setHeightForWidth(hearts5->sizePolicy().hasHeightForWidth());
        hearts5->setSizePolicy(sizePolicy);
        hearts5->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(hearts5, 2, 6, 1, 1);

        clubs8 = new QLabel(centralwidget);
        clubs8->setObjectName(QString::fromUtf8("clubs8"));
        sizePolicy.setHeightForWidth(clubs8->sizePolicy().hasHeightForWidth());
        clubs8->setSizePolicy(sizePolicy);
        clubs8->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(clubs8, 1, 9, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        toolButton_22 = new QToolButton(centralwidget);
        toolButton_22->setObjectName(QString::fromUtf8("toolButton_22"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolButton_22->sizePolicy().hasHeightForWidth());
        toolButton_22->setSizePolicy(sizePolicy1);
        toolButton_22->setMinimumSize(QSize(60, 85));

        horizontalLayout_4->addWidget(toolButton_22);

        toolButton_23 = new QToolButton(centralwidget);
        toolButton_23->setObjectName(QString::fromUtf8("toolButton_23"));
        sizePolicy1.setHeightForWidth(toolButton_23->sizePolicy().hasHeightForWidth());
        toolButton_23->setSizePolicy(sizePolicy1);
        toolButton_23->setMinimumSize(QSize(60, 85));

        horizontalLayout_4->addWidget(toolButton_23);

        toolButton_24 = new QToolButton(centralwidget);
        toolButton_24->setObjectName(QString::fromUtf8("toolButton_24"));
        sizePolicy1.setHeightForWidth(toolButton_24->sizePolicy().hasHeightForWidth());
        toolButton_24->setSizePolicy(sizePolicy1);
        toolButton_24->setMinimumSize(QSize(60, 85));

        horizontalLayout_4->addWidget(toolButton_24);

        toolButton_25 = new QToolButton(centralwidget);
        toolButton_25->setObjectName(QString::fromUtf8("toolButton_25"));
        sizePolicy1.setHeightForWidth(toolButton_25->sizePolicy().hasHeightForWidth());
        toolButton_25->setSizePolicy(sizePolicy1);
        toolButton_25->setMinimumSize(QSize(60, 85));

        horizontalLayout_4->addWidget(toolButton_25);

        toolButton_26 = new QToolButton(centralwidget);
        toolButton_26->setObjectName(QString::fromUtf8("toolButton_26"));
        sizePolicy1.setHeightForWidth(toolButton_26->sizePolicy().hasHeightForWidth());
        toolButton_26->setSizePolicy(sizePolicy1);
        toolButton_26->setMinimumSize(QSize(60, 85));

        horizontalLayout_4->addWidget(toolButton_26);

        toolButton_27 = new QToolButton(centralwidget);
        toolButton_27->setObjectName(QString::fromUtf8("toolButton_27"));
        sizePolicy1.setHeightForWidth(toolButton_27->sizePolicy().hasHeightForWidth());
        toolButton_27->setSizePolicy(sizePolicy1);
        toolButton_27->setMinimumSize(QSize(60, 85));

        horizontalLayout_4->addWidget(toolButton_27);

        toolButton_3 = new QToolButton(centralwidget);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        sizePolicy1.setHeightForWidth(toolButton_3->sizePolicy().hasHeightForWidth());
        toolButton_3->setSizePolicy(sizePolicy1);
        toolButton_3->setMinimumSize(QSize(60, 85));

        horizontalLayout_4->addWidget(toolButton_3);

        toolButton_4 = new QToolButton(centralwidget);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        sizePolicy1.setHeightForWidth(toolButton_4->sizePolicy().hasHeightForWidth());
        toolButton_4->setSizePolicy(sizePolicy1);
        toolButton_4->setMinimumSize(QSize(60, 85));

        horizontalLayout_4->addWidget(toolButton_4);

        toolButton_5 = new QToolButton(centralwidget);
        toolButton_5->setObjectName(QString::fromUtf8("toolButton_5"));
        sizePolicy1.setHeightForWidth(toolButton_5->sizePolicy().hasHeightForWidth());
        toolButton_5->setSizePolicy(sizePolicy1);
        toolButton_5->setMinimumSize(QSize(60, 85));

        horizontalLayout_4->addWidget(toolButton_5);

        toolButton_6 = new QToolButton(centralwidget);
        toolButton_6->setObjectName(QString::fromUtf8("toolButton_6"));
        sizePolicy1.setHeightForWidth(toolButton_6->sizePolicy().hasHeightForWidth());
        toolButton_6->setSizePolicy(sizePolicy1);
        toolButton_6->setMinimumSize(QSize(60, 85));

        horizontalLayout_4->addWidget(toolButton_6);

        toolButton_7 = new QToolButton(centralwidget);
        toolButton_7->setObjectName(QString::fromUtf8("toolButton_7"));
        sizePolicy1.setHeightForWidth(toolButton_7->sizePolicy().hasHeightForWidth());
        toolButton_7->setSizePolicy(sizePolicy1);
        toolButton_7->setMinimumSize(QSize(60, 85));

        horizontalLayout_4->addWidget(toolButton_7);

        toolButton_8 = new QToolButton(centralwidget);
        toolButton_8->setObjectName(QString::fromUtf8("toolButton_8"));
        sizePolicy1.setHeightForWidth(toolButton_8->sizePolicy().hasHeightForWidth());
        toolButton_8->setSizePolicy(sizePolicy1);
        toolButton_8->setMinimumSize(QSize(60, 85));

        horizontalLayout_4->addWidget(toolButton_8);

        toolButton_9 = new QToolButton(centralwidget);
        toolButton_9->setObjectName(QString::fromUtf8("toolButton_9"));
        sizePolicy1.setHeightForWidth(toolButton_9->sizePolicy().hasHeightForWidth());
        toolButton_9->setSizePolicy(sizePolicy1);
        toolButton_9->setMinimumSize(QSize(60, 85));

        horizontalLayout_4->addWidget(toolButton_9);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_4, 7, 3, 1, 13);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        toolButton_10 = new QToolButton(centralwidget);
        toolButton_10->setObjectName(QString::fromUtf8("toolButton_10"));
        sizePolicy1.setHeightForWidth(toolButton_10->sizePolicy().hasHeightForWidth());
        toolButton_10->setSizePolicy(sizePolicy1);
        toolButton_10->setMinimumSize(QSize(60, 85));
        toolButton_10->setCheckable(false);
        toolButton_10->setAutoRepeat(false);

        horizontalLayout_2->addWidget(toolButton_10);

        toolButton_11 = new QToolButton(centralwidget);
        toolButton_11->setObjectName(QString::fromUtf8("toolButton_11"));
        sizePolicy1.setHeightForWidth(toolButton_11->sizePolicy().hasHeightForWidth());
        toolButton_11->setSizePolicy(sizePolicy1);
        toolButton_11->setMinimumSize(QSize(60, 85));

        horizontalLayout_2->addWidget(toolButton_11);

        toolButton_12 = new QToolButton(centralwidget);
        toolButton_12->setObjectName(QString::fromUtf8("toolButton_12"));
        sizePolicy1.setHeightForWidth(toolButton_12->sizePolicy().hasHeightForWidth());
        toolButton_12->setSizePolicy(sizePolicy1);
        toolButton_12->setMinimumSize(QSize(60, 85));

        horizontalLayout_2->addWidget(toolButton_12);

        toolButton_13 = new QToolButton(centralwidget);
        toolButton_13->setObjectName(QString::fromUtf8("toolButton_13"));
        sizePolicy1.setHeightForWidth(toolButton_13->sizePolicy().hasHeightForWidth());
        toolButton_13->setSizePolicy(sizePolicy1);
        toolButton_13->setMinimumSize(QSize(60, 85));

        horizontalLayout_2->addWidget(toolButton_13);

        toolButton_14 = new QToolButton(centralwidget);
        toolButton_14->setObjectName(QString::fromUtf8("toolButton_14"));
        sizePolicy1.setHeightForWidth(toolButton_14->sizePolicy().hasHeightForWidth());
        toolButton_14->setSizePolicy(sizePolicy1);
        toolButton_14->setMinimumSize(QSize(60, 85));

        horizontalLayout_2->addWidget(toolButton_14);

        toolButton_15 = new QToolButton(centralwidget);
        toolButton_15->setObjectName(QString::fromUtf8("toolButton_15"));
        sizePolicy1.setHeightForWidth(toolButton_15->sizePolicy().hasHeightForWidth());
        toolButton_15->setSizePolicy(sizePolicy1);
        toolButton_15->setMinimumSize(QSize(60, 85));

        horizontalLayout_2->addWidget(toolButton_15);

        toolButton_16 = new QToolButton(centralwidget);
        toolButton_16->setObjectName(QString::fromUtf8("toolButton_16"));
        sizePolicy1.setHeightForWidth(toolButton_16->sizePolicy().hasHeightForWidth());
        toolButton_16->setSizePolicy(sizePolicy1);
        toolButton_16->setMinimumSize(QSize(60, 85));

        horizontalLayout_2->addWidget(toolButton_16);

        toolButton_17 = new QToolButton(centralwidget);
        toolButton_17->setObjectName(QString::fromUtf8("toolButton_17"));
        sizePolicy1.setHeightForWidth(toolButton_17->sizePolicy().hasHeightForWidth());
        toolButton_17->setSizePolicy(sizePolicy1);
        toolButton_17->setMinimumSize(QSize(60, 85));

        horizontalLayout_2->addWidget(toolButton_17);

        toolButton_18 = new QToolButton(centralwidget);
        toolButton_18->setObjectName(QString::fromUtf8("toolButton_18"));
        sizePolicy1.setHeightForWidth(toolButton_18->sizePolicy().hasHeightForWidth());
        toolButton_18->setSizePolicy(sizePolicy1);
        toolButton_18->setMinimumSize(QSize(60, 85));

        horizontalLayout_2->addWidget(toolButton_18);

        toolButton_19 = new QToolButton(centralwidget);
        toolButton_19->setObjectName(QString::fromUtf8("toolButton_19"));
        sizePolicy1.setHeightForWidth(toolButton_19->sizePolicy().hasHeightForWidth());
        toolButton_19->setSizePolicy(sizePolicy1);
        toolButton_19->setMinimumSize(QSize(60, 85));

        horizontalLayout_2->addWidget(toolButton_19);

        toolButton_2 = new QToolButton(centralwidget);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        sizePolicy1.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy1);
        toolButton_2->setMinimumSize(QSize(60, 85));

        horizontalLayout_2->addWidget(toolButton_2);

        toolButton_20 = new QToolButton(centralwidget);
        toolButton_20->setObjectName(QString::fromUtf8("toolButton_20"));
        sizePolicy1.setHeightForWidth(toolButton_20->sizePolicy().hasHeightForWidth());
        toolButton_20->setSizePolicy(sizePolicy1);
        toolButton_20->setMinimumSize(QSize(60, 85));

        horizontalLayout_2->addWidget(toolButton_20);

        toolButton_21 = new QToolButton(centralwidget);
        toolButton_21->setObjectName(QString::fromUtf8("toolButton_21"));
        sizePolicy1.setHeightForWidth(toolButton_21->sizePolicy().hasHeightForWidth());
        toolButton_21->setSizePolicy(sizePolicy1);
        toolButton_21->setMinimumSize(QSize(60, 85));

        horizontalLayout_2->addWidget(toolButton_21);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_2, 5, 3, 1, 13);

        spades7 = new QLabel(centralwidget);
        spades7->setObjectName(QString::fromUtf8("spades7"));
        sizePolicy.setHeightForWidth(spades7->sizePolicy().hasHeightForWidth());
        spades7->setSizePolicy(sizePolicy);
        spades7->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(spades7, 3, 8, 1, 1);

        hearts3 = new QLabel(centralwidget);
        hearts3->setObjectName(QString::fromUtf8("hearts3"));
        sizePolicy.setHeightForWidth(hearts3->sizePolicy().hasHeightForWidth());
        hearts3->setSizePolicy(sizePolicy);
        hearts3->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(hearts3, 2, 4, 1, 1);

        clubsA = new QLabel(centralwidget);
        clubsA->setObjectName(QString::fromUtf8("clubsA"));
        sizePolicy.setHeightForWidth(clubsA->sizePolicy().hasHeightForWidth());
        clubsA->setSizePolicy(sizePolicy);
        clubsA->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(clubsA, 1, 15, 1, 1);

        spades9 = new QLabel(centralwidget);
        spades9->setObjectName(QString::fromUtf8("spades9"));
        sizePolicy.setHeightForWidth(spades9->sizePolicy().hasHeightForWidth());
        spades9->setSizePolicy(sizePolicy);
        spades9->setStyleSheet(QString::fromUtf8("image: url(:/Premium/Spades/assets/Premium/Spades/\320\237\320\270\320\272\320\260.png);"));

        gridLayout->addWidget(spades9, 3, 10, 1, 1);

        clubs2 = new QLabel(centralwidget);
        clubs2->setObjectName(QString::fromUtf8("clubs2"));
        sizePolicy.setHeightForWidth(clubs2->sizePolicy().hasHeightForWidth());
        clubs2->setSizePolicy(sizePolicy);
        clubs2->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(clubs2, 1, 3, 1, 1);

        diamondsJ = new QLabel(centralwidget);
        diamondsJ->setObjectName(QString::fromUtf8("diamondsJ"));
        sizePolicy.setHeightForWidth(diamondsJ->sizePolicy().hasHeightForWidth());
        diamondsJ->setSizePolicy(sizePolicy);
        diamondsJ->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(diamondsJ, 0, 12, 1, 1);

        clubs5 = new QLabel(centralwidget);
        clubs5->setObjectName(QString::fromUtf8("clubs5"));
        sizePolicy.setHeightForWidth(clubs5->sizePolicy().hasHeightForWidth());
        clubs5->setSizePolicy(sizePolicy);
        clubs5->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(clubs5, 1, 6, 1, 1);

        diamonds4 = new QLabel(centralwidget);
        diamonds4->setObjectName(QString::fromUtf8("diamonds4"));
        sizePolicy.setHeightForWidth(diamonds4->sizePolicy().hasHeightForWidth());
        diamonds4->setSizePolicy(sizePolicy);
        diamonds4->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(diamonds4, 0, 5, 1, 1);

        diamonds7 = new QLabel(centralwidget);
        diamonds7->setObjectName(QString::fromUtf8("diamonds7"));
        sizePolicy.setHeightForWidth(diamonds7->sizePolicy().hasHeightForWidth());
        diamonds7->setSizePolicy(sizePolicy);
        diamonds7->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(diamonds7, 0, 8, 1, 1);

        clubs9 = new QLabel(centralwidget);
        clubs9->setObjectName(QString::fromUtf8("clubs9"));
        sizePolicy.setHeightForWidth(clubs9->sizePolicy().hasHeightForWidth());
        clubs9->setSizePolicy(sizePolicy);
        clubs9->setStyleSheet(QString::fromUtf8("image: url(:/Standart/Clubs/assets/Standart/Clubs/\320\232\321\200\320\265\321\201\321\202\320\270\321\217.png);"));

        gridLayout->addWidget(clubs9, 1, 10, 1, 1);

        spades10 = new QLabel(centralwidget);
        spades10->setObjectName(QString::fromUtf8("spades10"));
        sizePolicy.setHeightForWidth(spades10->sizePolicy().hasHeightForWidth());
        spades10->setSizePolicy(sizePolicy);
        spades10->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(spades10, 3, 11, 1, 1);

        heartsA = new QLabel(centralwidget);
        heartsA->setObjectName(QString::fromUtf8("heartsA"));
        sizePolicy.setHeightForWidth(heartsA->sizePolicy().hasHeightForWidth());
        heartsA->setSizePolicy(sizePolicy);
        heartsA->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(heartsA, 2, 15, 1, 1);

        heartsK = new QLabel(centralwidget);
        heartsK->setObjectName(QString::fromUtf8("heartsK"));
        sizePolicy.setHeightForWidth(heartsK->sizePolicy().hasHeightForWidth());
        heartsK->setSizePolicy(sizePolicy);
        heartsK->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(heartsK, 2, 14, 1, 1);

        clubsK = new QLabel(centralwidget);
        clubsK->setObjectName(QString::fromUtf8("clubsK"));
        sizePolicy.setHeightForWidth(clubsK->sizePolicy().hasHeightForWidth());
        clubsK->setSizePolicy(sizePolicy);
        clubsK->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(clubsK, 1, 14, 1, 1);

        diamonds3 = new QLabel(centralwidget);
        diamonds3->setObjectName(QString::fromUtf8("diamonds3"));
        sizePolicy.setHeightForWidth(diamonds3->sizePolicy().hasHeightForWidth());
        diamonds3->setSizePolicy(sizePolicy);
        diamonds3->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(diamonds3, 0, 4, 1, 1);

        clubs3 = new QLabel(centralwidget);
        clubs3->setObjectName(QString::fromUtf8("clubs3"));
        sizePolicy.setHeightForWidth(clubs3->sizePolicy().hasHeightForWidth());
        clubs3->setSizePolicy(sizePolicy);
        clubs3->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(clubs3, 1, 4, 1, 1);

        spades4 = new QLabel(centralwidget);
        spades4->setObjectName(QString::fromUtf8("spades4"));
        sizePolicy.setHeightForWidth(spades4->sizePolicy().hasHeightForWidth());
        spades4->setSizePolicy(sizePolicy);
        spades4->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(spades4, 3, 5, 1, 1);

        spades8 = new QLabel(centralwidget);
        spades8->setObjectName(QString::fromUtf8("spades8"));
        sizePolicy.setHeightForWidth(spades8->sizePolicy().hasHeightForWidth());
        spades8->setSizePolicy(sizePolicy);
        spades8->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(spades8, 3, 9, 1, 1);

        clubs7 = new QLabel(centralwidget);
        clubs7->setObjectName(QString::fromUtf8("clubs7"));
        sizePolicy.setHeightForWidth(clubs7->sizePolicy().hasHeightForWidth());
        clubs7->setSizePolicy(sizePolicy);
        clubs7->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(clubs7, 1, 8, 1, 1);

        hearts6 = new QLabel(centralwidget);
        hearts6->setObjectName(QString::fromUtf8("hearts6"));
        sizePolicy.setHeightForWidth(hearts6->sizePolicy().hasHeightForWidth());
        hearts6->setSizePolicy(sizePolicy);
        hearts6->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(hearts6, 2, 7, 1, 1);

        spadesJ = new QLabel(centralwidget);
        spadesJ->setObjectName(QString::fromUtf8("spadesJ"));
        sizePolicy.setHeightForWidth(spadesJ->sizePolicy().hasHeightForWidth());
        spadesJ->setSizePolicy(sizePolicy);
        spadesJ->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(spadesJ, 3, 12, 1, 1);

        clubs6 = new QLabel(centralwidget);
        clubs6->setObjectName(QString::fromUtf8("clubs6"));
        sizePolicy.setHeightForWidth(clubs6->sizePolicy().hasHeightForWidth());
        clubs6->setSizePolicy(sizePolicy);
        clubs6->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(clubs6, 1, 7, 1, 1);

        hearts8 = new QLabel(centralwidget);
        hearts8->setObjectName(QString::fromUtf8("hearts8"));
        sizePolicy.setHeightForWidth(hearts8->sizePolicy().hasHeightForWidth());
        hearts8->setSizePolicy(sizePolicy);
        hearts8->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(hearts8, 2, 9, 1, 1);

        game_progress = new QLabel(centralwidget);
        game_progress->setObjectName(QString::fromUtf8("game_progress"));
        sizePolicy1.setHeightForWidth(game_progress->sizePolicy().hasHeightForWidth());
        game_progress->setSizePolicy(sizePolicy1);
        game_progress->setMaximumSize(QSize(16777215, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        game_progress->setFont(font2);
        game_progress->setLayoutDirection(Qt::LeftToRight);
        game_progress->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"color: rgb(255, 255, 255)"));
        game_progress->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(game_progress, 4, 3, 1, 13);

        diamonds9 = new QLabel(centralwidget);
        diamonds9->setObjectName(QString::fromUtf8("diamonds9"));
        sizePolicy.setHeightForWidth(diamonds9->sizePolicy().hasHeightForWidth());
        diamonds9->setSizePolicy(sizePolicy);
        diamonds9->setStyleSheet(QString::fromUtf8("image: url(:/Standart/Diamonds/assets/Standart/Diamonds/\320\221\321\203\320\261\320\275\320\260.png);"));

        gridLayout->addWidget(diamonds9, 0, 10, 1, 1);

        diamondsQ = new QLabel(centralwidget);
        diamondsQ->setObjectName(QString::fromUtf8("diamondsQ"));
        sizePolicy.setHeightForWidth(diamondsQ->sizePolicy().hasHeightForWidth());
        diamondsQ->setSizePolicy(sizePolicy);
        diamondsQ->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(diamondsQ, 0, 13, 1, 1);

        heartsJ = new QLabel(centralwidget);
        heartsJ->setObjectName(QString::fromUtf8("heartsJ"));
        sizePolicy.setHeightForWidth(heartsJ->sizePolicy().hasHeightForWidth());
        heartsJ->setSizePolicy(sizePolicy);
        heartsJ->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(heartsJ, 2, 12, 1, 1);

        heartsQ = new QLabel(centralwidget);
        heartsQ->setObjectName(QString::fromUtf8("heartsQ"));
        sizePolicy.setHeightForWidth(heartsQ->sizePolicy().hasHeightForWidth());
        heartsQ->setSizePolicy(sizePolicy);
        heartsQ->setStyleSheet(QString::fromUtf8("image: url(:/assets/Standart/shirt.png);"));

        gridLayout->addWidget(heartsQ, 2, 13, 1, 1);

        DevytkaWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(DevytkaWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1110, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        DevytkaWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(DevytkaWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        DevytkaWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action_2);
        menu->addSeparator();
        menu->addSeparator();
        menu->addAction(action);
        menu->addAction(action_4);
        menu->addAction(action_5);
        menu->addAction(action_3);
        toolBar->addAction(action);
        toolBar->addAction(action_2);

        retranslateUi(DevytkaWindow);

        QMetaObject::connectSlotsByName(DevytkaWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DevytkaWindow)
    {
        DevytkaWindow->setWindowTitle(QApplication::translate("DevytkaWindow", "\320\224\320\265\320\262\321\217\321\202\320\272\320\260", nullptr));
        action_2->setText(QApplication::translate("DevytkaWindow", "\320\237\321\200\320\276\320\277\321\203\321\201\321\202\320\270\321\202\321\214 \321\205\320\276\320\264", nullptr));
        action_4->setText(QApplication::translate("DevytkaWindow", "\320\235\320\260\321\207\320\260\321\207\321\202\321\214 \320\267\320\260\320\275\320\276\320\262\320\276", nullptr));
        action_5->setText(QApplication::translate("DevytkaWindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
        action->setText(QApplication::translate("DevytkaWindow", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
        action_3->setText(QApplication::translate("DevytkaWindow", "\320\237\320\276\320\273\320\275\320\276\321\215\320\272\321\200\320\260\320\275\320\275\321\213\320\271 \321\200\320\265\320\266\320\270\320\274", nullptr));
#ifndef QT_NO_SHORTCUT
        action_3->setShortcut(QApplication::translate("DevytkaWindow", "F11", nullptr));
#endif // QT_NO_SHORTCUT
        spades3->setText(QString());
        diamonds10->setText(QString());
        diamondsK->setText(QString());
        clubs4->setText(QString());
        diamondsA->setText(QString());
        hearts2->setText(QString());
        diamonds6->setText(QString());
        diamonds8->setText(QString());
        clubs10->setText(QString());
        diamonds5->setText(QString());
        spadesA->setText(QString());
        clubsQ->setText(QString());
        hearts9->setText(QString());
        spadesK->setText(QString());
        spades2->setText(QString());
        spadesQ->setText(QString());
        spades5->setText(QString());
        spades6->setText(QString());
        clubsJ->setText(QString());
        hearts10->setText(QString());
        diamonds2->setText(QString());
        hearts7->setText(QString());
        hearts4->setText(QString());
        hearts5->setText(QString());
        clubs8->setText(QString());
        toolButton_22->setText(QString());
        toolButton_23->setText(QString());
        toolButton_24->setText(QString());
        toolButton_25->setText(QString());
        toolButton_26->setText(QString());
        toolButton_27->setText(QString());
        toolButton_3->setText(QString());
        toolButton_4->setText(QString());
        toolButton_5->setText(QString());
        toolButton_6->setText(QString());
        toolButton_7->setText(QString());
        toolButton_8->setText(QString());
        toolButton_9->setText(QString());
        toolButton_10->setText(QString());
        toolButton_11->setText(QString());
        toolButton_12->setText(QString());
        toolButton_13->setText(QString());
        toolButton_14->setText(QString());
        toolButton_15->setText(QString());
        toolButton_16->setText(QString());
        toolButton_17->setText(QString());
        toolButton_18->setText(QString());
        toolButton_19->setText(QString());
        toolButton_2->setText(QString());
        toolButton_20->setText(QString());
        toolButton_21->setText(QString());
        spades7->setText(QString());
        hearts3->setText(QString());
        clubsA->setText(QString());
        spades9->setText(QString());
        clubs2->setText(QString());
        diamondsJ->setText(QString());
        clubs5->setText(QString());
        diamonds4->setText(QString());
        diamonds7->setText(QString());
        clubs9->setText(QString());
        spades10->setText(QString());
        heartsA->setText(QString());
        heartsK->setText(QString());
        clubsK->setText(QString());
        diamonds3->setText(QString());
        clubs3->setText(QString());
        spades4->setText(QString());
        spades8->setText(QString());
        clubs7->setText(QString());
        hearts6->setText(QString());
        spadesJ->setText(QString());
        clubs6->setText(QString());
        hearts8->setText(QString());
        game_progress->setText(QString());
        diamonds9->setText(QString());
        diamondsQ->setText(QString());
        heartsJ->setText(QString());
        heartsQ->setText(QString());
        menu->setTitle(QApplication::translate("DevytkaWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217", nullptr));
        toolBar->setWindowTitle(QApplication::translate("DevytkaWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DevytkaWindow: public Ui_DevytkaWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVYTKAWINDOW_H
