/**
 * @file connexionbd.cpp
 * @author mreymond
 * @date 18/09/15
 * Permet de ce connecter à la base de donnée
 */
#include "connexionbd.h"
#include <QSqlDatabase>
#include <QCoreApplication>
#include<QSqlQuery>
#include <QSqlRecord>
#include <iostream>
using namespace std;
/**
 * @fn connexionBD::connexionBD
 * @brief connexion à la bd
 * Permet de ce connecter à la base de donnée
 */
connexionBD::connexionBD()
{
    // Connexion à la base de donnée
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    maBase = new QSqlDatabase(db);
    maBase->setHostName("172.16.63.111");
    maBase->setUserName("jcanto");
    maBase->setDatabaseName("jcanto");
    maBase->setPassword("PscX57Q47");
    if(maBase->open()){
        cout<<"Ok"<<endl;
    }
    else
    {
        cout<<"Echec"<<endl;
    }

}
