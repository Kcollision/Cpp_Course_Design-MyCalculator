#include "widget_draw.h"
#include "ui_widget_draw.h"

Widget_draw::Widget_draw(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget_draw)
{
    ui->setupUi(this);
    this->setFixedSize(1213, 650);
    btnConnect();
    xFrom = -10;
    xTo = 10;
    plotPointCnt = 1000;

}
void Widget_draw::iniPlotUI()
{
    //设置plot_widget和plot的大小策略
    //部件关系:plot_widget->layout->plot
    QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
    QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
    plot_widget = new QWidget(nullptr);//没有父部件
    plot_widget->setMinimumSize(469, 357);
    plot_widget->setSizePolicy(sizePolicy1);

    plot = new QCustomPlot(plot_widget);
    plot->setMinimumSize(469, 357);
    plot->setSizePolicy(sizePolicy2);
    layout = new QVBoxLayout(plot_widget);
    layout->addWidget(plot);
    horizontalScrollBar = new QScrollBar(plot_widget);

    verticalScrollBar = new QScrollBar(plot_widget);
    horizontalScrollBar->setOrientation(Qt::Orientation::Horizontal);
    verticalScrollBar->setOrientation(Qt::Orientation::Vertical);

    plot_widget->show();

    //初始化范围
    if(ui->textTo->toPlainText().toDouble() > ui->textFrom->toPlainText().toDouble())
    {
        xFrom = ui->textFrom->toPlainText().toDouble();
        xTo = ui->textTo->toPlainText().toDouble();
        plotPointCnt = (xTo - xFrom) * 50;
    }

    //设置滚动条范围
    horizontalScrollBar->setRange(-plotPointCnt, plotPointCnt);
    verticalScrollBar->setRange(-plotPointCnt, plotPointCnt);

    // 在轴和滚动条之间创建连接
    connect(horizontalScrollBar, SIGNAL(valueChanged(int)), this, SLOT(horzScrollBarChanged(int)));
    connect(verticalScrollBar, SIGNAL(valueChanged(int)), this, SLOT(vertScrollBarChanged(int)));
    connect(plot->xAxis, SIGNAL(rangeChanged(QCPRange)), this, SLOT(xAxisChanged(QCPRange)));
    connect(plot->yAxis, SIGNAL(rangeChanged(QCPRange)), this, SLOT(yAxisChanged(QCPRange)));

    // 初始化轴范围（以及通过刚刚连接的信号的滚动条位置）
    plot->xAxis->setRange(0, 6, Qt::AlignCenter);
    plot->yAxis->setRange(0, 10, Qt::AlignCenter);


}

Widget_draw::~Widget_draw()
{
    delete ui;
    delete verticalScrollBar;
    delete horizontalScrollBar;
    delete layout;
    delete plot;
    delete plot_widget;
}

