#-------------------------------------------------
#
# Project created by QtCreator 2018-05-31T00:49:09
#
#-------------------------------------------------

QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BreakersGUI
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        mainwindow.cpp \
    main.cpp \
    QSFMLCanvas.cpp \
    CustomSFMLCanvas.cpp

HEADERS += \
        mainwindow.h \
    QSFMLCanvas.h \
    CustomSFMLCanvas.h

FORMS += \
        mainwindow.ui

LIBS += -LC:/Sfml/lib

CONFIG(release, debug|release): LIBS += -lsfml-system -lsfml-window -lsfml-audio -lsfml-graphics -lsfml-main -lsfml-network
CONFIG(debug, debug|release): LIBS += -lsfml-audio-d -lsfml-graphics-d -lsfml-main-d -lsfml-network-d -lsfml-window-d -lsfml-system-d

INCLUDEPATH += C:/Sfml/include
DEPENDPATH += C:/Sfml/include
