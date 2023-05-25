#include <expression_calc.h>
expression::expression()
{

}
expression::expression(QString _data, btnType _type)
{
    this->data=_data;
    this->type=_type;
}

QString expression::get_data()
{
    return data;
}

btnType expression::get_type()
{
    return type;
}
