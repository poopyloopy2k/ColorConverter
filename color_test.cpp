#include "color_test.h"

void ColorTest::init()
{
    mainWindow = new MainWindow();
}

void ColorTest::cleanup()
{
    delete mainWindow;
}



void ColorTest::testRGBToCMYKConversionIntoSliders()
{
    // set RGB
    mainWindow->setRGB(0, 255, 255); // Cyan

    // Checking CMYK values
    int c, m, y, k;
    mainWindow -> getCMYKFromSliders(c, m, y, k);
    QCOMPARE(c, 100);
    QCOMPARE(m, 0);
    QCOMPARE(y, 0);
    QCOMPARE(k, 0);
}

void ColorTest::testRGBToCMYKConversionIntoBoxes()
{
    // set RGB
    mainWindow->setRGB(0, 255, 255); // Cyan

    // Checking CMYK values
    int c, m, y, k;
    mainWindow -> getCMYKFromBoxes(c, m, y, k);
    QCOMPARE(c, 100);
    QCOMPARE(m, 0);
    QCOMPARE(y, 0);
    QCOMPARE(k, 0);
}

void ColorTest::testCMYKToHSVConversionIntoSliders()
{
    // set CMYK
    mainWindow->setCMYK(0,50,100,0); //Orange color
    int h,s,v;
    mainWindow->getHSVFromSliders(h,s,v);
    QCOMPARE(h,30);
    QCOMPARE(s,100);
    QCOMPARE(v,100);
}

void ColorTest::testCMYKToHSVConversionIntoBoxes()
{
    // set CMYK
    mainWindow->setCMYK(0,50,100,0); //Orange color
    int h,s,v;
    mainWindow->getHSVFromBoxes(h,s,v);
    QCOMPARE(h,30);
    QCOMPARE(s,100);
    QCOMPARE(v,100);
}

void ColorTest::testHSVToRGBConversionIntoSliders()
{
    mainWindow ->setHSV(360,0,0);
    int r,g,b;
    mainWindow ->getRGBFromSliders(r,g,b);
    QCOMPARE(r,0);
    QCOMPARE(g,0);
    QCOMPARE(b,0);
}

void ColorTest::testHSVToRGBConversionIntoBoxes()
{
    mainWindow ->setHSV(360,0,0);
    int r,g,b;
    mainWindow ->getRGBFromBoxes(r,g,b);
    QCOMPARE(r,0);
    QCOMPARE(g,0);
    QCOMPARE(b,0);
}





