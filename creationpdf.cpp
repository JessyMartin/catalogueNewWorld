#include "creationpdf.h"

CreationPdf::CreationPdf()
{
    QApplication a(argc, argv);
    QPrinter printer(QPrinter::HighResolution);
    printer.setFullPage(QPrinter::A4);
    printer.setOutputFormat(QPrinter::NativeFormat);
    printer.setOutputFileName("catalogueNewWorld.pdf");
    QPainter painter;
    painter.begin(&printer);
    painter.setFont(QFont("Verdana",40));
   // painter.drawText(0,500,"Catalogue");
    //painter.drawText(5600,500,"New World");
    painter.drawText(3000,1500,"<Semaine>");
    QImage img("catalogue.png");
    img.load("catalogue.png");
    painter.drawImage(QPoint(0,0),img);
    QImage img2("newWorld.png");
    img2.load("newWorld.png");
    painter.drawImage(QPoint(5000,0),img2);

}
