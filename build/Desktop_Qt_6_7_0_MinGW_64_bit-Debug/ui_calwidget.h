/********************************************************************************
** Form generated from reading UI file 'calwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALWIDGET_H
#define UI_CALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalWidget
{
public:
    QLineEdit *leditexpr;
    QPushButton *btn8;
    QPushButton *btn7;
    QPushButton *btn9;
    QPushButton *btnadd;
    QPushButton *btn5;
    QPushButton *btn4;
    QPushButton *btnsub;
    QPushButton *btn6;
    QPushButton *btn2;
    QPushButton *btn1;
    QPushButton *btnmulti;
    QPushButton *btn3;
    QPushButton *btn0;
    QPushButton *btnclear;
    QPushButton *btndiv;
    QPushButton *btnpoint;
    QLineEdit *leditresult;
    QPushButton *btnback;
    QPushButton *btnequal;

    void setupUi(QWidget *CalWidget)
    {
        if (CalWidget->objectName().isEmpty())
            CalWidget->setObjectName("CalWidget");
        CalWidget->resize(800, 600);
        leditexpr = new QLineEdit(CalWidget);
        leditexpr->setObjectName("leditexpr");
        leditexpr->setGeometry(QRect(270, 90, 191, 23));
        btn8 = new QPushButton(CalWidget);
        btn8->setObjectName("btn8");
        btn8->setGeometry(QRect(320, 170, 41, 24));
        btn7 = new QPushButton(CalWidget);
        btn7->setObjectName("btn7");
        btn7->setGeometry(QRect(270, 170, 41, 24));
        btn9 = new QPushButton(CalWidget);
        btn9->setObjectName("btn9");
        btn9->setGeometry(QRect(370, 170, 41, 24));
        btnadd = new QPushButton(CalWidget);
        btnadd->setObjectName("btnadd");
        btnadd->setGeometry(QRect(420, 170, 41, 24));
        btn5 = new QPushButton(CalWidget);
        btn5->setObjectName("btn5");
        btn5->setGeometry(QRect(320, 210, 41, 24));
        btn4 = new QPushButton(CalWidget);
        btn4->setObjectName("btn4");
        btn4->setGeometry(QRect(270, 210, 41, 24));
        btnsub = new QPushButton(CalWidget);
        btnsub->setObjectName("btnsub");
        btnsub->setGeometry(QRect(420, 210, 41, 24));
        btn6 = new QPushButton(CalWidget);
        btn6->setObjectName("btn6");
        btn6->setGeometry(QRect(370, 210, 41, 24));
        btn2 = new QPushButton(CalWidget);
        btn2->setObjectName("btn2");
        btn2->setGeometry(QRect(320, 250, 41, 24));
        btn1 = new QPushButton(CalWidget);
        btn1->setObjectName("btn1");
        btn1->setGeometry(QRect(270, 250, 41, 24));
        btnmulti = new QPushButton(CalWidget);
        btnmulti->setObjectName("btnmulti");
        btnmulti->setGeometry(QRect(420, 250, 41, 24));
        btn3 = new QPushButton(CalWidget);
        btn3->setObjectName("btn3");
        btn3->setGeometry(QRect(370, 250, 41, 24));
        btn0 = new QPushButton(CalWidget);
        btn0->setObjectName("btn0");
        btn0->setGeometry(QRect(320, 290, 41, 24));
        btnclear = new QPushButton(CalWidget);
        btnclear->setObjectName("btnclear");
        btnclear->setGeometry(QRect(270, 290, 41, 24));
        btndiv = new QPushButton(CalWidget);
        btndiv->setObjectName("btndiv");
        btndiv->setGeometry(QRect(420, 290, 41, 24));
        btnpoint = new QPushButton(CalWidget);
        btnpoint->setObjectName("btnpoint");
        btnpoint->setGeometry(QRect(370, 290, 41, 24));
        leditresult = new QLineEdit(CalWidget);
        leditresult->setObjectName("leditresult");
        leditresult->setGeometry(QRect(270, 130, 191, 23));
        leditresult->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        btnback = new QPushButton(CalWidget);
        btnback->setObjectName("btnback");
        btnback->setGeometry(QRect(270, 330, 91, 24));
        btnequal = new QPushButton(CalWidget);
        btnequal->setObjectName("btnequal");
        btnequal->setGeometry(QRect(369, 330, 91, 24));

        retranslateUi(CalWidget);

        QMetaObject::connectSlotsByName(CalWidget);
    } // setupUi

    void retranslateUi(QWidget *CalWidget)
    {
        CalWidget->setWindowTitle(QCoreApplication::translate("CalWidget", "CalWidget", nullptr));
        btn8->setText(QCoreApplication::translate("CalWidget", "8", nullptr));
        btn7->setText(QCoreApplication::translate("CalWidget", "7", nullptr));
        btn9->setText(QCoreApplication::translate("CalWidget", "9", nullptr));
        btnadd->setText(QCoreApplication::translate("CalWidget", "+", nullptr));
        btn5->setText(QCoreApplication::translate("CalWidget", "5", nullptr));
        btn4->setText(QCoreApplication::translate("CalWidget", "4", nullptr));
        btnsub->setText(QCoreApplication::translate("CalWidget", "-", nullptr));
        btn6->setText(QCoreApplication::translate("CalWidget", "6", nullptr));
        btn2->setText(QCoreApplication::translate("CalWidget", "2", nullptr));
        btn1->setText(QCoreApplication::translate("CalWidget", "1", nullptr));
        btnmulti->setText(QCoreApplication::translate("CalWidget", "*", nullptr));
        btn3->setText(QCoreApplication::translate("CalWidget", "3", nullptr));
        btn0->setText(QCoreApplication::translate("CalWidget", "0", nullptr));
        btnclear->setText(QCoreApplication::translate("CalWidget", "C", nullptr));
        btndiv->setText(QCoreApplication::translate("CalWidget", "/", nullptr));
        btnpoint->setText(QCoreApplication::translate("CalWidget", ".", nullptr));
        btnback->setText(QCoreApplication::translate("CalWidget", "<-", nullptr));
        btnequal->setText(QCoreApplication::translate("CalWidget", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalWidget: public Ui_CalWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALWIDGET_H
