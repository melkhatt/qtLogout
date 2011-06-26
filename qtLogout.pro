#-------------------------------------------------
#
# Project created by QtCreator 2011-04-21T22:20:46
#
#-------------------------------------------------

QT       += core gui

isEmpty(INSTALL_PREFIX) {
        INSTALL_PREFIX = /usr/local
}
message("INSTALL_PREFIX for make install is: "$$INSTALL_PREFIX)

TARGET = qtLogout
TEMPLATE = app


SOURCES += main.cpp\
        qtlogout.cpp \
    qlbackground.cpp \
    qlhelp.cpp

HEADERS  += qtlogout.h \
    commands.h \
    qlbackground.h \
    qlhelp.h

FORMS    += qtlogout.ui \
    qlbackground.ui \
    qlhelp.ui

OTHER_FILES +=

RESOURCES += \
    res.qrc

# make install
target.path = $$INSTALL_PREFIX/bin/
INSTALLS += target
