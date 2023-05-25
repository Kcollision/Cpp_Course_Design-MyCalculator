#ifndef EXPRESSION_CALC_H
#define EXPRESSION_CALC_H
#include <QString>
enum btnType //用枚举方便使用switch分辨类型
{
    Number,//数字
    Point,//小数点
    BinocularOp,//双目运算符
    MonocularOp,//单目运算符
    Special,//特殊符号
    LeftPa,//左括号
    RightPa,//右括号
    Percent,//百分号
    Index,//指数
    Delete,//删除
    Equal,//等于
    Clear,//清除数据
    Plot//画图
};
class expression
{
private:
    QString data;//字段
    btnType type;//运算符类型
public:
    expression();
    expression(QString _data, btnType _type);
    QString get_data();//字段公共接口
    btnType get_type();//运算符类型公共接口
};

#endif // EXPRESSION_CALC_H
