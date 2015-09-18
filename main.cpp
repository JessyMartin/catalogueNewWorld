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
#include "connexionbd.h"
using namespace std;


int main(int argc, char *argv[])
{
    connexionBD();
    QApplication a(argc, argv);
    QPrinter printer(QPrinter::HighResolution); //create your QPrinter (don't need to be high resolution, anyway)
    printer.setFullPage(QPrinter::A4);
    printer.setOutputFormat(QPrinter::NativeFormat);
    printer.setOutputFileName("catalogueNewWorld.pdf");
    QPainter painter;
    painter.begin(&printer);
    painter.setFont(QFont("Verdana",12));
    painter.drawText(200,200,"Catalogue New World");
    painter.end();
    return 0;
}
