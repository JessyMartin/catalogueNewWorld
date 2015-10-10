#include "creationpdf.h"
#include <QDebug>

CreationPdf::CreationPdf()
{

}

void CreationPdf::BoucleCreationPdf()
{


//################### Debut requete ###################

// Requete date aujourd'hui
    QSqlQuery date ;
       date.exec("select CURRENT_DATE");
       date.first();
       QDate affDate = date.value(0).toDate();
       qDebug() << affDate;
       QString stringDate = affDate.toString("dd/MM/yyyy");

// Requete utilisateur
       QSqlQuery requetePdf("select distinct utiPdf from utilisateur where utiPdf!=\"NULL\"");


//################### Fin requete ###################*/


    while(requetePdf.next())
    {
        QString nomPdf = requetePdf.value(0).toString();

        QSqlQuery requeteNumRelais;
        requeteNumRelais.prepare("select distinct relNum from pointRelaisParUtilisateur natural join utilisateur where utiPdf=:nomPdf");
        requeteNumRelais.bindValue(":nomPdf",nomPdf);
        requeteNumRelais.exec();


        QPrinter printer(QPrinter::HighResolution);
        printer.setFullPage(QPrinter::A4);
        printer.setOutputFormat(QPrinter::NativeFormat);
        printer.setOutputFileName("/tmp/"+nomPdf);
        QPainter painter;
        painter.begin(&printer);

        painter.setFont(QFont("Verdana",30));
        painter.drawText(2000,1500,"Semaine du "+stringDate);

        /*QImage img("catalogue.png");
        img.load("catalogue.png");
        painter.drawImage(QPoint(0,0),img);

        QImage img2("newWorld.png");
        img2.load("newWorld.png");
        painter.drawImage(QPoint(5000,0),img2);*/

        QImage img3("newWorldLogo.png");
        img3.load("newWorldLogo.png");
        img3=img3.scaledToWidth(8000);
        painter.drawImage(QPoint(550,2500),img3);

        while(requeteNumRelais.next())
        {

            int relais =requeteNumRelais.value(0).toInt(); //Ici relais c'est les points de ventes pour ce pdf
            qDebug() << relais;
            QSqlQuery requeteLot("select * from produit natural join lot natural join pointDeVente where pdv="+relais+" order by rayonId, typeId");

        }
        qDebug() << "boucle end";
    }

}