void Widget_draw::btnConnect()
{
    //整数
    connect(ui->btn0, &QPushButton::clicked, [this]()
    {
        onclicked(Number, "0");
    });
    connect(ui->btn1, &QPushButton::clicked, [this]()
    {
        onclicked(Number, "1");
    });
    connect(ui->btn2, &QPushButton::clicked, [this]()
    {
        onclicked(Number, "2");
    });
    connect(ui->btn3, &QPushButton::clicked, [this]()
    {
        onclicked(Number, "3");
    });
    connect(ui->btn4, &QPushButton::clicked, [this]()
    {
        onclicked(Number, "4");
    });
    connect(ui->btn5, &QPushButton::clicked, [this]()
    {
        onclicked(Number, "5");
    });
    connect(ui->btn6, &QPushButton::clicked, [this]()
    {
        onclicked(Number, "6");
    });
    connect(ui->btn7, &QPushButton::clicked, [this]()
    {
        onclicked(Number, "7");
    });
    connect(ui->btn8, &QPushButton::clicked, [this]()
    {
        onclicked(Number, "8");
    });
    connect(ui->btn9, &QPushButton::clicked, [this]()
    {
        onclicked(Number, "9");
    });

    //小数点
    connect(ui->btnPoint, &QPushButton::clicked, [this]()
    {
        onclicked(Point, ".");
    });

    //特殊符号e pai x
    connect(ui->btnE, &QPushButton::clicked, [this]()
    {
        onclicked(Special, "e");
    });
    connect(ui->btnPai, &QPushButton::clicked, [this]()
    {
        onclicked(Special, "π");
    });
    connect(ui->btnX, &QPushButton::clicked, [this]()
    {
        onclicked(Special, "x");
    });
    connect(ui->btnY, &QPushButton::clicked, [this]()
    {
        onclicked(Special, "y");
    });

    //左右括号
    connect(ui->btnLeftPa, &QPushButton::clicked, [this]()
    {
        onclicked(LeftPa, "(");
    });
    connect(ui->btnRightPa, &QPushButton::clicked, [this]()
    {
        onclicked(RightPa, ")");
    });

    //双目运算符
    connect(ui->btnMultiply, &QPushButton::clicked, [this]()
    {
        onclicked(BinocularOp, "*");
    });
    connect(ui->btnDividing, &QPushButton::clicked, [this]()
    {
        onclicked(BinocularOp, "÷");
    });
    connect(ui->btnPlus, &QPushButton::clicked, [this]()
    {
        onclicked(BinocularOp, "+");
    });
    connect(ui->btnMinus, &QPushButton::clicked, [this]()
    {
        onclicked(BinocularOp, "-");
    });

    //指数
    connect(ui->btnSemicolon, &QPushButton::clicked, [this]()
    {
        onclicked(Index, "^(-1)");
    });
    connect(ui->btnSquare, &QPushButton::clicked, [this]()
    {
        onclicked(Index, "^(2)");
    });
    connect(ui->btnIndex, &QPushButton::clicked, [this]()
    {
        onclicked(Index, "^");
    });

    //单目运算符绑定
    connect(ui->btnRoot, &QPushButton::clicked, [this]()
    {
        onclicked(MonocularOp, "√");
    });
    connect(ui->btnLn, &QPushButton::clicked, [this]()
    {
        onclicked(MonocularOp, "ln");
    });
    connect(ui->btnLog, &QPushButton::clicked, [this]()
    {
        onclicked(MonocularOp, "log");
    });
    connect(ui->btnSin, &QPushButton::clicked, [this]()
    {
        onclicked(MonocularOp, "sin");
    });
    connect(ui->btnCos, &QPushButton::clicked, [this]()
    {
        onclicked(MonocularOp, "cos");
    });
    connect(ui->btnTan, &QPushButton::clicked, [this]()
    {
        onclicked(MonocularOp, "tan");
    });

    //百分号
    connect(ui->btnPercent, &QPushButton::clicked, [this]()
    {
        onclicked(Percent, "%");
    });

    //清空
    connect(ui->btnClear, &QPushButton::clicked, [this]()
    {
        onclicked(Clear, "");
    });

    //退格
    connect(ui->btnDelete, &QPushButton::clicked, [this]()
    {
        onclicked(Delete, "");
    });

    //等于
    connect(ui->btnEqual, &QPushButton::clicked, [this]()
    {
        onclicked(Equal, "");
    });

    connect(ui->btnPlot, &QPushButton::clicked, [this]()
    {
        onclicked(Plot, "");
    });
}

