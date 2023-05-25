#ifndef WIDGET_CALC_H
#define WIDGET_CALC_H

#include <QWidget>
#include <expression_calc.h>
#include <QStack>

namespace Ui
{
    class Widget_calc;
}

class Widget_calc : public QWidget
{
    Q_OBJECT

public:
    Widget_calc(QWidget *parent = nullptr);
    ~Widget_calc();

    void btnConnect();//建立widget_calc的每个pushbutton信号与槽的连接
    void onclicked(btnType type, QString data); //设置点击pushbutton后的动作
    void text_show_expression(const QString &expression);//将QString类型的字符串输出到text栏
    int pointCnt(const QString &str);//计算小数点个数
    bool check_RightPa();//检查左括号是否多于右括号
    void InfixExpr_to_SuffixExpr();//中缀表达式转后缀表达式
    bool Calc_SuffixExpr();//计算后缀表达式
private:
    Ui::Widget_calc *ui;
    QStack <expression> InfixExpr;//存储中缀表达式
    QStack <expression> SuffixExpr;//存储后缀表达式
    QStack <expression> opstack;//符号栈
    QStack <double> numstack;//数字栈
};

#endif // WIDGET_CALC_H
