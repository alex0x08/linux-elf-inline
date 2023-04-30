#include "testapp.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    testapp w;
    w.show();
    return app.exec();
}
