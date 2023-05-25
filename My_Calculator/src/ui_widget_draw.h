/********************************************************************************
** Form generated from reading UI file 'widget_draw.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_DRAW_H
#define UI_WIDGET_DRAW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget_draw
{
public:
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btnX;
    QPushButton *btnDividing;
    QPushButton *btnSin;
    QPushButton *btnClear;
    QPushButton *btn7;
    QPushButton *btnRoot;
    QPushButton *btnIndex;
    QPushButton *btnDelete;
    QPushButton *btnPercent;
    QPushButton *btnSquare;
    QPushButton *btnSemicolon;
    QPushButton *btnY;
    QPushButton *btn1;
    QPushButton *btnMinus;
    QPushButton *btnPai;
    QPushButton *btnPlus;
    QPushButton *btn9;
    QPushButton *btn4;
    QPushButton *btnMultiply;
    QPushButton *btn5;
    QPushButton *btn2;
    QPushButton *btnTan;
    QPushButton *btn6;
    QPushButton *btnE;
    QPushButton *btn3;
    QPushButton *btnCos;
    QPushButton *btn8;
    QPushButton *btnLog;
    QPushButton *btnPoint;
    QPushButton *btnEqual;
    QPushButton *btnRightPa;
    QPushButton *btnLn;
    QPushButton *btnPlot;
    QPushButton *btnLeftPa;
    QPushButton *btn0;
    QTextEdit *textFrom;
    QTextEdit *textTo;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Widget_draw)
    {
        if (Widget_draw->objectName().isEmpty())
            Widget_draw->setObjectName(QStringLiteral("Widget_draw"));
        Widget_draw->resize(1170, 757);
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(12);
        Widget_draw->setFont(font);
        groupBox = new QGroupBox(Widget_draw);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, -10, 1121, 671));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QLatin1String("QPushButton {\n"
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
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 1101, 641));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);

        groupBox_2 = new QGroupBox(verticalLayoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setEnabled(true);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMinimumSize(QSize(0, 500));
        QFont font1;
        font1.setPointSize(14);
        groupBox_2->setFont(font1);
        gridLayoutWidget = new QWidget(groupBox_2);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 20, 1101, 441));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnX = new QPushButton(gridLayoutWidget);
        btnX->setObjectName(QStringLiteral("btnX"));
        sizePolicy.setHeightForWidth(btnX->sizePolicy().hasHeightForWidth());
        btnX->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnX, 1, 0, 1, 1);

        btnDividing = new QPushButton(gridLayoutWidget);
        btnDividing->setObjectName(QStringLiteral("btnDividing"));
        sizePolicy.setHeightForWidth(btnDividing->sizePolicy().hasHeightForWidth());
        btnDividing->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnDividing, 1, 4, 1, 1);

        btnSin = new QPushButton(gridLayoutWidget);
        btnSin->setObjectName(QStringLiteral("btnSin"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnSin->sizePolicy().hasHeightForWidth());
        btnSin->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnSin, 2, 0, 1, 1);

        btnClear = new QPushButton(gridLayoutWidget);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        sizePolicy.setHeightForWidth(btnClear->sizePolicy().hasHeightForWidth());
        btnClear->setSizePolicy(sizePolicy);
        btnClear->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(btnClear, 1, 1, 1, 1);

        btn7 = new QPushButton(gridLayoutWidget);
        btn7->setObjectName(QStringLiteral("btn7"));
        sizePolicy.setHeightForWidth(btn7->sizePolicy().hasHeightForWidth());
        btn7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn7, 2, 1, 1, 1);

        btnRoot = new QPushButton(gridLayoutWidget);
        btnRoot->setObjectName(QStringLiteral("btnRoot"));
        sizePolicy.setHeightForWidth(btnRoot->sizePolicy().hasHeightForWidth());
        btnRoot->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QStringLiteral("Consolas"));
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        btnRoot->setFont(font2);

        gridLayout->addWidget(btnRoot, 0, 2, 1, 1);

        btnIndex = new QPushButton(gridLayoutWidget);
        btnIndex->setObjectName(QStringLiteral("btnIndex"));
        sizePolicy.setHeightForWidth(btnIndex->sizePolicy().hasHeightForWidth());
        btnIndex->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnIndex, 0, 4, 1, 1);

        btnDelete = new QPushButton(gridLayoutWidget);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        sizePolicy.setHeightForWidth(btnDelete->sizePolicy().hasHeightForWidth());
        btnDelete->setSizePolicy(sizePolicy);
        btnDelete->setFont(font2);
        btnDelete->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(btnDelete, 1, 2, 1, 1);

        btnPercent = new QPushButton(gridLayoutWidget);
        btnPercent->setObjectName(QStringLiteral("btnPercent"));
        sizePolicy.setHeightForWidth(btnPercent->sizePolicy().hasHeightForWidth());
        btnPercent->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnPercent, 1, 3, 1, 1);

        btnSquare = new QPushButton(gridLayoutWidget);
        btnSquare->setObjectName(QStringLiteral("btnSquare"));
        sizePolicy.setHeightForWidth(btnSquare->sizePolicy().hasHeightForWidth());
        btnSquare->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnSquare, 0, 3, 1, 1);

        btnSemicolon = new QPushButton(gridLayoutWidget);
        btnSemicolon->setObjectName(QStringLiteral("btnSemicolon"));
        sizePolicy.setHeightForWidth(btnSemicolon->sizePolicy().hasHeightForWidth());
        btnSemicolon->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnSemicolon, 0, 1, 1, 1);

        btnY = new QPushButton(gridLayoutWidget);
        btnY->setObjectName(QStringLiteral("btnY"));
        sizePolicy.setHeightForWidth(btnY->sizePolicy().hasHeightForWidth());
        btnY->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnY, 0, 0, 1, 1);

        btn1 = new QPushButton(gridLayoutWidget);
        btn1->setObjectName(QStringLiteral("btn1"));
        sizePolicy.setHeightForWidth(btn1->sizePolicy().hasHeightForWidth());
        btn1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn1, 4, 1, 1, 1);

        btnMinus = new QPushButton(gridLayoutWidget);
        btnMinus->setObjectName(QStringLiteral("btnMinus"));
        sizePolicy.setHeightForWidth(btnMinus->sizePolicy().hasHeightForWidth());
        btnMinus->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnMinus, 3, 4, 1, 1);

        btnPai = new QPushButton(gridLayoutWidget);
        btnPai->setObjectName(QStringLiteral("btnPai"));
        sizePolicy.setHeightForWidth(btnPai->sizePolicy().hasHeightForWidth());
        btnPai->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnPai, 5, 0, 1, 1);

        btnPlus = new QPushButton(gridLayoutWidget);
        btnPlus->setObjectName(QStringLiteral("btnPlus"));
        sizePolicy.setHeightForWidth(btnPlus->sizePolicy().hasHeightForWidth());
        btnPlus->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnPlus, 4, 4, 1, 1);

        btn9 = new QPushButton(gridLayoutWidget);
        btn9->setObjectName(QStringLiteral("btn9"));
        sizePolicy.setHeightForWidth(btn9->sizePolicy().hasHeightForWidth());
        btn9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn9, 2, 3, 1, 1);

        btn4 = new QPushButton(gridLayoutWidget);
        btn4->setObjectName(QStringLiteral("btn4"));
        sizePolicy.setHeightForWidth(btn4->sizePolicy().hasHeightForWidth());
        btn4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn4, 3, 1, 1, 1);

        btnMultiply = new QPushButton(gridLayoutWidget);
        btnMultiply->setObjectName(QStringLiteral("btnMultiply"));
        sizePolicy.setHeightForWidth(btnMultiply->sizePolicy().hasHeightForWidth());
        btnMultiply->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnMultiply, 2, 4, 1, 1);

        btn5 = new QPushButton(gridLayoutWidget);
        btn5->setObjectName(QStringLiteral("btn5"));
        sizePolicy.setHeightForWidth(btn5->sizePolicy().hasHeightForWidth());
        btn5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn5, 3, 2, 1, 1);

        btn2 = new QPushButton(gridLayoutWidget);
        btn2->setObjectName(QStringLiteral("btn2"));
        sizePolicy.setHeightForWidth(btn2->sizePolicy().hasHeightForWidth());
        btn2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn2, 4, 2, 1, 1);

        btnTan = new QPushButton(gridLayoutWidget);
        btnTan->setObjectName(QStringLiteral("btnTan"));
        sizePolicy.setHeightForWidth(btnTan->sizePolicy().hasHeightForWidth());
        btnTan->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnTan, 4, 0, 1, 1);

        btn6 = new QPushButton(gridLayoutWidget);
        btn6->setObjectName(QStringLiteral("btn6"));
        sizePolicy.setHeightForWidth(btn6->sizePolicy().hasHeightForWidth());
        btn6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn6, 3, 3, 1, 1);

        btnE = new QPushButton(gridLayoutWidget);
        btnE->setObjectName(QStringLiteral("btnE"));
        sizePolicy.setHeightForWidth(btnE->sizePolicy().hasHeightForWidth());
        btnE->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnE, 5, 1, 1, 1);

        btn3 = new QPushButton(gridLayoutWidget);
        btn3->setObjectName(QStringLiteral("btn3"));
        sizePolicy.setHeightForWidth(btn3->sizePolicy().hasHeightForWidth());
        btn3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn3, 4, 3, 1, 1);

        btnCos = new QPushButton(gridLayoutWidget);
        btnCos->setObjectName(QStringLiteral("btnCos"));
        sizePolicy1.setHeightForWidth(btnCos->sizePolicy().hasHeightForWidth());
        btnCos->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnCos, 3, 0, 1, 1);

        btn8 = new QPushButton(gridLayoutWidget);
        btn8->setObjectName(QStringLiteral("btn8"));
        sizePolicy.setHeightForWidth(btn8->sizePolicy().hasHeightForWidth());
        btn8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn8, 2, 2, 1, 1);

        btnLog = new QPushButton(gridLayoutWidget);
        btnLog->setObjectName(QStringLiteral("btnLog"));
        sizePolicy.setHeightForWidth(btnLog->sizePolicy().hasHeightForWidth());
        btnLog->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnLog, 6, 1, 1, 1);

        btnPoint = new QPushButton(gridLayoutWidget);
        btnPoint->setObjectName(QStringLiteral("btnPoint"));
        sizePolicy.setHeightForWidth(btnPoint->sizePolicy().hasHeightForWidth());
        btnPoint->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnPoint, 5, 3, 1, 1);

        btnEqual = new QPushButton(gridLayoutWidget);
        btnEqual->setObjectName(QStringLiteral("btnEqual"));
        sizePolicy.setHeightForWidth(btnEqual->sizePolicy().hasHeightForWidth());
        btnEqual->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnEqual, 5, 4, 1, 1);

        btnRightPa = new QPushButton(gridLayoutWidget);
        btnRightPa->setObjectName(QStringLiteral("btnRightPa"));
        sizePolicy.setHeightForWidth(btnRightPa->sizePolicy().hasHeightForWidth());
        btnRightPa->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnRightPa, 6, 3, 1, 1);

        btnLn = new QPushButton(gridLayoutWidget);
        btnLn->setObjectName(QStringLiteral("btnLn"));
        sizePolicy.setHeightForWidth(btnLn->sizePolicy().hasHeightForWidth());
        btnLn->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnLn, 6, 0, 1, 1);

        btnPlot = new QPushButton(gridLayoutWidget);
        btnPlot->setObjectName(QStringLiteral("btnPlot"));
        sizePolicy.setHeightForWidth(btnPlot->sizePolicy().hasHeightForWidth());
        btnPlot->setSizePolicy(sizePolicy);
        btnPlot->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(btnPlot, 6, 4, 1, 1);

        btnLeftPa = new QPushButton(gridLayoutWidget);
        btnLeftPa->setObjectName(QStringLiteral("btnLeftPa"));
        sizePolicy.setHeightForWidth(btnLeftPa->sizePolicy().hasHeightForWidth());
        btnLeftPa->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnLeftPa, 6, 2, 1, 1);

        btn0 = new QPushButton(gridLayoutWidget);
        btn0->setObjectName(QStringLiteral("btn0"));
        sizePolicy.setHeightForWidth(btn0->sizePolicy().hasHeightForWidth());
        btn0->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn0, 5, 2, 1, 1);

        textFrom = new QTextEdit(groupBox_2);
        textFrom->setObjectName(QStringLiteral("textFrom"));
        textFrom->setGeometry(QRect(370, 460, 151, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Consolas"));
        font3.setPointSize(10);
        textFrom->setFont(font3);
        textFrom->setStyleSheet(QStringLiteral("background-color: rgb(230, 255, 251);"));
        textTo = new QTextEdit(groupBox_2);
        textTo->setObjectName(QStringLiteral("textTo"));
        textTo->setGeometry(QRect(590, 460, 151, 31));
        textTo->setFont(font3);
        textTo->setStyleSheet(QStringLiteral("background-color: rgb(230, 255, 251);"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(520, 470, 72, 15));
        QFont font4;
        font4.setFamily(QStringLiteral("Consolas"));
        font4.setPointSize(11);
        label->setFont(font4);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 470, 121, 21));
        QFont font5;
        font5.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font5.setPointSize(10);
        label_2->setFont(font5);

        verticalLayout->addWidget(groupBox_2);


        retranslateUi(Widget_draw);

        QMetaObject::connectSlotsByName(Widget_draw);
    } // setupUi

    void retranslateUi(QWidget *Widget_draw)
    {
        Widget_draw->setWindowTitle(QApplication::translate("Widget_draw", "Form", Q_NULLPTR));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        btnX->setText(QApplication::translate("Widget_draw", "x", Q_NULLPTR));
        btnDividing->setText(QApplication::translate("Widget_draw", "\303\267", Q_NULLPTR));
        btnSin->setText(QApplication::translate("Widget_draw", "sin", Q_NULLPTR));
        btnClear->setText(QApplication::translate("Widget_draw", "clear", Q_NULLPTR));
        btn7->setText(QApplication::translate("Widget_draw", "7", Q_NULLPTR));
        btnRoot->setText(QApplication::translate("Widget_draw", "\342\210\232", Q_NULLPTR));
        btnIndex->setText(QApplication::translate("Widget_draw", "x^y", Q_NULLPTR));
        btnDelete->setText(QApplication::translate("Widget_draw", "<-", Q_NULLPTR));
        btnPercent->setText(QApplication::translate("Widget_draw", "%", Q_NULLPTR));
        btnSquare->setText(QApplication::translate("Widget_draw", "x^2", Q_NULLPTR));
        btnSemicolon->setText(QApplication::translate("Widget_draw", "1/x", Q_NULLPTR));
        btnY->setText(QApplication::translate("Widget_draw", "y", Q_NULLPTR));
        btn1->setText(QApplication::translate("Widget_draw", "1", Q_NULLPTR));
        btnMinus->setText(QApplication::translate("Widget_draw", "-", Q_NULLPTR));
        btnPai->setText(QApplication::translate("Widget_draw", "\317\200", Q_NULLPTR));
        btnPlus->setText(QApplication::translate("Widget_draw", "+", Q_NULLPTR));
        btn9->setText(QApplication::translate("Widget_draw", "9", Q_NULLPTR));
        btn4->setText(QApplication::translate("Widget_draw", "4", Q_NULLPTR));
        btnMultiply->setText(QApplication::translate("Widget_draw", "*", Q_NULLPTR));
        btn5->setText(QApplication::translate("Widget_draw", "5", Q_NULLPTR));
        btn2->setText(QApplication::translate("Widget_draw", "2", Q_NULLPTR));
        btnTan->setText(QApplication::translate("Widget_draw", "tan", Q_NULLPTR));
        btn6->setText(QApplication::translate("Widget_draw", "6", Q_NULLPTR));
        btnE->setText(QApplication::translate("Widget_draw", "e", Q_NULLPTR));
        btn3->setText(QApplication::translate("Widget_draw", "3", Q_NULLPTR));
        btnCos->setText(QApplication::translate("Widget_draw", "cos", Q_NULLPTR));
        btn8->setText(QApplication::translate("Widget_draw", "8", Q_NULLPTR));
        btnLog->setText(QApplication::translate("Widget_draw", "log", Q_NULLPTR));
        btnPoint->setText(QApplication::translate("Widget_draw", ".", Q_NULLPTR));
        btnEqual->setText(QApplication::translate("Widget_draw", "=", Q_NULLPTR));
        btnRightPa->setText(QApplication::translate("Widget_draw", ")", Q_NULLPTR));
        btnLn->setText(QApplication::translate("Widget_draw", "ln", Q_NULLPTR));
        btnPlot->setText(QApplication::translate("Widget_draw", "plot", Q_NULLPTR));
        btnLeftPa->setText(QApplication::translate("Widget_draw", "(", Q_NULLPTR));
        btn0->setText(QApplication::translate("Widget_draw", "0", Q_NULLPTR));
        label->setText(QApplication::translate("Widget_draw", "   to", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget_draw", "x\347\232\204\350\214\203\345\233\264:From", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget_draw: public Ui_Widget_draw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_DRAW_H
