#-------------------------------------------------
#
# Project created by QtCreator 2014-05-07T19:31:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = graphics1
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    qpaintwidget.cpp \
    car.cpp \
    map.cpp

HEADERS  += widget.h \
    qpaintwidget.h \
    car.h \
    map.h

FORMS    += widget.ui
