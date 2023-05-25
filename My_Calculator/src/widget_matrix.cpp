#include "widget_matrix.h"
#include "ui_widget_matrix.h"

Widget_matrix::Widget_matrix(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget_matrix)
{

    ui->setupUi(this);
    this->setFixedSize(1213, 720);
    QFont font("Consolas", 14);
    ui->textInput->setFont(font);
    ui->textOutput->setFont(font);

    btnConnect();
    det = 1;//行列式初始化为1,因为LUP分解中p矩阵的行列式初值为1
}

Widget_matrix::~Widget_matrix()
{
    delete ui;
}

void Widget_matrix::btnConnect()
{
    connect(ui->btnSteppedType, &QPushButton::clicked, [this]()
    {
        onclicked_btnSteppedType();
    });
    connect(ui->btnClear, &QPushButton::clicked, [this]()
    {
        onclicked_btnClear();
    });
    connect(ui->btnClosure, &QPushButton::clicked, [this]()
    {
        onclicked_btnClosure();
    });
    connect(ui->btnDet, &QPushButton::clicked, [this]()
    {
        onclicked_btnDet();
    });
    connect(ui->btnInversion, &QPushButton::clicked, [this]()
    {
        onclicked_btnInversion();
    });
}
void Widget_matrix::onclicked_btnClosure()
{
    //每次点击都清除一下矩阵数据
    clear_matrix();
    if(StorageFile())
    {
        if(row != column || !row || !column)
        {
            ui->textOutput->appendPlainText("矩阵输入有误!请重新输入");
        }
        else
        {
            Reflexive_Closure();
            ui->textOutput->appendPlainText("自反闭包:\n");
            ReadFile();
        }
    }
    if(StorageFile())
    {
        if(row != column || !row || !column)
        {
            ui->textOutput->appendPlainText("矩阵输入有误!请重新输入");
        }
        else
        {
            Symmetric_Closure();
            ui->textOutput->appendPlainText("对称闭包:\n");
            ReadFile();
        }
    }
    if(StorageFile())
    {
        if(row != column || !row || !column)
        {
            ui->textOutput->appendPlainText("矩阵输入有误!请重新输入");
        }
        else
        {
            Transitive_Closure();
            ui->textOutput->appendPlainText("传递闭包:\n");
            ReadFile();
        }
    }
}

void Widget_matrix::onclicked_btnDet()
{
    clear_matrix();
    if(StorageFile())
    {
        if(Det(matrix))
        {
            ui->textOutput->appendPlainText("输入矩阵的行列式值为: " + QString("%1").arg(det, 0, 'g', 13));
        }
        else
        {
            ui->textOutput->appendPlainText("矩阵输入有误!请重新输入");
        }
    }

}

void Widget_matrix::onclicked_btnInversion()
{
    clear_matrix();
    if(StorageFile())
    {
        if(Inversion_matrix(matrix))
        {
            ui->textOutput->appendPlainText("逆矩阵: \n");
            ReadFile();
        }
        else
        {
            ui->textOutput->appendPlainText("此矩阵不存在逆矩阵!请重新输入");
        }
    }
}

void Widget_matrix::clear_matrix()
{
    memset(matrix, 0, sizeof(matrix));
    memset(multi, 0, sizeof(multi));
    memset(Inversion, 0, sizeof(Inversion));
    memset(l, 0, sizeof(l));
    memset(l_1, 0, sizeof(l_1));
    memset(u, 0, sizeof(u));
    memset(u_1, 0, sizeof(u_1));
    memset(p, 0, sizeof(p));
    det = 1;//行列式初始化为1(p矩阵的初始值)
    row = column = 0;
}

void Widget_matrix::onclicked_btnSteppedType()
{
    clear_matrix();
    if(StorageFile())
    {
        if(!To_SteppedType())
        {
            ui->textOutput->appendPlainText("矩阵输入有误!请重新输入");
        }
        else
        {
            ui->textOutput->appendPlainText("阶梯型为:\n");
            ReadFile();
        }
    }
    else
    {
        ui->textOutput->appendPlainText("无法读取文件!");
    }
}
void Widget_matrix::onclicked_btnClear()
{
    ui->textInput->clear();
    ui->textOutput->clear();
    clear_matrix();
}

