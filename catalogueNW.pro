#-------------------------------------------------
#
# Project created by QtCreator 2015-09-11T14:14:59
#
#-------------------------------------------------

QT       += core gui
QT       += sql
QT       += printsupport
QT       += network

TARGET = catalogueNW
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    creationpdf.cpp \
    connexionbd.cpp \
    boucleCreationEnvoieMail.cpp

HEADERS += \
    creationpdf.h \
    connexionbd.h \
    boucleCreationEnvoieMail.h
