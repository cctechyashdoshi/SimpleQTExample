#include "SimpleQTExample.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
    SimpleQTExample w;
    w.show();
    return a.exec();
}