void Widget_draw::onclicked(btnType type, QString btn)
{
    int rowCnt = ui->textEdit->document()->lineCount();

    switch (type)
    {
        case Number:
            {
                if(rowCnt <= 1)
                {
                    if(!InfixExpr.isEmpty())
                    {
                        switch(InfixExpr.top().get_type())
                        {
                            case Number:
                                {
                                    QString temp = InfixExpr.top().get_data();
                                    temp += btn;
                                    InfixExpr.pop();
                                    expression curData(temp, type);
                                    InfixExpr.push(curData);

                                    QString curExpression = ui->textEdit->toPlainText();
                                    curExpression += btn;
                                    text_show_expression(curExpression);
                                    break;
                                }
                            case Special:
                            case RightPa:
                            case Percent: //前面是这几种运算符,默认乘法
                                {
                                    expression multiply("*", BinocularOp);
                                    InfixExpr.push(multiply);

                                    QString curExpression = ui->textEdit->toPlainText();
                                    curExpression += btn;
                                    text_show_expression(curExpression);
                                    expression curData(btn, type);
                                    InfixExpr.push(curData);
                                    break;
                                }
                            case BinocularOp:
                            case LeftPa: //单目运算符会自动加括号，故栈顶一般不是单目运算符
                                {
                                    QString curExpression = ui->textEdit->toPlainText();
                                    curExpression += btn;
                                    text_show_expression(curExpression);
                                    expression curData(btn, type);
                                    InfixExpr.push(curData);
                                    break;
                                }
                            default:
                                break;
                        }
                    }
                    else
                    {
                        QString curExpression = ui->textEdit->toPlainText();
                        curExpression += btn;
                        text_show_expression(curExpression);
                        expression curData(btn, type);
                        InfixExpr.push(curData);
                        //break;
                    }
                }
                break;
            }
        case Point:
            {
                if(rowCnt == 1)
                {
                    //栈顶为数字且栈顶不为空
                    if(!InfixExpr.isEmpty() && InfixExpr.top().get_type() == Number)
                    {
                        QString preNum = InfixExpr.top().get_data();
                        if(pointCnt(preNum) == 0) //前面的数字不能有小数点
                        {
                            QString curExpression = ui->textEdit->toPlainText();
                            curExpression += btn;
                            text_show_expression(curExpression);
                            InfixExpr.pop();
                            preNum += btn;
                            expression curData(preNum, Number);
                            InfixExpr.push(curData);
                            break;
                        }
                    }
                }
                break;
            }
        case LeftPa:
        case Special:
            {
                if(rowCnt <= 1)
                {
                    if(btn == 'y')
                    {
                        QString curExpression = ui->textEdit->toPlainText();
                        curExpression += btn;
                        text_show_expression(curExpression);
                    }
                    else
                    {
                        if(!InfixExpr.isEmpty())
                        {
                            switch(InfixExpr.top().get_type())
                            {
                                case Number:
                                    {
                                        QString preNum_LastChar = ui->textEdit->toPlainText(); //只有text里会有小数点,InfixExpr.top().get_data()不会有;
                                        preNum_LastChar = preNum_LastChar.mid(preNum_LastChar.size() - 1, 1);
                                        if(preNum_LastChar != '.')
                                        {
                                            expression multiply("*", BinocularOp);
                                            InfixExpr.push(multiply);

                                            QString curExpression = ui->textEdit->toPlainText();
                                            curExpression += btn;
                                            text_show_expression(curExpression);
                                            expression curData(btn, type);
                                            InfixExpr.push(curData);
                                        }
                                        break;
                                    }
                                case RightPa:
                                case Special:
                                case Percent: //左括号前一位是括号，特殊字符，百分号
                                    {
                                        expression multiply("*", BinocularOp);
                                        InfixExpr.push(multiply);

                                        QString curExpression = ui->textEdit->toPlainText();
                                        curExpression += btn;
                                        text_show_expression(curExpression);
                                        expression curData(btn, type);
                                        InfixExpr.push(curData);
                                        break;
                                    }
                                case BinocularOp:
                                case LeftPa: //左括号前为左括号或双目运算符，直接入栈
                                    {
                                        QString curExpression = ui->textEdit->toPlainText();
                                        curExpression += btn;
                                        text_show_expression(curExpression);

                                        expression curData(btn, type);
                                        InfixExpr.push(curData);
                                        break;
                                    }
                                default:
                                    break;
                            }
                        }
                        else //表达式为空直接入栈
                        {
                            QString curExpression = ui->textEdit->toPlainText();
                            curExpression += btn;
                            text_show_expression(curExpression);

                            expression curData(btn, type);
                            InfixExpr.push(curData);
                            break;
                        }
                    }
                }
                break;
            }
        case RightPa:
            {
                if(rowCnt == 1 && check_RightPa())
                {
                    switch(InfixExpr.top().get_type())
                    {
                        case Number:
                        case RightPa:
                        case Percent:
                        case Special:
                            {
                                QString curExpression = ui->textEdit->toPlainText();
                                curExpression += btn;
                                text_show_expression(curExpression);

                                expression curData(btn, type);
                                InfixExpr.push(curData);
                                break;
                            }
                        default:
                            break;
                    }
                }
                break;
            }
        case Percent:
            {
                if(rowCnt == 1 && !InfixExpr.isEmpty())
                {
                    switch(InfixExpr.top().get_type())
                    {
                        case Number:
                        case RightPa:
                        case Percent:
                            {
                                QString curExpression = ui->textEdit->toPlainText();
                                curExpression += btn;
                                text_show_expression(curExpression);

                                expression curData(btn, type);
                                InfixExpr.push(curData);
                                break;
                            }
                        default:
                            break;
                    }
                }
                break;
            }
        case MonocularOp: //单目运算符
            {
                if(rowCnt <= 1)
                {
                    if(!InfixExpr.isEmpty() && (InfixExpr.top().get_type() == Number || InfixExpr.top().get_type() == RightPa || InfixExpr.top().get_type() == Special || InfixExpr.top().get_type() == Percent))
                    {
                        expression multiply("*", BinocularOp);
                        InfixExpr.push(multiply);

                        QString curExpression = ui->textEdit->toPlainText();
                        curExpression += btn;
                        curExpression += "(";
                        text_show_expression(curExpression);

                        expression curData(btn, type);
                        InfixExpr.push(curData);
                        expression curData1("(", LeftPa);
                        InfixExpr.push(curData1);
                    }
                    else if(InfixExpr.isEmpty() || InfixExpr.top().get_type() == LeftPa || InfixExpr.top().get_type() == Index || InfixExpr.top().get_type() == BinocularOp)
                    {
                        QString curExpression = ui->textEdit->toPlainText();
                        curExpression += btn;
                        curExpression += "(";
                        text_show_expression(curExpression);

                        expression curData(btn, type);
                        InfixExpr.push(curData);
                        expression curData1("(", LeftPa);
                        InfixExpr.push(curData1);
                    }
                }
                break;
            }
        case BinocularOp: //注意"-"在表达式开头的情况
            {
                if(rowCnt == 1)
                {
                    if(InfixExpr.isEmpty() && btn == "-") //见上方
                    {
                        expression zero("0", Number);
                        InfixExpr.push(zero);
                        expression curData("-", type);
                        InfixExpr.push(curData);

                        QString curExpression = ui->textEdit->toPlainText();
                        curExpression += btn;
                        text_show_expression(curExpression);
                    }
                    else if(!InfixExpr.isEmpty()) //表达式不为空且前一位不是小数点
                    {
                        QString preNum_LastChar = ui->textEdit->toPlainText(); //只有text里会有小数点,InfixExpr.top().get_data()不会有;
                        preNum_LastChar = preNum_LastChar.mid(preNum_LastChar.size() - 1, 1);
                        if(preNum_LastChar != '.')
                        {
                            switch (InfixExpr.top().get_type()) //前一符号只能是数字,百分号,右括号,特殊字符
                            {
                                case Number:
                                case Percent:
                                case RightPa:
                                case Special:
                                    {
                                        expression curData(btn, type);
                                        InfixExpr.push(curData);

                                        QString curExpression = ui->textEdit->toPlainText();
                                        curExpression += btn;
                                        text_show_expression(curExpression);
                                        break;
                                    }
                                case LeftPa:
                                    {
                                        if(btn == '-') //注意"(-"这种情况
                                        {
                                            expression zero("0", Number);
                                            InfixExpr.push(zero);
                                            expression curData("-", type);
                                            InfixExpr.push(curData);

                                            QString curExpression = ui->textEdit->toPlainText();
                                            curExpression += btn;
                                            text_show_expression(curExpression);
                                        }
                                        break;
                                    }
                                default:
                                    break;
                            }
                        }
                    }
                }
                break;
            }
        case Index:
            {
                if(rowCnt == 1)
                {
                    if(!InfixExpr.isEmpty())
                    {
                        switch(InfixExpr.top().get_type())
                        {
                            case Number:
                            case RightPa:
                            case Special:
                                {
                                    if(btn == "^")
                                    {
                                        QString curExpression = ui->textEdit->toPlainText();
                                        curExpression += btn;
                                        curExpression += "(";
                                        text_show_expression(curExpression);

                                        expression curData(btn, type);
                                        InfixExpr.push(curData);
                                        expression curData1("(", LeftPa);
                                        InfixExpr.push(curData1);
                                    }
                                    else if(btn == "^(2)")
                                    {
                                        QString curExpression = ui->textEdit->toPlainText();
                                        curExpression += btn;
                                        text_show_expression(curExpression);

                                        expression curData("^", type);
                                        InfixExpr.push(curData);
                                        expression curData1("(", LeftPa);
                                        InfixExpr.push(curData1);
                                        expression curData2("2", Number);
                                        InfixExpr.push(curData2);
                                        expression curData3(")", RightPa);
                                        InfixExpr.push(curData3);
                                    }
                                    else if(btn == "^(-1)")
                                    {
                                        QString curExpression = ui->textEdit->toPlainText();
                                        curExpression += btn;
                                        text_show_expression(curExpression);

                                        expression curData("^", type);
                                        InfixExpr.push(curData);
                                        expression curData1("(", LeftPa);
                                        InfixExpr.push(curData1);
                                        expression curData2("-1", Number);
                                        InfixExpr.push(curData2);
                                        expression curData3(")", RightPa);
                                        InfixExpr.push(curData3);

                                    }
                                    break;
                                }
                            default:
                                break;
                        }
                    }
                }
                break;
            }
        case Delete:
            {
                QString curExpression = ui->textEdit->toPlainText(); //去掉最后一个字符
                if(!InfixExpr.isEmpty())
                {
                    switch(InfixExpr.top().get_type())
                    {
                        case BinocularOp:
                        case RightPa:
                        case Percent:
                            {
                                curExpression.chop(1);//去除最后一个字符
                                InfixExpr.pop();
                                break;
                            }
                        case Number:
                            {
                                if(InfixExpr.top().get_data().size() > 1)
                                {
                                    //52.21->52.2
                                    curExpression.chop(1);
                                    QString curData = InfixExpr.top().get_data();
                                    curData.chop(1);
                                    InfixExpr.pop();
                                    expression temp(curData, Number);
                                    InfixExpr.push(temp);
                                }
                                else //栈中:e*8->e
                                {
                                    curExpression.chop(1);
                                    InfixExpr.pop();
                                    QString check_multiply = curExpression.right(1); //获取最后一个字符
                                    if(!InfixExpr.isEmpty() && InfixExpr.top().get_data() == "*" && (check_multiply == "e" || check_multiply == "x" || check_multiply == "π" || check_multiply == "%" || check_multiply == ")"))
                                    {
                                        InfixExpr.pop();
                                    }
                                }
                                break;
                            }
                        case Special:
                            {
                                InfixExpr.pop();
                                curExpression.chop(1);
                                if(curExpression.size())
                                {
                                    QString final_ch = curExpression.right(1);
                                    if((final_ch <= "9" && final_ch >= "0") || final_ch == "e" || final_ch == "x" || final_ch == "π" || final_ch == "%" || final_ch == ")")
                                    {
                                        InfixExpr.pop();
                                    }
                                }
                                break;
                            }
                        case LeftPa:
                            {
                                InfixExpr.pop();
                                curExpression.chop(1);
                                if(curExpression.size())
                                {
                                    QString final_ch = curExpression.right(1);
                                    if((final_ch <= "9" && final_ch >= "0") || final_ch == "e" || final_ch == "x" || final_ch == "π" || final_ch == "%" || final_ch == ")")
                                    {
                                        InfixExpr.pop();
                                    }
                                    else if(final_ch == "^" || final_ch == "n" || final_ch == "g" || final_ch == "√" || final_ch == "s")
                                    {
                                        //单目运算符或者指数
                                        btnType curDataType = InfixExpr.top().get_type();
                                        QString curData = InfixExpr.top().get_data();
                                        InfixExpr.pop();//将该运算符从栈中先删除
                                        switch(curDataType)
                                        {
                                            case MonocularOp:
                                                {
                                                    if(curData == "ln" || curData == "√" || curData == "sin" || curData == "cos" || curData == "tan" || curData == "log")
                                                    {
                                                        curExpression.chop(curData.size());
                                                        final_ch = curExpression.right(1); //取表达式最后的一个字符
                                                        if((final_ch >= "0" && final_ch <= "9") || final_ch == ")" || final_ch == "%" || final_ch == "e" || final_ch == "x" || final_ch == "π")
                                                        {
                                                            InfixExpr.pop();//删除中缀表达式的乘号
                                                        }
                                                    }
                                                    else if(curData == "^")
                                                    {
                                                        curExpression.chop(1);
                                                    }
                                                    break;
                                                }
                                            case Index:
                                                {
                                                    curExpression.chop(1);
                                                    break;
                                                }
                                            default:
                                                break;
                                        }
                                    }
                                }
                                break;
                            }
                        default:
                            break;
                    }
                }
                text_show_expression(curExpression);
                break;
            }
        case Equal:
            {
                if(rowCnt == 1)
                {
                    QString curExpression = ui->textEdit->toPlainText();
                    curExpression += "=";
                    text_show_expression(curExpression);
                }
                break;
            }
        case Clear:
            {
                ui->textEdit->clear();
                while(!InfixExpr.isEmpty())
                {
                    InfixExpr.pop();
                }
                while(!SuffixExpr.isEmpty())
                {
                    SuffixExpr.pop();
                }
                break;
            }
        case Plot:
            {
                if(ui->textEdit->toPlainText().startsWith("y="))
                {
                    iniPlotUI();
                    draw_expression();
                }
                else
                {
                    ui->textEdit->append("请输入以y=开头的表达式!");
                }

            }
        default:
            break;
    }
}

