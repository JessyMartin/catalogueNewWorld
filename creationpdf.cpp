#include "creationpdf.h"

CreationPdf::CreationPdf()
{
    QApplication a(argc, argv);
//################### Debut requete ###################
    QSqlQuery date ;
       date.exec("select CURRENT_DATE");
       date.first();
       QString affDate = date.value(0).toString();
//################### Fin requete ###################
    QPrinter printer(QPrinter::HighResolution);
    printer.setFullPage(QPrinter::A4);
    printer.setOutputFormat(QPrinter::NativeFormat);
    printer.setOutputFileName("catalogueNewWorld.pdf");

    QPainter painter;
    painter.begin(&printer);

    painter.setFont(QFont("Verdana",30));
    painter.drawText(2000,1500,"Semaine du "+affDate);

    QImage img("catalogue.png");
    img.load("catalogue.png");
    painter.drawImage(QPoint(0,0),img);

    QImage img2("newWorld.png");
    img2.load("newWorld.png");
    painter.drawImage(QPoint(5000,0),img2);

    QImage img3("newWorldLogo.png");
    img3.load("newWorldLogo.png");
    img3=img3.scaledToWidth(8000);
    painter.drawImage(QPoint(550,2500),img3);


}
