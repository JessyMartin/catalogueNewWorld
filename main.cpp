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
#include "creationpdf.h"

using namespace std;


int main(int argc, char *argv[])
{
    ConnexionBD();
    CreationPdf();
    return 0;
}