void Widget_draw::text_show_expression(const QString &expression)
{
    QFont font("Consolas", 14); // 设置字体和大小
    ui->textEdit->setFont(font); // 设置字体
    ui->textEdit->setPlainText(expression);
}

int Widget_draw::pointCnt(const QString &str)
{
    int cnt = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '.')
        {
            cnt++;
        }
    }
    return cnt;
}

bool Widget_draw::check_RightPa()
{
    //若左括号数目比右括号多,return true
    int LeftPa_cnt = 0, RightPa_cnt = 0;
    if(!InfixExpr.isEmpty())
    {
        for(auto i = 0; i < InfixExpr.size(); i++)
        {
            if(InfixExpr[i].get_type() == LeftPa)
            {
                LeftPa_cnt++;
            }
            if(InfixExpr[i].get_type() == RightPa)
            {
                RightPa_cnt++;
            }
        }
        return LeftPa_cnt > RightPa_cnt;
    }
    return false;//栈为空return false
}

void Widget_draw::InfixExpr_to_SuffixExpr(double t)
{
    //中缀表达式转为后缀,将x替换为数字
    //优先级:左括号 > 单目,百分号,特殊符号e和π > 双目*,÷ > 双目+,-
    InfixExpr_Copy.clear();
    InfixExpr_Copy = InfixExpr;
    while(!InfixExpr_Copy.isEmpty())
    {
        QString btn = InfixExpr_Copy.first().get_data();
        btnType type = InfixExpr_Copy.first().get_type();
        switch (type)
        {
            case LeftPa: //"("运算符最高,直接入符号栈
                {
                    expression lp(btn, type);
                    opstack.push(lp);
                    break;
                }
            case Number:
            case Special: //数字直接入后缀表达式
                {
                    if(btn == 'x')//将x换为自变量数字
                    {
                        expression curData(QString("%1").arg(t, 0, 'g', 13), Number);
                        SuffixExpr.push(curData);
                        break;
                    }
                    else
                    {
                        expression curData(btn, type);
                        SuffixExpr.push(curData);
                        break;
                    }

                }

            case RightPa:
                {
                    while(!opstack.isEmpty() && opstack.top().get_type() != LeftPa)
                    {
                        //一直出栈直到遇到“(”
                        expression curOP(opstack.top().get_data(), opstack.top().get_type());
                        SuffixExpr.push(curOP);//出栈的符号输出到后缀表达式
                        opstack.pop();
                    }
                    opstack.pop();//"("出栈
                    break;
                }
            case BinocularOp:
                {
                    if(btn == "÷" || btn == "*")
                    {
                        while(!opstack.isEmpty() && opstack.top().get_data() != "+" && opstack.top().get_data() != "-" && opstack.top().get_data() != "(")
                        {
                            //直到遇到(,+,-或opstack为空
                            expression curOP(opstack.top().get_data(), opstack.top().get_type());
                            SuffixExpr.push(curOP);
                            opstack.pop();
                        }
                        expression curOP(btn, type); //当前符号入符号栈
                        opstack.push(curOP);
                    }
                    else if(btn == "+" || btn == "-")
                    {
                        while(!opstack.isEmpty() && opstack.top().get_data() != "(")
                        {
                            //直到遇到(或opstack为空
                            expression curOP(opstack.top().get_data(), opstack.top().get_type());
                            SuffixExpr.push(curOP);
                            opstack.pop();
                        }
                        expression curOP(btn, type); //当前符号入符号栈
                        opstack.push(curOP);
                    }
                    break;
                }
            case MonocularOp:
            case Index:
            case Percent: //优先级仅次于(
                {
                    while(!opstack.isEmpty() && (opstack.top().get_type() == MonocularOp || opstack.top().get_type() == Percent || opstack.top().get_type() == Index))
                    {
                        //当opstack不为空且符号栈顶元素仅为单目,百分号,指数时出栈
                        expression curOP(opstack.top().get_data(), opstack.top().get_type());
                        SuffixExpr.push(curOP);//出栈的符号输出到后缀表达式
                        opstack.pop();
                    }
                    expression curOP(btn, type); //当前符号入栈
                    opstack.push(curOP);
                    break;
                }

            default:
                break;
        }
        InfixExpr_Copy.pop_front();
    }
    if(!opstack.isEmpty())
    {
        //将剩余符号输出到后缀表达式中
        while(!opstack.isEmpty())
        {
            expression curOP(opstack.top().get_data(), opstack.top().get_type());
            SuffixExpr.push(curOP);//出栈的符号输出到后缀表达式
            opstack.pop();
        }
    }
}

