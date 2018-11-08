#include "mainwindow.h"
#include <QApplication>
#include "chuangkou.h"
#include "count.h"

int count::a[40],count::city=0,count::pvo=0;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w2;
    MainWindow w;



    for(int i=1;i<=39;i++) count::a[i]=0;


    w.show();

    return a.exec();
}
