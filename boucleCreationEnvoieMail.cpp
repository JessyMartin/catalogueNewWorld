#include "boucleCreationEnvoieMail.h"


BoucleCreationEnvoieMail::BoucleCreationEnvoieMail()
{
    QSqlQuery requeteUti;
    requeteUti.exec("select distinct utiNum from pointRelaisParUtilisateur");
    int numUti=0;
    while(requeteUti.next());
    {
        QString utiActu = requeteUti.value(numUti).toString();
        QSqlQuery requeteRel;
        requeteRel.exec("select relNum from pointRelaisParUtilisateur where utiNum="+utiActu);
        QString relChaine = "catalogueNewWorld";
        int relActu = 0;
        while(requeteRel.next())
        {
            relChaine = relChaine + "-" + requeteRel.value(relActu).toString();
            relActu=relActu+1;
        }
        relChaine = relChaine + ".pdf";
        QFile pdfFichier(relChaine);
        if(!(pdfFichier.exists()))
        {
            CreationPdf(*relChaine);
        }
        numUti=numUti+1;

    }
}
