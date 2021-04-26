#include "cleintwidjet.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CleintWidjet w;
    w.show();

    return a.exec();
}
