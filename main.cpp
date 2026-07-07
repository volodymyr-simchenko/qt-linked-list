#include "mainwindow.h"

#include <QApplication>

// Prevent the list from being processed a second time

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
