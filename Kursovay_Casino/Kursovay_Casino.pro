QT       += core gui sql

QTPLUGIN += qsqlite

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    awards.cpp \
    blackjack.cpp \
    blackjackwindow.cpp \
    card.cpp \
    chest.cpp \
    chestwindow.cpp \
    deck.cpp \
    devytka.cpp \
    devytkawindow.cpp \
    gamedialog.cpp \
    main.cpp \
    mainwindow.cpp \
    numberofplayers.cpp \
    player.cpp \
    resultgame.cpp \
    statistics.cpp \
    urlcard.cpp

HEADERS += \
    awards.h \
    blackjack.h \
    blackjackwindow.h \
    card.h \
    cardRank.h \
    cardSuit.h \
    chest.h \
    chestwindow.h \
    constant.h \
    deck.h \
    devytka.h \
    devytkawindow.h \
    gamedialog.h \
    mainwindow.h \
    numberofplayers.h \
    player.h \
    resultgame.h \
    statistics.h \
    urlcard.h

FORMS += \
    awards.ui \
    blackjackwindow.ui \
    chestwindow.ui \
    devytkawindow.ui \
    gamedialog.ui \
    mainwindow.ui \
    numberofplayers.ui \
    statistics.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Assets.qrc

RC_FILE = icon.rc
