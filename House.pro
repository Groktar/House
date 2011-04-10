CONFIG += qt debug -Wall -Werror

QT += core gui

TEMPLATE = app

TARGET = House

#Tests section.
 INCLUDEPATH += tests/include
 VPATH += tests/include tests/src

 Test_Headers += sandbox.h dicetest.h
 Test_Sources += sandbox.cpp dicetest.cpp
#Test section ends.

INCLUDEPATH += include
VPATH += include src

HEADERS += mainwindow.h dice.h $$Test_Headers
SOURCES += main.cpp mainwindow.cpp dice.cpp $$Test_Sources

