#include "digitaltime.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    digitaltime w;
    w.show();

    return a.exec();
}
