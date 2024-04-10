#include "calwidget.h"
#include "ui_calwidget.h"

CalWidget::CalWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CalWidget)
{
    ui->setupUi(this);
}

CalWidget::~CalWidget()
{
    delete ui;
}

void CalWidget::on_btn0_clicked()
{
    QString tmp = "0";
    str.append(tmp);
    ui->leditexpr->setText(str);
}

void CalWidget::on_btn1_clicked()
{
    QString tmp = "1";
    str.append(tmp);
    ui->leditexpr->setText(str);
}

void CalWidget::on_btn2_clicked()
{
    QString tmp = "2";
    str.append(tmp);
    ui->leditexpr->setText(str);
}

void CalWidget::on_btn3_clicked()
{
    QString tmp = "3";
    str.append(tmp);
    ui->leditexpr->setText(str);
}

void CalWidget::on_btn4_clicked()
{
    QString tmp = "4";
    str.append(tmp);
    ui->leditexpr->setText(str);
}

void CalWidget::on_btn5_clicked()
{
    QString tmp = "5";
    str.append(tmp);
    ui->leditexpr->setText(str);
}

void CalWidget::on_btn6_clicked()
{
    QString tmp = "6";
    str.append(tmp);
    ui->leditexpr->setText(str);
}

void CalWidget::on_btn7_clicked()
{
    QString tmp = "7";
    str.append(tmp);
    ui->leditexpr->setText(str);
}

void CalWidget::on_btn8_clicked()
{
    QString tmp = "8";
    str.append(tmp);
    ui->leditexpr->setText(str);
}

void CalWidget::on_btn9_clicked()
{
    QString tmp = "9";
    str.append(tmp);
    ui->leditexpr->setText(str);
}

void CalWidget::on_btnpoint_clicked()
{
    QString tmp = ".";
    str.append(tmp);
    ui->leditexpr->setText(str);
}

void CalWidget::on_btnadd_clicked()
{
    mark = '+';
    QString tmp = " + ";
    str.append(tmp);
    ui->leditexpr->setText(str);
}

void CalWidget::on_btnsub_clicked()
{
    mark = '-';
    QString tmp = " - ";
    str.append(tmp);
    ui->leditexpr->setText(str);
}

void CalWidget::on_btnmulti_clicked()
{
    mark = '*';
    QString tmp = " * ";
    str.append(tmp);
    ui->leditexpr->setText(str);
}

void CalWidget::on_btndiv_clicked()
{
    mark = '/';
    QString tmp = " / ";
    str.append(tmp);
    ui->leditexpr->setText(str);
}

void CalWidget::on_btnback_clicked()
{
    if (!str.isEmpty()) {
        str.chop(1);
        ui->leditexpr->setText(str);
    }
}

void CalWidget::on_btnclear_clicked()
{
    str.clear();
    ui->leditexpr->clear();
    ui->leditresult->clear();
}

void CalWidget::on_btnequal_clicked()
{
    ui->leditresult->clear();
    QStringList Str_List = str.split(" ", Qt::SkipEmptyParts);  // 确保使用Qt::SkipEmptyParts去除多余的空白
    if (Str_List.size() == 3) {
        double num1 = Str_List[0].toDouble();  // 将左操作数字符串转化为数值
        double num2 = Str_List[2].toDouble();  // 将右操作数字符串转化为数值
        QString operatorStr = Str_List[1].trimmed();  // 获取并清理操作符字符串

        // 根据操作符执行相应的运算
        if (operatorStr == "+") {
            result = num1 + num2;
        } else if (operatorStr == "-") {
            result = num1 - num2;
        } else if (operatorStr == "*") {
            result = num1 * num2;
        } else if (operatorStr == "/") {
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                ui->leditresult->setText("除数不能为0!");
                return;
            }
        } else {
            ui->leditresult->setText("未知的操作符!");
            return;
        }
        ui->leditresult->setText(QString::number(result));
    } else {
        ui->leditresult->setText("表达式错误!");
    }
    str.clear(); // 完成一次运算，清空表达式字符串
}
