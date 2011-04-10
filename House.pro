CONFIG += qt debug -Wall -Werror

QT += core gui

TEMPLATE = app

TARGET = House

INCLUDEPATH += include
VPATH += include src

HEADERS += mainwindow.h sandbox.h
SOURCES += main.cpp mainwindow.cpp sandbox.cpp
