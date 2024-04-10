#ifndef CALWIDGET_H
#define CALWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class CalWidget;
}
QT_END_NAMESPACE

class CalWidget : public QWidget
{
    Q_OBJECT

public:
    CalWidget(QWidget *parent = nullptr);
    ~CalWidget();

private slots:
    void on_btn0_clicked();

    void on_btn1_clicked();

    void on_btn2_clicked();

    void on_btn3_clicked();

    void on_btn4_clicked();

    void on_btn5_clicked();

    void on_btn6_clicked();

    void on_btn7_clicked();

    void on_btn8_clicked();

    void on_btn9_clicked();

    void on_btnpoint_clicked();

    void on_btnadd_clicked();

    void on_btnsub_clicked();

    void on_btnmulti_clicked();

    void on_btndiv_clicked();

    void on_btnclear_clicked();

    void on_btnback_clicked();

    void on_btnequal_clicked();

private:
    Ui::CalWidget *ui;
    QString str;
    double num1,num2,result;
    char mark;
};
#endif // CALWIDGET_H
