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
    str=str.left(str.length()-1);
    ui->leditexpr->setText(str);
}

void CalWidget::on_btnclear_clicked()
{
    str.clear();
    ui->leditexpr->clear();
    ui->leditresult->clear();
}

void CalWidget::on_btnequal_clicked()
{
    ui->leditresult->clear();               //清空结果编辑框
    QStringList Str_List = str.split(" ");  //将表达式字符串以空格分片，如:3+4分为3部分
    Str_List[0] = Str_List[0].simplified(); //第1部分(左操作数)去掉首尾空格
    num1 = Str_List[0].toDouble();          //将左操作数字符串转化为数值斌值给num1
    Str_List[2] = Str_List[2].simplified(); //分片的第3部分(右操作数)去掉首尾空格
    num2 = Str_List[2].toDouble();          //将右操作数字符串转化为数值赋值给num2
    switch(mark)
    {
    case '+':                               //如果运算符字符为+
        result = num1 + num2;               //计算
        ui->leditresult->setText(QString::number(result));  //结果转换为字符串显示在结果编辑框
        break;
    case '-':
        result = num1 - num2;
        ui->leditresult->setText(QString::number(result));
        break;
    case '*':
        result = num1 * num2;
        ui->leditresult->setText(QString::number(result));
        break;
    case '/':
        if(0!= num2)                         //如果除数不为0，则计算
            result = num1/ num2;
        else
            ui->leditresult->setText("除数不能为0!");  //如果除数为0，报错
        break;
    }
    str.clear();//完成一次运算，表达式宇符串清空
}
