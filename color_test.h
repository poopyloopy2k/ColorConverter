#ifndef COLOR_TEST_H
#define COLOR_TEST_H

#include <QtTest>
#include "mainwindow.h"
#include "ui_mainwindow.h"

class ColorTest : public QObject
{
    Q_OBJECT

private slots:
    void init();
    void cleanup();
    void testRGBToCMYKConversionIntoSliders();
    void testRGBToCMYKConversionIntoBoxes();
    void testCMYKToHSVConversionIntoSliders();
    void testCMYKToHSVConversionIntoBoxes();
    void testHSVToRGBConversionIntoSliders();
    void testHSVToRGBConversionIntoBoxes();

private:
    MainWindow *mainWindow; // Указатель на тестируемый класс
};

#endif // COLOR_TEST_H
