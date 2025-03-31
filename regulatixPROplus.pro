QT += widgets charts core

CONFIG += c++17

TARGET = regulatixPRO
TEMPLATE = app

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    simulation.cpp \
    arx.cpp \
    pid.cpp \
    generator.cpp \
    chartwidget.cpp \
    exportdialog.cpp

HEADERS += \
    mainwindow.h \
    simulation.h \
    arx.h \
    pid.h \
    generator.h \
    chartwidget.h \
    exportdialog.h

FORMS += \
    mainwindow.ui \
    chartwidget.ui \
    exportdialog.ui

INCLUDEPATH += $$PWD/include

# Additional compiler flags for MinGW
win32-g++:QMAKE_CXXFLAGS += -fstack-protector-all -D_FORTIFY_SOURCE=2 -O2

# Android specific settings
android {
    ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android
}

# macOS/iOS bundle settings
macx {
    QMAKE_INFO_PLIST = Info.plist
    QMAKE_BUNDLE = yes
    QMAKE_BUNDLE_IDENTIFIER = com.example.regulatixPRO
}

# Installation settings
unix {
    target.path = /usr/local/bin
    INSTALLS += target
}
