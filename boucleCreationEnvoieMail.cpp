#include "boucleCreationEnvoieMail.h"
#include <QDebug>


BoucleCreationEnvoieMail::BoucleCreationEnvoieMail()
{

}

void BoucleCreationEnvoieMail::changerSql()
{
    QSqlQuery requeteUti;
    requeteUti.exec("select distinct utiNum from pointRelaisParUtilisateur");
    while(requeteUti.next())
    {
        QString utiActu = requeteUti.value(0).toString();
        QSqlQuery requeteRel;
        requeteRel.exec("select relNum from pointRelaisParUtilisateur where utiNum="+utiActu);
        QString relChaine = "catalogueNewWorld";
        while(requeteRel.next())
        {
            relChaine = relChaine + "-" + requeteRel.value(0).toString();
        }

        QString myString = QDate::currentDate().toString("dd.MM.yyyy");
        relChaine += "."+myString;
        relChaine = relChaine + ".pdf";
        qDebug() << relChaine;

        QSqlQuery requetePDF;
        requetePDF.prepare("update utilisateur set utiPDF=:nomPdf where utiNum="+utiActu);
        requetePDF.bindValue(":nomPdf",relChaine);
        requetePDF.exec();
    }
}
