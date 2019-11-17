#-------------------------------------------------
#
# Project created by QtCreator 2019-11-12T22:45:20
#
#-------------------------------------------------

QT       += core gui
CONFIG   += C++11
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = lsyChess
TEMPLATE = app


SOURCES += main.cpp\
    choose.cpp \
    global.cpp \
    board.cpp

HEADERS  += \
    choose.h \
    global.h \
    board.h

FORMS    +=

RESOURCES += \
    pic.qrc
