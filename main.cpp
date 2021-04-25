#include "f1.h"
#include "ius.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    f1 w;
    w.move(0,0);
    w.show();

    ius w2;
    w2.move(684,0);
    w2.show();

  //  connect(this.w2, SIGNAL(asd()),w2.class, SLOT());

    return a.exec();
}
