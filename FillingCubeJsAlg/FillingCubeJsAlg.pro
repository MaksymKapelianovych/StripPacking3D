TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        node.cpp \
        packer.cpp

HEADERS += \
    box.h \
    node.h \
    packer.h
