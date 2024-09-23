#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColor>
#include <QColorDialog>
#include <QPalette>
#include <QTextEdit>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    updatingRGB = false;
    updatingCMYK = false;
    updatingHSV = false;

    connect(ui->RedSlider, &QSlider::valueChanged, this, &MainWindow::on_rgbSlider_valueChanged);
    connect(ui->GreenSlider, &QSlider::valueChanged, this, &MainWindow::on_rgbSlider_valueChanged);
    connect(ui->BlueSlider, &QSlider::valueChanged, this, &MainWindow::on_rgbSlider_valueChanged);

    connect(ui->RedBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_rgbSpinBox_valueChanged);
    connect(ui->GreenBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_rgbSpinBox_valueChanged);
    connect(ui->BlueBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_rgbSpinBox_valueChanged);

    connect(ui->HueSlider, &QSlider::valueChanged, this, &MainWindow::on_hsvSlider_valueChanged);
    connect(ui->SaturationSlider, &QSlider::valueChanged, this, &MainWindow::on_hsvSlider_valueChanged);
    connect(ui->ValueSlider, &QSlider::valueChanged, this, &MainWindow::on_hsvSlider_valueChanged);

    connect(ui->HueBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_hsvSpinBox_valueChanged);
    connect(ui->SaturationBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_hsvSpinBox_valueChanged);
    connect(ui->ValueBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_hsvSpinBox_valueChanged);

    connect(ui->CyanSlider, &QSlider::valueChanged, this, &MainWindow::on_cmykSlider_valueChanged);
    connect(ui->MagentaSlider, &QSlider::valueChanged, this, &MainWindow::on_cmykSlider_valueChanged);
    connect(ui->YellowSlider, &QSlider::valueChanged, this, &MainWindow::on_cmykSlider_valueChanged);
    connect(ui->BlackSlider, &QSlider::valueChanged, this, &MainWindow::on_cmykSlider_valueChanged);

    connect(ui->CyanBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_cmykSpinBox_valueChanged);
    connect(ui->MagentaBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_cmykSpinBox_valueChanged);
    connect(ui->YellowBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_cmykSpinBox_valueChanged);
    connect(ui->BlackBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_cmykSpinBox_valueChanged);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QColor ColorValue = QColorDialog::getColor(Qt::white, this, tr("Select the color"));
    if (ColorValue.isValid()) {
        QString colorName = ColorValue.name();
        ui->colorWidget->setStyleSheet(QString("background-color: %1").arg(colorName));
        qDebug() << "Color set to:" << colorName;
    }
    int r,g,b,c,m,y,k,h,s,v;
    ColorValue.getRgb(&r,&g,&b);
    ColorValue.getCmyk(&c,&m,&y,&k);
    ColorValue.getHsv(&h,&s,&v);
    setRGB(r,g,b);
    setCMYK(c,m,y,k);
    setHSV(h,s,v);
}

void MainWindow::setHSV(int h, int s, int v)
{
    if(updatingHSV == true)
    {
        return;
    }
    updatingHSV = true;
    ui->HueSlider->setValue(h);
    ui->SaturationSlider->setValue(s);
    ui->ValueSlider->setValue(v);

    ui->HueBox->setValue(h);
    ui->SaturationBox->setValue(s);
    ui->ValueBox->setValue(v);
    QColor color;
    color.setHsv(h,s,v);
    ui->colorWidget->setStyleSheet(QString("background-color: %1").arg(color.name()));
    int r,g,b;
    color.getRgb(&r,&g,&b);
    setRGB(r,g,b);
    int c,m,y,k;
    color.getCmyk(&c,&m,&y,&k);
    setCMYK(c,m,y,k);
    updatingHSV = false;
}


