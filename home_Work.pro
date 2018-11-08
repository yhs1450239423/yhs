#-------------------------------------------------
#
# Project created by QtCreator 2018-09-20T14:32:43
#
#-------------------------------------------------

QT       += core gui multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = home_Work
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    chuangkou.cpp \
    ditu.cpp

HEADERS  += mainwindow.h \
    chuangkou.h \
    ditu.h \
    count.h

FORMS    += mainwindow.ui \
    ditu.ui

RESOURCES += \
    image.qrc
