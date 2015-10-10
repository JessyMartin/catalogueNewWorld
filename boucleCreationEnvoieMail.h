#ifndef BOUCLECREATIONENVOIEMAIL_H
#define BOUCLECREATIONENVOIEMAIL_H

#include "creationpdf.h"

#include <QSqlDatabase>
#include <QCoreApplication>
#include <QSqlQuery>
#include <QSqlRecord>
#include <iostream>
#include <QApplication>
#include <QSqlDatabase>
#include <iostream>
#include <QtGui/QPrinter>
#include <QtGui/QPainter>
#include <QtGui>
#include <QtCore>


class BoucleCreationEnvoieMail
{
public:
    BoucleCreationEnvoieMail();
    void changerSql();
private:
    int numUti;
};



#endif // BOUCLECREATIONENVOIEMAIL_H
