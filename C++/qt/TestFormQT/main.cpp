#include "mainwindow.h"
#include "classmath.h"
#include <QApplication>
//#include <QLabel>
//#include <QString>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

// test metod summe_nuber
//    int b = 3;
//    int c = 5;
//    ClassMath test;
//    //выводим в leber результат метода summe_number
//    w.setLabelText(test.summe_number(b,c));

// тест Edit

    return a.exec();

}
// инфа по lineEdit http://easy-qt.blogspot.com/2012/02/qpushbutton-qlineedit.html
