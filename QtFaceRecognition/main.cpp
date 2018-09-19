#include "FaceWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FaceWindow w;
    w.show();

    return a.exec();
}
