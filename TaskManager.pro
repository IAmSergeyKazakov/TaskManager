QT       += core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    UI_Operations.cpp \
    aboutTaskPage.cpp \
    addingNewPerformersPage.cpp \
    chatOperations.cpp \
    createTaskPage.cpp \
    main.cpp \
    mainPage.cpp \
    mainwindow.cpp \
    newUserRegistration.cpp \
    setDatabase.cpp \
    settingsPage.cpp \
    timerOperations.cpp \
    userAuthentication.cpp \
    userCompletedTaskPage.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

win32: RC_FILE = icon.rc.txt

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
