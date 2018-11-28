#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    // Creates the application object
    QApplication a(argc, argv);

    // Create the main application object and display it on screen
    MainWindow w;
    w.show();

    // Puts the application into a loop in which events are handled
    return a.exec();
}
