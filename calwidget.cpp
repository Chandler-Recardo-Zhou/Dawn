#include "calwidget.h"
#include "ui_calwidget.h"
#include <QJSEngine>
#include <QRegularExpression>


CalWidget::CalWidget(QWidget *parent) : QWidget(parent), ui(new Ui::CalWidget)
{
    ui->setupUi(this);
    openParensCount = 0; // Initialize parenthesis counter
}

CalWidget::~CalWidget()
{
    delete ui;
}

void CalWidget::on_btn0_clicked() { appendNumber("0"); }
void CalWidget::on_btn1_clicked() { appendNumber("1"); }
void CalWidget::on_btn2_clicked() { appendNumber("2"); }
void CalWidget::on_btn3_clicked() { appendNumber("3"); }
void CalWidget::on_btn4_clicked() { appendNumber("4"); }
void CalWidget::on_btn5_clicked() { appendNumber("5"); }
void CalWidget::on_btn6_clicked() { appendNumber("6"); }
void CalWidget::on_btn7_clicked() { appendNumber("7"); }
void CalWidget::on_btn8_clicked() { appendNumber("8"); }
void CalWidget::on_btn9_clicked() { appendNumber("9"); }
void CalWidget::on_btnpoint_clicked() { appendNumber("."); }

void CalWidget::on_btnadd_clicked() { appendOperator(" + "); }
void CalWidget::on_btnsub_clicked() { appendOperator(" - "); }
void CalWidget::on_btnmulti_clicked() { appendOperator(" * "); }
void CalWidget::on_btndiv_clicked() { appendOperator(" / "); }

void CalWidget::on_btnOpenParen_clicked()
{
    str.append("(");
    openParensCount++;
    updateExpression();
}

void CalWidget::on_btnCloseParen_clicked()
{
    if (openParensCount > 0 && !str.isEmpty()) {
        str.append(")");
        openParensCount--;
        updateExpression();
    }
}

void CalWidget::on_btnExponent_clicked()
{
    str.append("^(");
    openParensCount++;
    updateExpression();
}

void CalWidget::on_btnLog_clicked()
{
    str.append("log(");
    openParensCount++;
    updateExpression();
}

void CalWidget::on_btnSin_clicked()
{
    str.append("sin(");
    openParensCount++;
    updateExpression();
}

void CalWidget::on_btnCos_clicked()
{
    str.append("cos(");
    openParensCount++;
    updateExpression();
}

void CalWidget::on_btnTan_clicked()
{
    str.append("tan(");
    openParensCount++;
    updateExpression();
}

void CalWidget::on_btnclear_clicked()
{
    str.clear();
    openParensCount = 0;
    updateExpression();
    ui->leditresult->clear();
}

void CalWidget::on_btnback_clicked()
{
    if (!str.isEmpty()) {
        QChar lastChar = str.at(str.length() - 1);
        str.chop(1);
        if (lastChar == '(') {
            openParensCount--;
        } else if (lastChar == ')') {
            openParensCount++;
        }
        updateExpression();
    }
}

void CalWidget::on_btnequal_clicked()
{
    if (openParensCount == 0) {
        QString result = evaluateExpression(str);
        ui->leditresult->setText(result);
        str.clear();
    } else {
        ui->leditresult->setText("Error: Unmatched parentheses");
    }
}

QString CalWidget::evaluateExpression(const QString &expr)
{
    QJSEngine engine;

    // Setup engine to recognize Math functions
    engine.globalObject().setProperty("sin", engine.evaluate("(x) => Math.sin(x)"));
    engine.globalObject().setProperty("cos", engine.evaluate("(x) => Math.cos(x)"));
    engine.globalObject().setProperty("tan", engine.evaluate("(x) => Math.tan(x)"));
    engine.globalObject().setProperty("log", engine.evaluate("(x) => Math.log(x)"));  // Natural logarithm
    engine.globalObject().setProperty("pow", engine.evaluate("(x, y) => Math.pow(x, y)"));

    // Prepare the expression to use proper JavaScript syntax for Math.pow
    QString jsExpr = expr;
    QRegularExpression expRegEx("\\b(\\d+|\\))\\s*\\^\\s*\\((\\d+)\\)"); // Updated regex to match numbers and properly closed parenthesis
    QRegularExpressionMatch match;
    int pos = 0;
    while ((match = expRegEx.match(jsExpr, pos)).hasMatch()) {
        QString base = match.captured(1);
        QString exponent = match.captured(2);
        QString replacement = QString("Math.pow(%1, %2)").arg(base, exponent);
        jsExpr.replace(match.capturedStart(0), match.capturedLength(0), replacement);
        pos += replacement.length(); // Update position to continue searching
    }

    // Evaluate the JavaScript expression
    QJSValue result = engine.evaluate(jsExpr);
    if (result.isError()) {
        return "Error: " + result.toString();
    }
    return result.toString();
}





void CalWidget::appendNumber(const QString &num)
{
    str.append(num);
    updateExpression();
}

void CalWidget::appendOperator(const QString &op)
{
    str.append(op);
    updateExpression();
}

void CalWidget::updateExpression()
{
    ui->leditexpr->setText(str);
}
