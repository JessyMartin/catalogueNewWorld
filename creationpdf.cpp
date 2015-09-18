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
    painter.setFont(QFont("Verdana",12));
    painter.drawText(200,200,"Catalogue New World");
    painter.end();
}
