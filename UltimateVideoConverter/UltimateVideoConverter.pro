#-------------------------------------------------
#
# Project created by QtCreator 2013-01-07T11:28:28
#
#-------------------------------------------------

QT       += core gui widgets

TARGET    = ultimatevideoconverter
TEMPLATE  = app


SOURCES  += main.cpp \
            mainwindow.cpp \
            dialogs/addfile.cpp \
            uicomponents/uvcconversiontab.cpp

HEADERS  += mainwindow.h \
            dialogs/addfile.h \
            uicomponents/uvctabwidget.h \
            uicomponents/uvctablewidget.h \
            uicomponents/uvcconversiontab.h

FORMS    += mainwindow.ui \
            dialogs/addfile.ui

win32:CONFIG(release, debug|release):    LIBS += -L$$OUT_PWD/../FFmpegInterface/release/ -lFFmpegInterface
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../FFmpegInterface/debug/ -lFFmpegInterface
else:unix:!macx:                         LIBS += -L$$OUT_PWD/../FFmpegInterface/ -lFFmpegInterface

INCLUDEPATH    += $$PWD/../FFmpegInterface
DEPENDPATH     += $$PWD/../FFmpegInterface
INCLUDEPATH    += $$PWD/dialogs
DEPENDPATH     += $$PWD/dialogs
INCLUDEPATH    += $$PWD/uicomponents
DEPENDPATH     += $$PWD/uicomponents
INCLUDEPATH    += $$PWD/uicomponents/comboboxes
DEPENDPATH     += $$PWD/uicomponents/comboboxes

QMAKE_CXXFLAGS += -std=c++11 -std=c++0x
