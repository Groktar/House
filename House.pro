CONFIG += qt debug -Wall -Werror

QT += core gui

TEMPLATE = app

TARGET = House

INCLUDEPATH += include
VPATH += include src

HEADERS += mainwindow.h
SOURCES += main.cpp mainwindow.cpp
