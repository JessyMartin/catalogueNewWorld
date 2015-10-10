#include <QSqlDatabase>
#include <QCoreApplication>
#include<QSqlQuery>
#include <QSqlRecord>
#include <iostream>
#include <QApplication>
#include <QSqlDatabase>
#include <QtGui/QPrinter>
#include <QtGui/QPainter>
#include "connexionbd.h"
#include "creationpdf.h"
#include "boucleCreationEnvoieMail.h"

using namespace std;


int main(int argc,char** argv)
{
    QApplication monAppli(argc,argv);

    // Connexion à la base de donnée
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("172.16.63.111");
    db.setUserName("jcanto");
    db.setDatabaseName("dbjcantoNewWorld");
    db.setPassword("PscX57Q47");
    if(db.open()){
        BoucleCreationEnvoieMail laBoucle;
        laBoucle.changerSql();

        CreationPdf laCreation;
        laCreation.BoucleCreationPdf();
    }
    else
    {
        cout<<"Echec"<<endl;
    }
    return 0;
}
