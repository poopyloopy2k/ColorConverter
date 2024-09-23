#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QColor>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    friend class ColorTest;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void setCMYK(int c,int m, int y,int k);
    void setHSV(int h, int s, int v);
    void setRGB(int r, int g, int b);
    void getRGBFromSliders(int &r, int &g, int &b);
    void getRGBFromBoxes(int &r, int &g, int &b);
    void getCMYKFromSliders(int &c,int &m, int &y,int &k);
    void getCMYKFromBoxes(int &c,int &m, int &y,int &k);
    void getHSVFromSliders(int &h, int &s, int &v);
    void getHSVFromBoxes(int &h, int &s, int &v);

private slots:

    void on_pushButton_clicked();
    void on_rgbSlider_valueChanged(int);
    void on_hsvSlider_valueChanged(int);
    void on_cmykSlider_valueChanged(int);
    void on_rgbSpinBox_valueChanged(int);
    void on_hsvSpinBox_valueChanged(int);
    void on_cmykSpinBox_valueChanged(int);

private:

    Ui::MainWindow *ui;
    bool updatingRGB = false;
    bool updatingHSV = false;
    bool updatingCMYK = false;
};

#endif // MAINWINDOW_H

