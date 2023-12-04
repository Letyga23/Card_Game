/********************************************************************************
** Form generated from reading UI file 'gamedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEDIALOG_H
#define UI_GAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GameDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *GameDialog)
    {
        if (GameDialog->objectName().isEmpty())
            GameDialog->setObjectName(QString::fromUtf8("GameDialog"));
        GameDialog->resize(248, 246);
        GameDialog->setStyleSheet(QString::fromUtf8("QDialog {\n"
"	background-color: rgb(123, 162, 170);\n"
"	border: 3px solid #4d4d4d;\n"
"}"));
        verticalLayout = new QVBoxLayout(GameDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(GameDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(GameDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(GameDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(GameDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(GameDialog);

        QMetaObject::connectSlotsByName(GameDialog);
    } // setupUi

    void retranslateUi(QDialog *GameDialog)
    {
        GameDialog->setWindowTitle(QApplication::translate("GameDialog", "\320\222\321\213\320\261\320\276\321\200 \320\270\320\263\321\200\321\213", nullptr));
        label->setText(QApplication::translate("GameDialog", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\270\320\263\321\200\321\203:", nullptr));
        pushButton->setStyleSheet(QApplication::translate("GameDialog", "QPushButton {\n"
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
"                         }", nullptr));
        pushButton->setText(QApplication::translate("GameDialog", "\320\221\320\273\321\215\320\272\320\264\320\266\320\265\320\272", nullptr));
        pushButton_2->setText(QApplication::translate("GameDialog", "\320\224\320\265\320\262\321\217\321\202\320\272\320\260", nullptr));
        pushButton_3->setText(QApplication::translate("GameDialog", "\320\241\321\203\320\275\320\264\321\203\320\272\n"
"(\320\262 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\320\272\320\265...)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameDialog: public Ui_GameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEDIALOG_H
