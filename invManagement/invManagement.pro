QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    customeradder.cpp \
    customerdetail.cpp \
    customerupdater.cpp \
    dashboard.cpp \
    main.cpp \
    mainwindow.cpp \
    productadder.cpp \
    productdetail.cpp \
    productupdater.cpp \
    purchase.cpp \
    purchasehistory.cpp

HEADERS += \
    customeradder.h \
    customerdetail.h \
    customerupdater.h \
    dashboard.h \
    mainwindow.h \
    productadder.h \
    productdetail.h \
    productupdater.h \
    purchase.h \
    purchasehistory.h

FORMS += \
    customeradder.ui \
    customerdetail.ui \
    customerupdater.ui \
    dashboard.ui \
    mainwindow.ui \
    productadder.ui \
    productdetail.ui \
    productupdater.ui \
    purchase.ui \
    purchasehistory.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