bool Widget_matrix::To_SteppedType()
{
    //化为阶梯型
    if(row <= 0 || column <= 0)
    {
        return false;
    }
    for (int i = 0; i < row; i++)
    {
        //对于每一行，找到该行中第一个非零元素所在的列(主元列)
        int pivot = i;
        while (pivot < row && fabs(matrix[pivot][i]) < EPSILON)
        {
            pivot++;
        }
        if (pivot == row)
        {
            continue;    // 如果该列中没有主元素，则跳过该行
        }
        if (pivot != i)
        {
            qSwap(matrix[pivot], matrix[i]);    // 如果主元素不在当前行，则交换当前行和包含主元素的行
        }
        for (int j = i + 1; j < row; j++)
        {
            double factor = matrix[j][i] / matrix[i][i];
            // 因子是该行中主元素下面的元素除以主元素本身的值
            // 将该列下面的所有行都减去一个因子，以使该列下面的所有元素都变为零
            for (int k = i; k <= row; k++)
            {
                matrix[j][k] -= factor * matrix[i][k];

            }
        }
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            if(fabs(matrix[i][j]) < EPSILON)
            {
                matrix[i][j] = 0;
            }
        }
    }
    return true;
}

bool Widget_matrix::Multiply_matrix(double (&a)[N][N], int n, int m, double (&b)[N][N], int n1, int m1)
{
    if(m != n1)
    {
        return false;
    }
    for(int k = 0; k < m1; k++)
    {
        for(int i = 0; i < n; i++)
        {
            double sum = 0;
            for(int j = 0; j < m; j++)
            {
                sum += a[i][j] * b[j][k];
            }
            multi[i][k] = sum;
        }
    }
    return true;

}

void Widget_matrix::Reflexive_Closure()
{
    //求自反闭包
    for(int i = 0; i < row; i++)
    {
        matrix[i][i] = 1;
    }
}

void Widget_matrix::Symmetric_Closure()
{
    //求对称闭包
    for(int i = 0; i < row; i++)
    {
        for(int j = i + 1; j < column; j++)
        {
            if(matrix[i][j] == 1 || matrix[j][i] == 1)
            {
                matrix[j][i] = matrix[i][j] = 1;
            }
        }
    }
}

void Widget_matrix::Transitive_Closure()
{
    //求传递闭包
    for (int j = 0; j < row; j++)
    {
        for (int i = 0; i < row; i++)
        {
            if (matrix[i][j] >= 1)
            {
                for (int k = 0; k < row; k++)
                {
                    matrix[i][k] = matrix[i][k] + matrix[j][k];
                }
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (matrix[i][j] >= 1)
            {
                matrix[i][j] = 1;
            }
        }
    }
}

bool Widget_matrix::StorageFile()
{
    QFile file("input_data.txt");
    if (file.open(QFile::WriteOnly | QFile::Text))
    {
        QString filePath = file.fileName();
        qDebug() << "写入文件成功：" << filePath;
    }
    else
    {
        qDebug() << "打开input_data.txt失败";
        return false;
    }
    /*查看文件保存路径
    QString currentPath = QDir::currentPath();
    qDebug() << "当前工作目录：" << currentPath;
    qDebug() << "当前内容：" << ui->textInput->toPlainText();
    */
    QTextStream out(&file);
    QString str = ui->textInput->toPlainText();
    out << str;
    file.close();

    file.open(QFile::ReadOnly | QFile::Text);
    QTextStream stream(&file);
    stream >> row;
    stream >> column;
    for(int i = 0; i < row; i++)
        for(int j = 0; j < column; j++)
        {
            stream >> matrix[i][j];
        }
    file.close();
    return true;
}

bool Widget_matrix::ReadFile()
{
    QFile file("output_data.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << "打开output_data.txt失败";
    }
    QTextStream out(&file);
    out << "row:" << row << " column:" << column << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            out << matrix[i][j];
            if(j != column - 1)
            {
                out << " ";
            }
        }
        out << endl;
    }
    file.close();

    file.open(QFile::ReadOnly | QFile::Text);
    QTextStream in(&file);
    QString temp = in.readAll();
    ui->textOutput->insertPlainText(temp);
    file.close();
    return true;
}

