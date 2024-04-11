#ifndef CALWIDGET_H
#define CALWIDGET_H

#include <QWidget>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class CalWidget; }
QT_END_NAMESPACE

class CalWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CalWidget(QWidget *parent = nullptr);
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
    void on_btnOpenParen_clicked();
    void on_btnCloseParen_clicked();
    void on_btnExponent_clicked();
    void on_btnLog_clicked();
    void on_btnSin_clicked();
    void on_btnCos_clicked();
    void on_btnTan_clicked();
    void on_btnclear_clicked();
    void on_btnback_clicked();
    void on_btnequal_clicked();

private:
    Ui::CalWidget *ui;
    QString str;
    int openParensCount;
    void appendNumber(const QString &num);
    void appendOperator(const QString &op);
    void updateExpression();
    QString evaluateExpression(const QString &expr);
};

#endif // CALWIDGET_H
