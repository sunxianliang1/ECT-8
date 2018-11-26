#-------------------------------------------------
#
# Project created by QtCreator 2018-02-27T19:08:51
#
#-------------------------------------------------

QT       += core gui
QT += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ECT
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    communication.cpp \
    Qled.cpp \
    usbthread.cpp \
    compute.cpp \
    cuicapcolu.cpp

HEADERS += \
        mainwindow.h \
    communication.h \
    cyapi/CyAPI.h \
    option.h \
    Qled.h \
    usbthread.h \
    compute.h \
    cyapi/CyAPI.h \
    cyapi/cyioctl.h \
    cyapi/cyusb30_def.h \
    cyapi/usb100.h \
    cyapi/usb200.h \
    cyapi/UsbdStatus.h \
    cyapi/VersionNo.h \
    cuicapcolu.h

FORMS += \
        mainwindow.ui \
    communication.ui \
    capcolu.ui

RESOURCES += \
    icon.qrc

LIBS += -L$$PWD/cyapi/ -lCyAPI
INCLUDEPATH += $$PWD/cyapi
DEPENDPATH += $$PWD/cyapi

NODEFAULTLIB:library  #因为引入外部库，所以库类型与默认不同

DISTFILES += \
    cyapi/CyAPI.lib