void MainWindow::setCMYK(int c, int m, int y, int k)
{
    if(updatingCMYK == true)
    {
        return;
    }
    updatingCMYK = true;
    ui->CyanSlider->setValue(c);
    ui->MagentaSlider->setValue(m);
    ui->YellowSlider->setValue(y);
    ui->BlackSlider->setValue(k);

    ui->CyanBox->setValue(c);
    ui->MagentaBox->setValue(m);
    ui->YellowBox->setValue(y);
    ui->BlackBox->setValue(k);

    QColor color;
    color.setCmyk(c,m,y,k);
    ui->colorWidget->setStyleSheet(QString("background-color: %1").arg(color.name()));
    int r,g,b;
    color.getRgb(&r,&g,&b);
    setRGB(r,g,b);
    int h,s,v;
    color.getHsv(&h,&s,&v);
    setHSV(h,s,v);
    updatingCMYK = false;
}



void MainWindow::setRGB(int r, int g, int b)
{
    if(updatingRGB == true)
    {
        return;
    }
    updatingRGB = true;
    ui->RedSlider->setValue(r);
    ui->GreenSlider->setValue(g);
    ui->BlueSlider->setValue(b);

    ui->RedBox->setValue(r);
    ui->GreenBox->setValue(g);
    ui->BlueBox->setValue(b);

    QColor color;
    color.setRgb(r,g,b);
    ui->colorWidget->setStyleSheet(QString("background-color: %1").arg(color.name()));

    int c, m, y, k;
    color.getCmyk(&c,&m,&y,&k);
    setCMYK(c,m,y,k);

    int h,s,v;
    color.getHsv(&h,&s,&v);
    setHSV(h,s,v);
    updatingRGB = false;
}

void MainWindow::getRGBFromSliders(int &r, int &g, int &b)
{
    r = ui->RedSlider->value();
    g = ui->GreenSlider->value();
    b = ui->BlueSlider->value();
}

void MainWindow::getRGBFromBoxes(int &r, int &g, int &b)
{
    r = ui->RedBox->value();
    g = ui->GreenBox->value();
    b = ui->BlueBox->value();
}

void MainWindow::getCMYKFromSliders(int &c, int &m, int &y, int &k)
{
    c = ui->CyanSlider->value();
    m=  ui->MagentaSlider->value();
    y = ui->YellowSlider->value();
    k = ui->BlackSlider->value();
}

void MainWindow::getCMYKFromBoxes(int &c, int &m, int &y, int &k)
{
    c = ui->CyanBox->value();
    m=  ui->MagentaBox->value();
    y = ui->YellowBox->value();
    k = ui->BlackBox->value();
}

void MainWindow::getHSVFromSliders(int &h, int &s, int &v)
{
    h = ui->HueSlider->value();
    s = ui->SaturationSlider->value();
    v = ui->ValueSlider->value();
}
void MainWindow::getHSVFromBoxes(int &h, int &s, int &v)
{
    h = ui->HueBox->value();
    s = ui->SaturationBox->value();
    v = ui->ValueBox->value();
}


void MainWindow::on_rgbSlider_valueChanged(int)
{
    int r = ui->RedSlider->value();
    int g = ui->GreenSlider->value();
    int b = ui->BlueSlider->value();
    setRGB(r,g,b);
}

void MainWindow::on_rgbSpinBox_valueChanged(int )
{
    int r = ui->RedBox->value();
    int g = ui->GreenBox->value();
    int b = ui->BlueBox->value();
    setRGB(r,g,b);
}
void MainWindow::on_hsvSpinBox_valueChanged(int )
{
    int h = ui->HueBox->value();
    int s = ui->SaturationBox->value();
    int v = ui->ValueBox->value();
    setHSV(h,s,v);
}

void MainWindow::on_hsvSlider_valueChanged(int )
{
    int h = ui->HueSlider->value();
    int s = ui->SaturationSlider->value();
    int v = ui->ValueSlider->value();
    setHSV(h,s,v);
}

void MainWindow::on_cmykSlider_valueChanged(int )
{
    int c = ui->CyanSlider->value();
    int m = ui->MagentaSlider->value();
    int y = ui->YellowSlider->value();
    int k = ui->BlackSlider->value();
    setCMYK(c,m,y,k);
}

void MainWindow::on_cmykSpinBox_valueChanged(int )
{
    int c = ui->CyanBox->value();
    int m = ui->MagentaBox->value();
    int y = ui->YellowBox->value();
    int k = ui->BlackBox->value();
    setCMYK(c,m,y,k);
}
