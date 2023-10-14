#include "mainwindow.h"
#include <QApplication>
#include "first.h"

int main(int argc, char *argv[])
{
    //qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));
    QApplication a(argc, argv);

    MainWindow w;
    w.show();
    first m_first;
    m_first.show();

    return a.exec();
}
