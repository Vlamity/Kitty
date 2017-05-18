TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    generate.cpp \
    kitty.cpp \
    merge.cpp

HEADERS += \
    generate.h \
    kitty.h \
    merge.h