bool Widget_draw::Calc_SuffixExpr()
{
    //计算后缀表达式的值
    while(!SuffixExpr.isEmpty())
    {
        btnType type = SuffixExpr.first().get_type();
        QString data = SuffixExpr.first().get_data();
        switch(type)
        {
            case Number:
                {
                    double t = data.toDouble();
                    numstack.push(t);
                    break;
                }
            case BinocularOp:
                {
                    double num1 = numstack.top();
                    numstack.pop();
                    double num2 = numstack.top();
                    numstack.pop();
                    double num;
                    if(data == "÷")
                    {
                        if(num1 == 0)
                        {
                            ui->textEdit->append("除数不能为0!");
                            return false;
                        }
                        else
                        {
                            num = num2 / num1;
                        }
                    }
                    else if(data == "+")
                    {
                        num = num2 + num1;
                    }
                    else if(data == "-")
                    {
                        num = num2 - num1;
                    }
                    else
                    {
                        num = num2 * num1;
                    }
                    numstack.push(num);
                    break;
                }
            case MonocularOp:
                {
                    double num1 = numstack.top();
                    numstack.pop();
                    if(data == "√")
                    {
                        if(num1 < 0)
                        {
                            ui->textEdit->append("被开方数不能小于0!");
                            return false;
                        }
                        else
                        {
                            num1 = sqrt(num1);
                        }
                    }
                    else if(data == "ln")
                    {
                        num1 = log(num1);
                    }
                    else if(data == "log")
                    {
                        num1 = log10(num1);
                    }
                    else if(data == "sin")
                    {
                        num1 = sin(num1);
                    }
                    else if(data == "cos")
                    {
                        num1 = cos(num1);
                    }
                    else
                    {
                        num1 = tan(num1);
                    }
                    numstack.push(num1);
                    break;
                }
            case Percent:
                {
                    double num1 = numstack.top();
                    numstack.pop();
                    num1 /= 100;
                    numstack.push(num1);
                    break;
                }
            case Special:
                {
                    double num;
                    if(data == "e")
                    {
                        num = exp(1);
                    }
                    else if(data == "π")
                    {
                        num = acos(-1);
                    }
                    numstack.push(num);
                    break;
                }
            case Index:
                {
                    double num1 = numstack.top();
                    numstack.pop();
                    double num2 = numstack.top();
                    numstack.pop();
                    double num;
                    num = pow(num2, num1);
                    numstack.push(num);
                    break;
                }
            default:
                break;
        }
        SuffixExpr.pop_front();
    }
    return true;
}

