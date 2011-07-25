#-------------------------------------------------
#
# Project created by QtCreator 2011-07-25T19:15:59
#
#-------------------------------------------------

QT       += core gui

TARGET = test_speech

TEMPLATE = app

include(./QtSpeech.pri)

SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h \
    QtSpeech.h

FORMS    += widget.ui

