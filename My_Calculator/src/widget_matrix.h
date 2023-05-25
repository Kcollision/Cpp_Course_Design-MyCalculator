#ifndef WIDGET_MATRIX_H
#define WIDGET_MATRIX_H

#include <QWidget>
#include <QTextStream>
#include <QFile>
#include <QDebug>
#include <QDir>
#include <QtAlgorithms>
const int N = 100;//矩阵最大大小
const double EPSILON = 1e-13;//小于此值视为0
/*
LUP分解的算法参考了华东师范大学潘建瑜老师的课件
https://math.ecnu.edu.cn/~jypan/Teaching/MNA/
*/
namespace Ui
{
    class Widget_matrix;
}

class Widget_matrix : public QWidget
{
    Q_OBJECT

public:
    explicit Widget_matrix(QWidget *parent = 0);
    ~Widget_matrix();
    bool To_SteppedType();//转换为阶梯型
    bool Multiply_matrix(double (&a)[N][N], int n, int m, double (&b)[N][N], int n1, int m1);//计算矩阵相乘
    void Reflexive_Closure();//求自反闭包
    void Symmetric_Closure();//求对称闭包
    void Transitive_Closure();//求传递闭包
    bool StorageFile();//input存文件
    bool ReadFile();//output读文件
    bool LUP_decompose(double (&a)[N][N]);//对a矩阵进行LUP分解
    void Interchange_rows(int i, int j, int begin, int end, double (&a)[N][N]);//交换矩阵的某些行
    bool Det(double (&a)[N][N]);//计算行列式
    bool Inversion_matrix(double (&a)[N][N]);//求逆矩阵
    void clear_matrix();//清除矩阵数据

    void btnConnect();//连接btn信号与槽的函数
    void onclicked_btnClear();//清除数据
    void onclicked_btnSteppedType();//阶梯型
    void onclicked_btnClosure();//关系闭包
    void onclicked_btnDet();//行列式
    void onclicked_btnInversion();//逆矩阵

private:
    Ui::Widget_matrix *ui;
    int row, column;//row行column列的矩阵

    double matrix[N][N];//原始矩阵
    double multi[N][N];//相乘后矩阵
    double Inversion[N][N];//逆矩阵
    double l[N][N], l_1[N][N]; //LUP分解的L矩阵以及L的逆矩阵
    double u[N][N], u_1[N][N]; //LUP分解的U矩阵以及U的逆矩阵
    double p[N][N];//LUP分解的P矩阵
    double det;//行列式
};

#endif // WIDGET_MATRIX
