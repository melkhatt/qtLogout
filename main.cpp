#include <QtGui/QApplication>
#include "qtlogout.h"
#include "qlbackground.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    qlBackground bga;
    bga.show();

    qtLogout main_win;
    main_win.show();

    return a.exec();


}
