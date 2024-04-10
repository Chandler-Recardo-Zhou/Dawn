#include "calwidget.h"
#include "ui_calwidget.h"
#include <QtMath> // 引入数学库用于扩展计算功能

CalWidget::CalWidget(QWidget *parent) : QWidget(parent), ui(new Ui::CalWidget)
{
    ui->setupUi(this);
    openParensCount = 0; // 初始化开括号计数器
}

CalWidget::~CalWidget()
{
    delete ui;
}

void CalWidget::on_btn0_clicked()
{
    str.append("0");
    ui->leditexpr->setText(str);
}

void CalWidget::on_btn1_clicked()
{
    str.append("1");
    ui->leditexpr->setText(str);
}

void CalWidget::on_btn2_clicked()
{
    str.append("2");
    ui->leditexpr->setText(str);
}

void CalWidget::on_btn3_clicked()
{
    str.append("3");
    ui->leditexpr->setText(str);
}

void CalWidget::on_btn4_clicked()
{
    str.append("4");
    ui->leditexpr->setText(str);
}

void CalWidget::on_btn5_clicked()
{
    str.append("5");
    ui->leditexpr->setText(str);
}

void CalWidget::on_btn6_clicked()
{
    str.append("6");
    ui->leditexpr->setText(str);
}

void CalWidget::on_btn7_clicked()
{
    str.append("7");
    ui->leditexpr->setText(str);
}

void CalWidget::on_btn8_clicked()
{
    str.append("8");
    ui->leditexpr->setText(str);
}

void CalWidget::on_btn9_clicked()
{
    str.append("9");
    ui->leditexpr->setText(str);
}

void CalWidget::on_btnpoint_clicked()
{
    if (!str.endsWith('.')) {
        str.append(".");
        ui->leditexpr->setText(str);
    }
}

void CalWidget::on_btnadd_clicked()
{
    str.append(" + ");
    ui->leditexpr->setText(str);
}

void CalWidget::on_btnsub_clicked()
{
    str.append(" - ");
    ui->leditexpr->setText(str);
}

void CalWidget::on_btnmulti_clicked()
{
    str.append(" * ");
    ui->leditexpr->setText(str);
}

void CalWidget::on_btndiv_clicked()
{
    str.append(" / ");
    ui->leditexpr->setText(str);
}

void CalWidget::on_btnOpenParen_clicked()
{
    str.append("(");
    openParensCount++;
    ui->leditexpr->setText(str);
}

void CalWidget::on_btnCloseParen_clicked()
{
    if (openParensCount > 0) {
        str.append(")");
        openParensCount--;
        ui->leditexpr->setText(str);
    }
}

void CalWidget::on_btnExponent_clicked()
{
    str.append("^(");
    openParensCount++;
    ui->leditexpr->setText(str);
}

void CalWidget::on_btnLog_clicked()
{
    str.append("log(");
    openParensCount++;
    ui->leditexpr->setText(str);
}

void CalWidget::on_btnSin_clicked()
{
    str.append("sin(");
    openParensCount++;
    ui->leditexpr->setText(str);
}

void CalWidget::on_btnCos_clicked()
{
    str.append("cos(");
    openParensCount++;
    ui->leditexpr->setText(str);
}

void CalWidget::on_btnTan_clicked()
{
    str.append("tan(");
    openParensCount++;
    ui->leditexpr->setText(str);
}

void CalWidget::on_btnclear_clicked()
{
    str.clear();
    ui->leditexpr->clear();
    ui->leditresult->clear();
}

void CalWidget::on_btnback_clicked()
{
    if (!str.isEmpty()) {
        if (str.endsWith(" ")) {
            str.chop(3); // Remove the last operator and spaces
        } else {
            str.chop(1); // Remove the last digit or parenthesis
        }
        ui->leditexpr->setText(str);
    }
}

void CalWidget::on_btnequal_clicked()
{

    ui->leditresult->setText(evaluateExpression(str));
    str.clear();
}

QString CalWidget::evaluateExpression(const QString &expr)
{
    return "Result";
}
