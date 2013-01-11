#-------------------------------------------------
#
# Project created by QtCreator 2013-01-07T11:53:43
#
#-------------------------------------------------

QT       -= gui

TARGET = FFmpegInterface
TEMPLATE = lib
CONFIG += lib

SOURCES += ffmpegprocess.cpp \
    conversionfile.cpp

HEADERS += ffmpegprocess.h \
    conversionfile.h
unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}

QMAKE_CXXFLAGS += -std=c++11 -std=c++0x
