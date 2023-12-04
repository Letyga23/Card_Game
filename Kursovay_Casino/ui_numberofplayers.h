/********************************************************************************
** Form generated from reading UI file 'numberofplayers.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMBEROFPLAYERS_H
#define UI_NUMBEROFPLAYERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NumberOfPlayers
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *NumberOfPlayers)
    {
        if (NumberOfPlayers->objectName().isEmpty())
            NumberOfPlayers->setObjectName(QString::fromUtf8("NumberOfPlayers"));
        NumberOfPlayers->resize(400, 143);
        gridLayout = new QGridLayout(NumberOfPlayers);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(NumberOfPlayers);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
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
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        pushButton = new QPushButton(NumberOfPlayers);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(NumberOfPlayers);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font1);

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);


        retranslateUi(NumberOfPlayers);

        QMetaObject::connectSlotsByName(NumberOfPlayers);
    } // setupUi

    void retranslateUi(QDialog *NumberOfPlayers)
    {
        NumberOfPlayers->setWindowTitle(QApplication::translate("NumberOfPlayers", "Dialog", nullptr));
        label->setText(QApplication::translate("NumberOfPlayers", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\320\276\320\277\320\265\321\200\320\275\320\270\320\272\320\276\320\262:", nullptr));
        pushButton->setText(QApplication::translate("NumberOfPlayers", "1 \320\261\320\276\321\202", nullptr));
        pushButton_2->setText(QApplication::translate("NumberOfPlayers", "3 \320\261\320\276\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NumberOfPlayers: public Ui_NumberOfPlayers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMBEROFPLAYERS_H
