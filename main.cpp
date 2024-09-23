#include "mainwindow.h"
#include <QApplication>
#include <QTest>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <color_test.h>

int main(int argc, char *argv[])
{
    freopen("testing.log", "w", stdout);
    QApplication a(argc, argv);
    QLoggingCategory::setFilterRules("qt.qpa.*=false\n"
                                     "qt.core.qmetaobject.connectslotsbyname=false");
    QTest::qExec(new ColorTest, argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
