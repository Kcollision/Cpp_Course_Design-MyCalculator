#-------------------------------------------------
#
# Project created by QtCreator 2023-04-28T23:31:00
#
#-------------------------------------------------

QT       += core gui
RC_ICONS= My_calculator.ico
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport
#QCustomPlot

TARGET = MyCalculator
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    expression_calc.cpp \
    widget_calc.cpp \
    ../qcustomplot/qcustomplot.cpp \
    widget_draw.cpp \
    widget_matrix.cpp

HEADERS += \
        mainwindow.h \
    expression_calc.h \
    widget_calc.h \
    ../qcustomplot/qcustomplot.h \
    widget_draw.h \
    widget_matrix.h

FORMS += \
        mainwindow.ui \
    widget_calc.ui \
    widget_draw.ui \
    widget_matrix.ui
