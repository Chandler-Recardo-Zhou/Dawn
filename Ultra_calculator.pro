QT       += core gui widgets qml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17


SOURCES += \
    main.cpp \
    calwidget.cpp

HEADERS += \
    calwidget.h

FORMS += \
    calwidget.ui

TRANSLATIONS += \
    Ultra_calculator_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations


qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