bool Widget_matrix::LUP_decompose(double (&a)[N][N])
{
    if(row != column)
    {
        return false;
    }
    // 初始化l,p矩阵,对角线赋值1
    for (int i = 0; i < row; i++)
    {
        l[i][i] = 1;
        p[i][i] = 1;
    }

    // 给u矩阵第一行赋值
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            u[i][j] = a[i][j];
        }
    }

    for (int j = 0; j < row - 1; j++)
    {
        //找出最大的u[i][j]所在的行max_i
        double max_num = -1, max_i = j;
        for (int i = j; i < row; i++)
            if(fabs(u[i][j]) > max_num)
            {
                max_num = fabs(u[i][j]), max_i = i;
            }
        Interchange_rows(max_i, j, j, row, u);
        Interchange_rows(max_i, j, 0, j, l);
        Interchange_rows(max_i, j, 0, row, p);

        for (int i = j + 1; i < row; i++)
        {
            l[i][j] = u[i][j] / u[j][j];
            for (int k = j; k < row; k++)
            {
                u[i][k] -= l[i][j] * u[j][k];
            }
        }
    }
    return true;
}

void Widget_matrix::Interchange_rows(int i, int j, int begin, int end, double (&a)[N][N])
{
    for (int k = begin; k < end; k++)
    {
        qSwap(a[i][k], a[j][k]);
        det = -det;
    }
}

bool Widget_matrix::Det(double (&a)[N][N])
{

    if(!LUP_decompose(a))
    {
        return false;
    }

    for (int i = 0; i < row; i++)
    {
        det *= u[i][i];//u矩阵的行列式
    }
    //不用再除以p矩阵的行列式
    return true;
}

bool Widget_matrix::Inversion_matrix(double (&a)[N][N])
{
    if(Det(a))
    {
        if(fabs(det) <= EPSILON )
        {
            return false;
        }
        else
        {
            for (int i = 0; i < row; i++) //求矩阵U的逆
            {
                u_1[i][i] = 1 / u[i][i]; //对角元素的值，直接取倒数
                for (int k = i - 1; k >= 0; k--)
                {
                    double sum = 0;
                    for (int j = k + 1; j <= i; j++)
                    {
                        sum = sum + u[k][j] * u_1[j][i];
                    }
                    u_1[k][i] = -sum / u[k][k]; //迭代计算，按列倒序依次得到每一个值
                }
            }
            for (int i = 0; i < row; i++) //求矩阵L的逆
            {
                l_1[i][i] = 1; //对角元素的值，直接取倒数，这里为1
                for (int k = i + 1; k < row; k++)
                {
                    for (int j = i; j <= k - 1; j++)
                    {
                        l_1[k][i] = l_1[k][i] - l[k][j] * l_1[j][i];    //迭代计算，按列顺序依次得到每一个值
                    }
                }
            }

            Multiply_matrix(u_1, row, row, l_1, row, row);//先计算u逆右乘l逆,结果存到multi里

            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < row; j++)
                {
                    Inversion[i][j] = multi[i][j];//将multi的值(u逆右乘l逆)存到Inversion里面;
                }
            }
            Multiply_matrix(Inversion, row, row, p, row, row);//计算u逆右乘l逆后的矩阵再右乘p,结果存到multi里
            for(int i = 0; i < row; i++)
                for(int j = 0; j < row; j++)
                {
                    matrix[i][j] = multi[i][j];//最后输出从matrix里输出
                }

            return true;
        }
    }
    return false;
}


