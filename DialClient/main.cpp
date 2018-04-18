#include "dialcient.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DialCient w;
    w.show();

    return a.exec();
}
