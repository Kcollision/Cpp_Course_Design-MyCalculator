#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <widget_calc.h>
#include <widget_matrix.h>
#include <widget_draw.h>
namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void iniUI();//初始化界面

    Widget_calc *widget_c;//科学计算器界面
    Widget_draw *widget_d;//绘图计算器界面
    Widget_matrix *widget_l;//矩阵计算器界面

    QWidget *pageWidget_0 ;//科学计算器界面的父部件
    QWidget *pageWidget_1 ;//绘图计算器界面的父部件
    QWidget *pageWidget_2 ;//矩阵计算器界面的父部件
};

#endif // MAINWINDOW_H
