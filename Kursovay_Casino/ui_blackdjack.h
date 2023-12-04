/********************************************************************************
** Form generated from reading UI file 'blackdjack.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLACKDJACK_H
#define UI_BLACKDJACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Blackdjack
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;

    void setupUi(QMainWindow *Blackdjack)
    {
        if (Blackdjack->objectName().isEmpty())
            Blackdjack->setObjectName(QString::fromUtf8("Blackdjack"));
        Blackdjack->resize(701, 478);
        centralwidget = new QWidget(Blackdjack);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(460, 20, 171, 131));
        label->setStyleSheet(QString::fromUtf8("image: url(:/assets/\320\232\320\276\320\273\320\276\320\264\320\260.png);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 100, 141, 41));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 20, 160, 51));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_4);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_5);

        Blackdjack->setCentralWidget(centralwidget);

        retranslateUi(Blackdjack);

        QMetaObject::connectSlotsByName(Blackdjack);
    } // setupUi

    void retranslateUi(QMainWindow *Blackdjack)
    {
        Blackdjack->setWindowTitle(QApplication::translate("Blackdjack", "MainWindow", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("Blackdjack", "\320\222\320\267\321\217\321\202\321\214 \320\272\320\260\321\200\321\202\321\203", nullptr));
        label_2->setText(QApplication::translate("Blackdjack", "\320\222\320\260\321\210 \321\201\321\207\321\221\321\202:", nullptr));
        label_4->setText(QApplication::translate("Blackdjack", "\320\276", nullptr));
        label_3->setText(QApplication::translate("Blackdjack", "\320\241\321\207\321\221\321\202 \320\264\320\270\320\273\320\273\320\265\321\200\320\260:", nullptr));
        label_5->setText(QApplication::translate("Blackdjack", "\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Blackdjack: public Ui_Blackdjack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLACKDJACK_H
