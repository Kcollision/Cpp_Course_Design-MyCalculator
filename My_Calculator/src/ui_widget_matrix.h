/********************************************************************************
** Form generated from reading UI file 'widget_matrix.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_MATRIX_H
#define UI_WIDGET_MATRIX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget_matrix
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *textInput;
    QPlainTextEdit *textOutput;
    QLabel *labelInput;
    QLabel *labelOutput;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnSteppedType;
    QPushButton *btnDet;
    QPushButton *btnInversion;
    QPushButton *btnClosure;
    QPushButton *btnClear;
    QTextEdit *textEdit;

    void setupUi(QWidget *Widget_matrix)
    {
        if (Widget_matrix->objectName().isEmpty())
            Widget_matrix->setObjectName(QStringLiteral("Widget_matrix"));
        Widget_matrix->resize(1184, 616);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget_matrix->sizePolicy().hasHeightForWidth());
        Widget_matrix->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(12);
        Widget_matrix->setFont(font);
        Widget_matrix->setLayoutDirection(Qt::LeftToRight);
        horizontalLayoutWidget = new QWidget(Widget_matrix);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(200, 50, 981, 561));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        textInput = new QPlainTextEdit(horizontalLayoutWidget);
        textInput->setObjectName(QStringLiteral("textInput"));
        textInput->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(textInput);

        textOutput = new QPlainTextEdit(horizontalLayoutWidget);
        textOutput->setObjectName(QStringLiteral("textOutput"));
        textOutput->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(textOutput);

        labelInput = new QLabel(Widget_matrix);
        labelInput->setObjectName(QStringLiteral("labelInput"));
        labelInput->setGeometry(QRect(210, 10, 61, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font1.setPointSize(12);
        labelInput->setFont(font1);
        labelOutput = new QLabel(Widget_matrix);
        labelOutput->setObjectName(QStringLiteral("labelOutput"));
        labelOutput->setGeometry(QRect(710, 10, 61, 41));
        labelOutput->setFont(font1);
        verticalLayoutWidget = new QWidget(Widget_matrix);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 50, 161, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnSteppedType = new QPushButton(verticalLayoutWidget);
        btnSteppedType->setObjectName(QStringLiteral("btnSteppedType"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnSteppedType->sizePolicy().hasHeightForWidth());
        btnSteppedType->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(3);
        btnSteppedType->setFont(font2);
        btnSteppedType->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 25 12pt \"Microsoft YaHei UI Light\";\n"
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

        verticalLayout->addWidget(btnSteppedType);

        btnDet = new QPushButton(verticalLayoutWidget);
        btnDet->setObjectName(QStringLiteral("btnDet"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnDet->sizePolicy().hasHeightForWidth());
        btnDet->setSizePolicy(sizePolicy2);
        btnDet->setFont(font2);
        btnDet->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 25 12pt \"Microsoft YaHei UI Light\";\n"
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

        verticalLayout->addWidget(btnDet);

        btnInversion = new QPushButton(verticalLayoutWidget);
        btnInversion->setObjectName(QStringLiteral("btnInversion"));
        sizePolicy1.setHeightForWidth(btnInversion->sizePolicy().hasHeightForWidth());
        btnInversion->setSizePolicy(sizePolicy1);
        btnInversion->setFont(font2);
        btnInversion->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 25 12pt \"Microsoft YaHei UI Light\";\n"
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

        verticalLayout->addWidget(btnInversion);

        btnClosure = new QPushButton(verticalLayoutWidget);
        btnClosure->setObjectName(QStringLiteral("btnClosure"));
        sizePolicy2.setHeightForWidth(btnClosure->sizePolicy().hasHeightForWidth());
        btnClosure->setSizePolicy(sizePolicy2);
        btnClosure->setFont(font2);
        btnClosure->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 25 12pt \"Microsoft YaHei UI Light\";\n"
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

        verticalLayout->addWidget(btnClosure);

        btnClear = new QPushButton(verticalLayoutWidget);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        sizePolicy2.setHeightForWidth(btnClear->sizePolicy().hasHeightForWidth());
        btnClear->setSizePolicy(sizePolicy2);
        btnClear->setFont(font2);
        btnClear->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 25 12pt \"Microsoft YaHei UI Light\";\n"
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

        verticalLayout->addWidget(btnClear);

        textEdit = new QTextEdit(Widget_matrix);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 380, 191, 231));
        QFont font3;
        font3.setFamily(QStringLiteral("Microsoft YaHei UI"));
        textEdit->setFont(font3);
        textEdit->setReadOnly(true);

        retranslateUi(Widget_matrix);

        QMetaObject::connectSlotsByName(Widget_matrix);
    } // setupUi

    void retranslateUi(QWidget *Widget_matrix)
    {
        Widget_matrix->setWindowTitle(QApplication::translate("Widget_matrix", "Form", Q_NULLPTR));
        labelInput->setText(QApplication::translate("Widget_matrix", "\350\276\223\345\205\245:", Q_NULLPTR));
        labelOutput->setText(QApplication::translate("Widget_matrix", "\350\276\223\345\207\272:", Q_NULLPTR));
        btnSteppedType->setText(QApplication::translate("Widget_matrix", "\345\214\226\344\270\272\351\230\266\346\242\257\345\236\213\347\237\251\351\230\265", Q_NULLPTR));
        btnDet->setText(QApplication::translate("Widget_matrix", "\350\256\241\347\256\227\350\241\214\345\210\227\345\274\217", Q_NULLPTR));
        btnInversion->setText(QApplication::translate("Widget_matrix", "\346\261\202\351\200\206\347\237\251\351\230\265", Q_NULLPTR));
        btnClosure->setText(QApplication::translate("Widget_matrix", "\346\261\202\345\205\263\347\263\273\351\227\255\345\214\205", Q_NULLPTR));
        btnClear->setText(QApplication::translate("Widget_matrix", "\346\270\205\351\231\244\346\225\260\346\215\256", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("Widget_matrix", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas';\">\350\257\267\346\214\211\344\273\245\344\270\213\346\240\274\345\274\217\350\276\223\345\205\245\347\237\251\351\230\265:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas';\">n m</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas';\">a11 a12 ... a1m</span></p>\n"
"<p sty"
                        "le=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas';\">a21 a22 ... a2m</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas';\">.    .        .</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas';\">.    .        .</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas';\">.    .        .</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas';\">an1 an2 ... anm</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget_matrix: public Ui_Widget_matrix {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_MATRIX_H
