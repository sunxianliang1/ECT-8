#-------------------------------------------------
#
# Project created by QtCreator 2018-02-27T19:08:51
#
#-------------------------------------------------
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = ECT
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot.cpp \
    compute.cpp \
    cuicapcolu.cpp \
    cuiconline.cpp \
    cuiconrect.cpp \
    cuiconcir.cpp \
    communication.cpp \
    Qled.cpp \
    usbthread.cpp

HEADERS  += mainwindow.h \
    qcustomplot.h \
    compute.h \
    cuicapcolu.h \
    cuiconline.h \
    cuiconrect.h \
    cuiconcir.h \
    communication.h \
    Qled.h \
    usbthread.h \
    cyapi/CyAPI.h

FORMS    += mainwindow.ui \
    capcolu.ui \
    conline.ui \
    conrect.ui \
    concir.ui \
    communication.ui

RESOURCES += \
    icon.qrc

DISTFILES +=
LIBS += -L$$PWD/cyapi/ -lCyAPI
INCLUDEPATH += $$PWD/cyapi
DEPENDPATH += $$PWD/cyapi
