#include "DEDgui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DEDgui w;
    w.show();
    return a.exec();
}
