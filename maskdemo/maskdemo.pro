#-------------------------------------------------
#
# Project created by QtCreator 2016-12-29T08:41:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = maskdemo
TEMPLATE = app

SOURCES += main.cpp\
        widget.cpp \
    frm1.cpp \
    frm2.cpp \
    maskwidget.cpp \
    screenwidget.cpp \
    appinit.cpp \
    frmmenu.cpp

HEADERS  += widget.h \
    frm1.h \
    frm2.h \
    maskwidget.h \
    screenwidget.h \
    appinit.h \
    frmmenu.h

FORMS    += widget.ui \
    frm1.ui \
    frm2.ui \
    frmmenu.ui

RESOURCES += \
    main.qrc
