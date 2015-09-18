#ifndef CONNEXIONBD_H
#define CONNEXIONBD_H
#include <QSqlDatabase>
#include <QCoreApplication>
#include<QSqlQuery>
#include <QSqlRecord>
#include <iostream>
class connexionBD
{
public:
    connexionBD();

private:
    QSqlDatabase * maBase;

};

#endif // CONNEXIONBD_H
