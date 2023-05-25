#ifndef WIDGET_DRAW_H
#define WIDGET_DRAW_H

#include <QWidget>
#include <expression_calc.h>
#include <QStack>
#include "D:\qt\qcustomplot\qcustomplot.h"//此处换为qcustomplot.h所在的文件路径
#include <QDebug>
#include <QScrollBar>
#include <QVBoxLayout>
namespace Ui
{
    class Widget_draw;
}

class Widget_draw : public QWidget
{
    Q_OBJECT

public:
    explicit Widget_draw(QWidget *parent = 0);
    ~Widget_draw();
    void iniPlotUI();//初始化plot所在的widget图像
    void btnConnect();//建立widget_draw的每个pushbutton信号与槽的连接
    void onclicked(btnType type, QString data);//设置点击pushbutton后的动作
    void text_show_expression(const QString &expression);//将QString类型的字符串输出到text栏
    int pointCnt(const QString &str);//计算字符串小数点个数
    bool check_RightPa();//检查左括号是否多于右括号
    void InfixExpr_to_SuffixExpr(double x);//中缀表达式转后缀表达式
    bool Calc_SuffixExpr();//计算后缀表达式的值
    double Calc_Y(double x);//传入x的值计算y的值
    void draw_expression();//函数表达式图像绘制

public Q_SLOTS://控制图像缩放的槽函数
    void horzScrollBarChanged(int value);
    void vertScrollBarChanged(int value);
    void xAxisChanged(QCPRange range);
    void yAxisChanged(QCPRange range);


private:
    Ui::Widget_draw *ui;
    QWidget *plot_widget;//放图像的widget
    QCustomPlot *plot ;//图像
    QVBoxLayout *layout;//plot在widget中的布局
    QScrollBar *horizontalScrollBar;//水平滑动条
    QScrollBar *verticalScrollBar;//垂直滑动条

    QStack <expression> InfixExpr;//存储中缀表达式
    QStack <expression> InfixExpr_Copy;//中缀表达式的副本
    QStack <expression> SuffixExpr;//存储后缀表达式
    QStack <expression> opstack;//符号栈
    QStack <double> numstack;//计算后缀表达式的值所需的数字栈
    double xFrom, xTo, plotPointCnt;
};

#endif // WIDGET_DRAW_H