double Widget_draw::Calc_Y(double x)
{
    //根据对应的x计算y的值

    SuffixExpr.clear();
    opstack.clear();
    numstack.clear();
    InfixExpr_to_SuffixExpr(x);
    if(Calc_SuffixExpr())
    {
        return numstack.top();
    }
    return 0;
}

void Widget_draw::draw_expression()
{
    //画出函数

    plot->addGraph();
    plot->graph()->setPen(QPen(Qt::blue));

    QVector<double> x(plotPointCnt), y0(plotPointCnt);
    for (int i = 0; i < plotPointCnt; ++i)
    {
        x[i] = xFrom + i * (xTo - xFrom) / (plotPointCnt - 1);
        y0[i] = Calc_Y(x[i]);//qExp(-x[i] * x[i] * 0.25) * qSin(x[i] * 5) * 5;

    }
    //qDebug() << "x[250]: " << x[250] << endl;
    //qDebug() << "y[250]: " << y0[250] << endl;
    plot->graph(0)->setData(x, y0);
    plot->axisRect()->setupFullAxesBox(true);
    plot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    plot->replot();
    plot->show();
}
void Widget_draw::horzScrollBarChanged(int value)
{
    if (qAbs(plot->xAxis->range().center() - value / 100.0) > 0.01) // 如果正在拖动绘图，不用重新绘图两次
    {
        plot->xAxis->setRange(value / 100.0, plot->xAxis->range().size(), Qt::AlignCenter);
        plot->replot();
    }
}

void Widget_draw::vertScrollBarChanged(int value)
{
    if (qAbs(plot->yAxis->range().center() + value / 100.0) > 0.01) // 如果正在拖动绘图，不用重新绘图两次
    {
        plot->yAxis->setRange(-value / 100.0, plot->yAxis->range().size(), Qt::AlignCenter);
        plot->replot();
    }
}

void Widget_draw::xAxisChanged(QCPRange range)
{
    horizontalScrollBar->setValue(qRound(range.center() * 100.0)); // 调整滚动条滑块的位置
    horizontalScrollBar->setPageStep(qRound(range.size() * 100.0)); // 调整滚动条滑块的大小
}

void Widget_draw::yAxisChanged(QCPRange range)
{
    verticalScrollBar->setValue(qRound(-range.center() * 100.0)); // 调整滚动条滑块的位置
    verticalScrollBar->setPageStep(qRound(range.size() * 100.0)); // 调整滚动条滑块的大小
}
