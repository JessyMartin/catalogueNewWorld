#include <QSqlDatabase>
#include <QCoreApplication>
#include<QSqlQuery>
#include <QSqlRecord>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // Connexion à la base de donnée
    QSqlDatabase * maBase;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    maBase = new QSqlDatabase(db);
    maBase->setHostName("172.16.63.111");
    maBase->setUserName("jcanto");
    maBase->setDatabaseName("dbjcantoNewWorld");
    maBase->setPassword("PscX57Q47");
    if(maBase->open()){
        cout<<"Ok"<<endl;
    }
    else
    {
        cout<<"Echec"<<endl;
    }


    return 0;
}
