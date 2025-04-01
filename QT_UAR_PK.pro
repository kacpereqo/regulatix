QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    qarx.cpp \
    qarx_insert_dialog.cpp \
    qcustomplot.cpp \
    qpid.cpp \
    qwarzad.cpp \
    testy.cpp \
    uar.cpp

HEADERS += \
    mainwindow.h \
    qarx.h \
    qarx_insert_dialog.h \
    qcustomplot.h \
    qpid.h \
    qwarzad.h \
    testy.h \
    uar.h

FORMS += \
    mainwindow.ui \
    qarx_insert_dialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
