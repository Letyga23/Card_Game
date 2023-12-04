/********************************************************************************
** Form generated from reading UI file 'awards.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AWARDS_H
#define UI_AWARDS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Awards
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *premiumSet;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *numberWin;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *standartSet;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *averageSet;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *Awards)
    {
        if (Awards->objectName().isEmpty())
            Awards->setObjectName(QString::fromUtf8("Awards"));
        Awards->resize(324, 256);
        Awards->setStyleSheet(QString::fromUtf8("QDialog#Awards {\n"
"	background-color: rgb(123, 162, 170);\n"
"	border: 3px solid #4d4d4d;\n"
"}\n"
""));
        gridLayout = new QGridLayout(Awards);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        premiumSet = new QRadioButton(Awards);
        premiumSet->setObjectName(QString::fromUtf8("premiumSet"));
        premiumSet->setEnabled(false);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(12);
        premiumSet->setFont(font);
        premiumSet->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(premiumSet);

        pushButton_3 = new QPushButton(Awards);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 50); \n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 100);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/\320\233\321\203\320\277\320\260.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(20, 20));

        horizontalLayout_4->addWidget(pushButton_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_4, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Awards);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label);

        numberWin = new QLabel(Awards);
        numberWin->setObjectName(QString::fromUtf8("numberWin"));
        numberWin->setFont(font1);
        numberWin->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(numberWin);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton = new QPushButton(Awards);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                             background-color: rgb(37, 204, 76);\n"
"                             border: 2px solid #27ae60;\n"
"                             color: #ecf0f1;\n"
"                             padding: 5px;\n"
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

        horizontalLayout_5->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_5, 11, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        standartSet = new QRadioButton(Awards);
        standartSet->setObjectName(QString::fromUtf8("standartSet"));
        standartSet->setEnabled(true);
        standartSet->setFont(font);
        standartSet->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(standartSet);

        pushButton_2 = new QPushButton(Awards);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 50); \n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 100);\n"
"}"));
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        averageSet = new QRadioButton(Awards);
        averageSet->setObjectName(QString::fromUtf8("averageSet"));
        averageSet->setEnabled(false);
        averageSet->setFont(font);
        averageSet->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(averageSet);

        pushButton_4 = new QPushButton(Awards);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 50); \n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 100);\n"
"}"));
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(pushButton_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_3, 4, 0, 1, 1);


        retranslateUi(Awards);

        QMetaObject::connectSlotsByName(Awards);
    } // setupUi

    void retranslateUi(QDialog *Awards)
    {
        Awards->setWindowTitle(QApplication::translate("Awards", "Dialog", nullptr));
        premiumSet->setText(QApplication::translate("Awards", "\320\277\321\200\320\265\320\274\320\270\321\203\320\274 \320\275\320\260\320\261\320\276\321\200", nullptr));
        pushButton_3->setText(QString());
        label->setText(QApplication::translate("Awards", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\320\276\320\261\320\265\320\264:", nullptr));
        numberWin->setText(QApplication::translate("Awards", "0", nullptr));
        pushButton->setText(QApplication::translate("Awards", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        standartSet->setText(QApplication::translate("Awards", "\321\201\321\202\320\260\320\275\320\264\320\260\321\200\321\202\320\275\321\213\320\271 \320\275\320\260\320\261\320\276\321\200", nullptr));
        pushButton_2->setText(QString());
        averageSet->setText(QApplication::translate("Awards", "\321\201\321\200\320\265\320\264\320\275\320\270\320\271 \320\275\320\260\320\261\320\276\321\200", nullptr));
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Awards: public Ui_Awards {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AWARDS_H
