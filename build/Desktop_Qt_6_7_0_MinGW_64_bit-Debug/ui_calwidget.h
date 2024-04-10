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
    QLineEdit *leditresult;
    QPushButton *btn0;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btnadd;
    QPushButton *btnOpenParen;
    QPushButton *btnCloseParen;
    QPushButton *btnExponent;
    QPushButton *btnLog;
    QPushButton *btnSin;
    QPushButton *btnCos;
    QPushButton *btnTan;

    void setupUi(QWidget *CalWidget)
    {
        if (CalWidget->objectName().isEmpty())
            CalWidget->setObjectName("CalWidget");
        CalWidget->resize(480, 640);
        leditexpr = new QLineEdit(CalWidget);
        leditexpr->setObjectName("leditexpr");
        leditexpr->setGeometry(QRect(10, 10, 460, 40));
        leditresult = new QLineEdit(CalWidget);
        leditresult->setObjectName("leditresult");
        leditresult->setGeometry(QRect(10, 60, 460, 40));
        btn0 = new QPushButton(CalWidget);
        btn0->setObjectName("btn0");
        btn0->setGeometry(QRect(10, 500, 50, 40));
        btn1 = new QPushButton(CalWidget);
        btn1->setObjectName("btn1");
        btn1->setGeometry(QRect(10, 150, 50, 40));
        btn2 = new QPushButton(CalWidget);
        btn2->setObjectName("btn2");
        btn2->setGeometry(QRect(70, 150, 50, 40));
        btn3 = new QPushButton(CalWidget);
        btn3->setObjectName("btn3");
        btn3->setGeometry(QRect(130, 150, 50, 40));
        btn4 = new QPushButton(CalWidget);
        btn4->setObjectName("btn4");
        btn4->setGeometry(QRect(190, 150, 50, 40));
        btn5 = new QPushButton(CalWidget);
        btn5->setObjectName("btn5");
        btn5->setGeometry(QRect(250, 150, 50, 40));
        btn6 = new QPushButton(CalWidget);
        btn6->setObjectName("btn6");
        btn6->setGeometry(QRect(310, 150, 50, 40));
        btn7 = new QPushButton(CalWidget);
        btn7->setObjectName("btn7");
        btn7->setGeometry(QRect(370, 150, 50, 40));
        btn8 = new QPushButton(CalWidget);
        btn8->setObjectName("btn8");
        btn8->setGeometry(QRect(430, 150, 50, 40));
        btn9 = new QPushButton(CalWidget);
        btn9->setObjectName("btn9");
        btn9->setGeometry(QRect(490, 150, 50, 40));
        btnadd = new QPushButton(CalWidget);
        btnadd->setObjectName("btnadd");
        btnadd->setGeometry(QRect(70, 500, 50, 40));
        btnOpenParen = new QPushButton(CalWidget);
        btnOpenParen->setObjectName("btnOpenParen");
        btnOpenParen->setGeometry(QRect(10, 110, 50, 40));
        btnCloseParen = new QPushButton(CalWidget);
        btnCloseParen->setObjectName("btnCloseParen");
        btnCloseParen->setGeometry(QRect(70, 110, 50, 40));
        btnExponent = new QPushButton(CalWidget);
        btnExponent->setObjectName("btnExponent");
        btnExponent->setGeometry(QRect(130, 110, 50, 40));
        btnLog = new QPushButton(CalWidget);
        btnLog->setObjectName("btnLog");
        btnLog->setGeometry(QRect(190, 110, 50, 40));
        btnSin = new QPushButton(CalWidget);
        btnSin->setObjectName("btnSin");
        btnSin->setGeometry(QRect(250, 110, 50, 40));
        btnCos = new QPushButton(CalWidget);
        btnCos->setObjectName("btnCos");
        btnCos->setGeometry(QRect(310, 110, 50, 40));
        btnTan = new QPushButton(CalWidget);
        btnTan->setObjectName("btnTan");
        btnTan->setGeometry(QRect(370, 110, 50, 40));

        retranslateUi(CalWidget);

        QMetaObject::connectSlotsByName(CalWidget);
    } // setupUi

    void retranslateUi(QWidget *CalWidget)
    {
        CalWidget->setWindowTitle(QCoreApplication::translate("CalWidget", "Ultra Calculator", nullptr));
        btn0->setText(QCoreApplication::translate("CalWidget", "0", nullptr));
        btn1->setText(QCoreApplication::translate("CalWidget", "1", nullptr));
        btn2->setText(QCoreApplication::translate("CalWidget", "2", nullptr));
        btn3->setText(QCoreApplication::translate("CalWidget", "3", nullptr));
        btn4->setText(QCoreApplication::translate("CalWidget", "4", nullptr));
        btn5->setText(QCoreApplication::translate("CalWidget", "5", nullptr));
        btn6->setText(QCoreApplication::translate("CalWidget", "6", nullptr));
        btn7->setText(QCoreApplication::translate("CalWidget", "7", nullptr));
        btn8->setText(QCoreApplication::translate("CalWidget", "8", nullptr));
        btn9->setText(QCoreApplication::translate("CalWidget", "9", nullptr));
        btnadd->setText(QCoreApplication::translate("CalWidget", "+", nullptr));
        btnOpenParen->setText(QCoreApplication::translate("CalWidget", "(", nullptr));
        btnCloseParen->setText(QCoreApplication::translate("CalWidget", ")", nullptr));
        btnExponent->setText(QCoreApplication::translate("CalWidget", "^", nullptr));
        btnLog->setText(QCoreApplication::translate("CalWidget", "log", nullptr));
        btnSin->setText(QCoreApplication::translate("CalWidget", "sin", nullptr));
        btnCos->setText(QCoreApplication::translate("CalWidget", "cos", nullptr));
        btnTan->setText(QCoreApplication::translate("CalWidget", "tan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalWidget: public Ui_CalWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALWIDGET_H
