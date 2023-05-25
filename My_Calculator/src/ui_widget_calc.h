/********************************************************************************
** Form generated from reading UI file 'widget_calc.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_CALC_H
#define UI_WIDGET_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget_calc
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_2;
    QPushButton *BtnLeftParenthesis;
    QPushButton *BtnIndex;
    QPushButton *BtnTan;
    QPushButton *BtnSemicolon;
    QPushButton *BtnRoot;
    QPushButton *BtnLn;
    QPushButton *BtnLog;
    QPushButton *BtnSin;
    QPushButton *BtnE;
    QPushButton *BtnRightParenthesis;
    QPushButton *BtnCos;
    QPushButton *BtnSquare;
    QPushButton *BtnPai;
    QGridLayout *gridLayout_4;
    QPushButton *BtnClear;
    QPushButton *BtnDividing;
    QPushButton *BtnMultiply;
    QPushButton *BtnDelete;
    QPushButton *Btn7;
    QPushButton *Btn8;
    QPushButton *Btn9;
    QPushButton *BtnPlus;
    QPushButton *Btn4;
    QPushButton *Btn5;
    QPushButton *Btn6;
    QPushButton *BtnSubtracts;
    QGridLayout *gridLayout_3;
    QPushButton *Btn1;
    QPushButton *BtnPercent;
    QPushButton *BtnPoint;
    QPushButton *Btn0;
    QPushButton *Btn2;
    QPushButton *BtnEqual;
    QPushButton *Btn3;

    void setupUi(QWidget *Widget_calc)
    {
        if (Widget_calc->objectName().isEmpty())
            Widget_calc->setObjectName(QStringLiteral("Widget_calc"));
        Widget_calc->resize(1053, 500);
        verticalLayout = new QVBoxLayout(Widget_calc);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(Widget_calc);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMaximumSize(QSize(16777215, 80));
        textEdit->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(16);
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 16pt \"Consolas\";\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #00aaff);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #008acf);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        BtnLeftParenthesis = new QPushButton(groupBox_2);
        BtnLeftParenthesis->setObjectName(QStringLiteral("BtnLeftParenthesis"));
        sizePolicy.setHeightForWidth(BtnLeftParenthesis->sizePolicy().hasHeightForWidth());
        BtnLeftParenthesis->setSizePolicy(sizePolicy);
        BtnLeftParenthesis->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 16pt \"Consolas\";\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #00aaff);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #008acf);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));

        gridLayout_2->addWidget(BtnLeftParenthesis, 0, 0, 1, 1);

        BtnIndex = new QPushButton(groupBox_2);
        BtnIndex->setObjectName(QStringLiteral("BtnIndex"));
        sizePolicy.setHeightForWidth(BtnIndex->sizePolicy().hasHeightForWidth());
        BtnIndex->setSizePolicy(sizePolicy);
        BtnIndex->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 16pt \"Consolas\";\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #00aaff);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #008acf);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));

        gridLayout_2->addWidget(BtnIndex, 1, 1, 1, 1);

        BtnTan = new QPushButton(groupBox_2);
        BtnTan->setObjectName(QStringLiteral("BtnTan"));
        sizePolicy.setHeightForWidth(BtnTan->sizePolicy().hasHeightForWidth());
        BtnTan->setSizePolicy(sizePolicy);
        BtnTan->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 16pt \"Consolas\";\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #00aaff);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #008acf);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));

        gridLayout_2->addWidget(BtnTan, 3, 2, 1, 1);

        BtnSemicolon = new QPushButton(groupBox_2);
        BtnSemicolon->setObjectName(QStringLiteral("BtnSemicolon"));
        sizePolicy.setHeightForWidth(BtnSemicolon->sizePolicy().hasHeightForWidth());
        BtnSemicolon->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Consolas"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        BtnSemicolon->setFont(font1);
        BtnSemicolon->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 16pt \"Consolas\";\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #00aaff);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #008acf);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));

        gridLayout_2->addWidget(BtnSemicolon, 0, 2, 1, 1);

        BtnRoot = new QPushButton(groupBox_2);
        BtnRoot->setObjectName(QStringLiteral("BtnRoot"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BtnRoot->sizePolicy().hasHeightForWidth());
        BtnRoot->setSizePolicy(sizePolicy1);
        BtnRoot->setFont(font1);
        BtnRoot->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 16pt \"Consolas\";\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #00aaff);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #008acf);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));

        gridLayout_2->addWidget(BtnRoot, 1, 2, 1, 1);

        BtnLn = new QPushButton(groupBox_2);
        BtnLn->setObjectName(QStringLiteral("BtnLn"));
        sizePolicy.setHeightForWidth(BtnLn->sizePolicy().hasHeightForWidth());
        BtnLn->setSizePolicy(sizePolicy);
        BtnLn->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 16pt \"Consolas\";\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #00aaff);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #008acf);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));

        gridLayout_2->addWidget(BtnLn, 2, 1, 1, 1);

        BtnLog = new QPushButton(groupBox_2);
        BtnLog->setObjectName(QStringLiteral("BtnLog"));
        sizePolicy.setHeightForWidth(BtnLog->sizePolicy().hasHeightForWidth());
        BtnLog->setSizePolicy(sizePolicy);
        BtnLog->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 16pt \"Consolas\";\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #00aaff);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #008acf);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));

        gridLayout_2->addWidget(BtnLog, 2, 2, 1, 1);

        BtnSin = new QPushButton(groupBox_2);
        BtnSin->setObjectName(QStringLiteral("BtnSin"));
        sizePolicy.setHeightForWidth(BtnSin->sizePolicy().hasHeightForWidth());
        BtnSin->setSizePolicy(sizePolicy);
        BtnSin->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 16pt \"Consolas\";\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #00aaff);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #008acf);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));

        gridLayout_2->addWidget(BtnSin, 3, 0, 1, 1);

        BtnE = new QPushButton(groupBox_2);
        BtnE->setObjectName(QStringLiteral("BtnE"));
        sizePolicy.setHeightForWidth(BtnE->sizePolicy().hasHeightForWidth());
        BtnE->setSizePolicy(sizePolicy);
        BtnE->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 16pt \"Consolas\";\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #00aaff);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #008acf);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));

        gridLayout_2->addWidget(BtnE, 2, 0, 1, 1);

        BtnRightParenthesis = new QPushButton(groupBox_2);
        BtnRightParenthesis->setObjectName(QStringLiteral("BtnRightParenthesis"));
        sizePolicy.setHeightForWidth(BtnRightParenthesis->sizePolicy().hasHeightForWidth());
        BtnRightParenthesis->setSizePolicy(sizePolicy);
        BtnRightParenthesis->setFont(font1);
        BtnRightParenthesis->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 16pt \"Consolas\";\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #00aaff);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #008acf);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));

        gridLayout_2->addWidget(BtnRightParenthesis, 0, 1, 1, 1);

        BtnCos = new QPushButton(groupBox_2);
        BtnCos->setObjectName(QStringLiteral("BtnCos"));
        sizePolicy.setHeightForWidth(BtnCos->sizePolicy().hasHeightForWidth());
        BtnCos->setSizePolicy(sizePolicy);
        BtnCos->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 16pt \"Consolas\";\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #00aaff);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #008acf);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));

        gridLayout_2->addWidget(BtnCos, 3, 1, 1, 1);

        BtnSquare = new QPushButton(groupBox_2);
        BtnSquare->setObjectName(QStringLiteral("BtnSquare"));
        sizePolicy.setHeightForWidth(BtnSquare->sizePolicy().hasHeightForWidth());
        BtnSquare->setSizePolicy(sizePolicy);
        BtnSquare->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 16pt \"Consolas\";\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #00aaff);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #008acf);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));

        gridLayout_2->addWidget(BtnSquare, 1, 0, 1, 1);

        BtnPai = new QPushButton(groupBox_2);
        BtnPai->setObjectName(QStringLiteral("BtnPai"));
        sizePolicy.setHeightForWidth(BtnPai->sizePolicy().hasHeightForWidth());
        BtnPai->setSizePolicy(sizePolicy);
        BtnPai->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 16pt \"Consolas\";\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #00aaff);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #008acf);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));

        gridLayout_2->addWidget(BtnPai, 4, 0, 1, 3);


        gridLayout_5->addLayout(gridLayout_2, 0, 0, 2, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        BtnClear = new QPushButton(groupBox_2);
        BtnClear->setObjectName(QStringLiteral("BtnClear"));
        sizePolicy.setHeightForWidth(BtnClear->sizePolicy().hasHeightForWidth());
        BtnClear->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(BtnClear, 0, 0, 1, 1);

        BtnDividing = new QPushButton(groupBox_2);
        BtnDividing->setObjectName(QStringLiteral("BtnDividing"));
        sizePolicy.setHeightForWidth(BtnDividing->sizePolicy().hasHeightForWidth());
        BtnDividing->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(BtnDividing, 0, 1, 1, 1);

        BtnMultiply = new QPushButton(groupBox_2);
        BtnMultiply->setObjectName(QStringLiteral("BtnMultiply"));
        sizePolicy.setHeightForWidth(BtnMultiply->sizePolicy().hasHeightForWidth());
        BtnMultiply->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(BtnMultiply, 0, 2, 1, 1);

        BtnDelete = new QPushButton(groupBox_2);
        BtnDelete->setObjectName(QStringLiteral("BtnDelete"));
        sizePolicy.setHeightForWidth(BtnDelete->sizePolicy().hasHeightForWidth());
        BtnDelete->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(BtnDelete, 0, 3, 1, 1);

        Btn7 = new QPushButton(groupBox_2);
        Btn7->setObjectName(QStringLiteral("Btn7"));
        sizePolicy.setHeightForWidth(Btn7->sizePolicy().hasHeightForWidth());
        Btn7->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(Btn7, 1, 0, 1, 1);

        Btn8 = new QPushButton(groupBox_2);
        Btn8->setObjectName(QStringLiteral("Btn8"));
        sizePolicy.setHeightForWidth(Btn8->sizePolicy().hasHeightForWidth());
        Btn8->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(Btn8, 1, 1, 1, 1);

        Btn9 = new QPushButton(groupBox_2);
        Btn9->setObjectName(QStringLiteral("Btn9"));
        sizePolicy.setHeightForWidth(Btn9->sizePolicy().hasHeightForWidth());
        Btn9->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(Btn9, 1, 2, 1, 1);

        BtnPlus = new QPushButton(groupBox_2);
        BtnPlus->setObjectName(QStringLiteral("BtnPlus"));
        sizePolicy.setHeightForWidth(BtnPlus->sizePolicy().hasHeightForWidth());
        BtnPlus->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(BtnPlus, 1, 3, 1, 1);

        Btn4 = new QPushButton(groupBox_2);
        Btn4->setObjectName(QStringLiteral("Btn4"));
        sizePolicy.setHeightForWidth(Btn4->sizePolicy().hasHeightForWidth());
        Btn4->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(Btn4, 2, 0, 1, 1);

        Btn5 = new QPushButton(groupBox_2);
        Btn5->setObjectName(QStringLiteral("Btn5"));
        sizePolicy.setHeightForWidth(Btn5->sizePolicy().hasHeightForWidth());
        Btn5->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(Btn5, 2, 1, 1, 1);

        Btn6 = new QPushButton(groupBox_2);
        Btn6->setObjectName(QStringLiteral("Btn6"));
        sizePolicy.setHeightForWidth(Btn6->sizePolicy().hasHeightForWidth());
        Btn6->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(Btn6, 2, 2, 1, 1);

        BtnSubtracts = new QPushButton(groupBox_2);
        BtnSubtracts->setObjectName(QStringLiteral("BtnSubtracts"));
        sizePolicy.setHeightForWidth(BtnSubtracts->sizePolicy().hasHeightForWidth());
        BtnSubtracts->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(BtnSubtracts, 2, 3, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        Btn1 = new QPushButton(groupBox_2);
        Btn1->setObjectName(QStringLiteral("Btn1"));
        sizePolicy.setHeightForWidth(Btn1->sizePolicy().hasHeightForWidth());
        Btn1->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(Btn1, 0, 0, 1, 1);

        BtnPercent = new QPushButton(groupBox_2);
        BtnPercent->setObjectName(QStringLiteral("BtnPercent"));
        sizePolicy.setHeightForWidth(BtnPercent->sizePolicy().hasHeightForWidth());
        BtnPercent->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(BtnPercent, 1, 2, 1, 1);

        BtnPoint = new QPushButton(groupBox_2);
        BtnPoint->setObjectName(QStringLiteral("BtnPoint"));
        sizePolicy.setHeightForWidth(BtnPoint->sizePolicy().hasHeightForWidth());
        BtnPoint->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(BtnPoint, 1, 0, 1, 1);

        Btn0 = new QPushButton(groupBox_2);
        Btn0->setObjectName(QStringLiteral("Btn0"));
        sizePolicy.setHeightForWidth(Btn0->sizePolicy().hasHeightForWidth());
        Btn0->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(Btn0, 1, 1, 1, 1);

        Btn2 = new QPushButton(groupBox_2);
        Btn2->setObjectName(QStringLiteral("Btn2"));
        sizePolicy.setHeightForWidth(Btn2->sizePolicy().hasHeightForWidth());
        Btn2->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(Btn2, 0, 1, 1, 1);

        BtnEqual = new QPushButton(groupBox_2);
        BtnEqual->setObjectName(QStringLiteral("BtnEqual"));
        sizePolicy.setHeightForWidth(BtnEqual->sizePolicy().hasHeightForWidth());
        BtnEqual->setSizePolicy(sizePolicy);
        BtnEqual->setStyleSheet(QLatin1String("\n"
"font: 16pt \"Consolas\";"));

        gridLayout_3->addWidget(BtnEqual, 0, 3, 2, 1);

        Btn3 = new QPushButton(groupBox_2);
        Btn3->setObjectName(QStringLiteral("Btn3"));
        sizePolicy.setHeightForWidth(Btn3->sizePolicy().hasHeightForWidth());
        Btn3->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(Btn3, 0, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);


        retranslateUi(Widget_calc);

        QMetaObject::connectSlotsByName(Widget_calc);
    } // setupUi

    void retranslateUi(QWidget *Widget_calc)
    {
        Widget_calc->setWindowTitle(QApplication::translate("Widget_calc", "Widget", Q_NULLPTR));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        BtnLeftParenthesis->setText(QApplication::translate("Widget_calc", "\357\274\210", Q_NULLPTR));
        BtnIndex->setText(QApplication::translate("Widget_calc", "x^y", Q_NULLPTR));
        BtnTan->setText(QApplication::translate("Widget_calc", "tan", Q_NULLPTR));
        BtnSemicolon->setText(QApplication::translate("Widget_calc", "1/x", Q_NULLPTR));
        BtnRoot->setText(QApplication::translate("Widget_calc", "\342\210\232", Q_NULLPTR));
        BtnLn->setText(QApplication::translate("Widget_calc", "ln", Q_NULLPTR));
        BtnLog->setText(QApplication::translate("Widget_calc", "log", Q_NULLPTR));
        BtnSin->setText(QApplication::translate("Widget_calc", "sin", Q_NULLPTR));
        BtnE->setText(QApplication::translate("Widget_calc", "e", Q_NULLPTR));
        BtnRightParenthesis->setText(QApplication::translate("Widget_calc", "\357\274\211", Q_NULLPTR));
        BtnCos->setText(QApplication::translate("Widget_calc", "cos", Q_NULLPTR));
        BtnSquare->setText(QApplication::translate("Widget_calc", "x^2", Q_NULLPTR));
        BtnPai->setText(QApplication::translate("Widget_calc", "\317\200", Q_NULLPTR));
        BtnClear->setText(QApplication::translate("Widget_calc", "C", Q_NULLPTR));
        BtnDividing->setText(QApplication::translate("Widget_calc", "\303\267", Q_NULLPTR));
        BtnMultiply->setText(QApplication::translate("Widget_calc", "*", Q_NULLPTR));
        BtnDelete->setText(QApplication::translate("Widget_calc", "<-", Q_NULLPTR));
        Btn7->setText(QApplication::translate("Widget_calc", "7", Q_NULLPTR));
        Btn8->setText(QApplication::translate("Widget_calc", "8", Q_NULLPTR));
        Btn9->setText(QApplication::translate("Widget_calc", "9", Q_NULLPTR));
        BtnPlus->setText(QApplication::translate("Widget_calc", "+", Q_NULLPTR));
        Btn4->setText(QApplication::translate("Widget_calc", "4", Q_NULLPTR));
        Btn5->setText(QApplication::translate("Widget_calc", "5", Q_NULLPTR));
        Btn6->setText(QApplication::translate("Widget_calc", "6", Q_NULLPTR));
        BtnSubtracts->setText(QApplication::translate("Widget_calc", "-", Q_NULLPTR));
        Btn1->setText(QApplication::translate("Widget_calc", "1", Q_NULLPTR));
        BtnPercent->setText(QApplication::translate("Widget_calc", "%", Q_NULLPTR));
        BtnPoint->setText(QApplication::translate("Widget_calc", ".", Q_NULLPTR));
        Btn0->setText(QApplication::translate("Widget_calc", "0", Q_NULLPTR));
        Btn2->setText(QApplication::translate("Widget_calc", "2", Q_NULLPTR));
        BtnEqual->setText(QApplication::translate("Widget_calc", "=", Q_NULLPTR));
        Btn3->setText(QApplication::translate("Widget_calc", "3", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget_calc: public Ui_Widget_calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_CALC_H
