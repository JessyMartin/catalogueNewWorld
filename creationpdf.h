#ifndef CREATIONPDF_H
#define CREATIONPDF_H
#include <QSqlDatabase>
#include <QCoreApplication>
#include<QSqlQuery>
#include <QSqlRecord>
#include <iostream>
#include <QApplication>
#include <QSqlDatabase>
#include <iostream>
#include <QtGui/QPrinter>
#include <QtGui/QPainter>
class CreationPdf
{
public:
    CreationPdf();
private:
    int argc;
    char *argv[];
    QApplication a(int argc,char *argv);
};

#endif // CREATIONPDF_H
