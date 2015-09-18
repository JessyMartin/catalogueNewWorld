#ifndef CONNEXIONBD_H
#define CONNEXIONBD_H
#include <QSqlDatabase>
#include <QCoreApplication>
#include<QSqlQuery>
#include <QSqlRecord>
#include <iostream>

class ConnexionBD
{
public:
    ConnexionBD();
private:
    QSqlDatabase * maBase;
};

#endif // CONNEXIONBD_H
