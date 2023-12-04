/********************************************************************************
** Form generated from reading UI file 'statistics.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICS_H
#define UI_STATISTICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Statistics
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Statistics)
    {
        if (Statistics->objectName().isEmpty())
            Statistics->setObjectName(QString::fromUtf8("Statistics"));
        Statistics->resize(625, 351);
        Statistics->setStyleSheet(QString::fromUtf8("QWidget#Statistics {\n"
"	background-color: rgb(123, 162, 170);\n"
"	border: 3px solid #4d4d4d;\n"
"}\n"
""));
        gridLayout = new QGridLayout(Statistics);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(Statistics);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        pushButton = new QPushButton(Statistics);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
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

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);


        retranslateUi(Statistics);

        QMetaObject::connectSlotsByName(Statistics);
    } // setupUi

    void retranslateUi(QWidget *Statistics)
    {
        Statistics->setWindowTitle(QApplication::translate("Statistics", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
        pushButton->setText(QApplication::translate("Statistics", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\265\321\201\321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Statistics: public Ui_Statistics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICS_H
