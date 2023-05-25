#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(1213, 720);
    this->setWindowTitle("My calculator");
    iniUI();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete widget_c;
    delete widget_d;
    delete widget_l;
    delete pageWidget_0;
    delete pageWidget_1;
    delete pageWidget_2;
}


void MainWindow::iniUI()
{
    QTabWidget *tabWidget = new QTabWidget;

    tabWidget->setTabPosition(QTabWidget::North);

    pageWidget_0 = new QWidget;
    pageWidget_1 = new QWidget;
    pageWidget_2 = new QWidget;

    tabWidget->addTab(pageWidget_0, "科学计算器");
    tabWidget->addTab(pageWidget_1, "绘图计算器");
    tabWidget->addTab(pageWidget_2, "矩阵计算器");
    QFont font("Microsoft YaHei UI", 12);
    tabWidget->setFont(font);
    this->setCentralWidget(tabWidget);

    widget_c = new Widget_calc(pageWidget_0);
    widget_d = new Widget_draw(pageWidget_1);
    widget_l = new Widget_matrix(pageWidget_2);
}
