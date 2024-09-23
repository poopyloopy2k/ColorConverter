/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSlider *RedSlider;
    QSlider *GreenSlider;
    QSlider *BlueSlider;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QSlider *CyanSlider;
    QSlider *MagentaSlider;
    QSlider *YellowSlider;
    QSlider *BlackSlider;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QSlider *HueSlider;
    QSlider *SaturationSlider;
    QSlider *ValueSlider;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QSpinBox *RedBox;
    QSpinBox *GreenBox;
    QSpinBox *BlueBox;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QSpinBox *CyanBox;
    QSpinBox *MagentaBox;
    QSpinBox *YellowBox;
    QSpinBox *BlackBox;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QSpinBox *HueBox;
    QSpinBox *SaturationBox;
    QSpinBox *ValueBox;
    QPushButton *pushButton;
    QWidget *colorWidget;
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1165, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 20, 171, 311));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        RedSlider = new QSlider(verticalLayoutWidget);
        RedSlider->setObjectName("RedSlider");
        RedSlider->setMaximum(255);
        RedSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(RedSlider);

        GreenSlider = new QSlider(verticalLayoutWidget);
        GreenSlider->setObjectName("GreenSlider");
        GreenSlider->setMaximum(255);
        GreenSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(GreenSlider);

        BlueSlider = new QSlider(verticalLayoutWidget);
        BlueSlider->setObjectName("BlueSlider");
        QFont font;
        font.setBold(false);
        BlueSlider->setFont(font);
        BlueSlider->setMaximum(255);
        BlueSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(BlueSlider);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(340, 20, 221, 311));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        CyanSlider = new QSlider(verticalLayoutWidget_2);
        CyanSlider->setObjectName("CyanSlider");
        CyanSlider->setMaximum(100);
        CyanSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(CyanSlider);

        MagentaSlider = new QSlider(verticalLayoutWidget_2);
        MagentaSlider->setObjectName("MagentaSlider");
        MagentaSlider->setMaximum(100);
        MagentaSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(MagentaSlider);

        YellowSlider = new QSlider(verticalLayoutWidget_2);
        YellowSlider->setObjectName("YellowSlider");
        YellowSlider->setMaximum(100);
        YellowSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(YellowSlider);

        BlackSlider = new QSlider(verticalLayoutWidget_2);
        BlackSlider->setObjectName("BlackSlider");
        BlackSlider->setMaximum(100);
        BlackSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(BlackSlider);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(720, 20, 261, 311));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        HueSlider = new QSlider(verticalLayoutWidget_3);
        HueSlider->setObjectName("HueSlider");
        HueSlider->setMaximum(360);
        HueSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(HueSlider);

        SaturationSlider = new QSlider(verticalLayoutWidget_3);
        SaturationSlider->setObjectName("SaturationSlider");
        SaturationSlider->setMaximum(100);
        SaturationSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(SaturationSlider);

        ValueSlider = new QSlider(verticalLayoutWidget_3);
        ValueSlider->setObjectName("ValueSlider");
        ValueSlider->setMaximum(100);
        ValueSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(ValueSlider);

        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(209, 19, 111, 311));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        RedBox = new QSpinBox(verticalLayoutWidget_4);
        RedBox->setObjectName("RedBox");
        RedBox->setMaximum(255);

        verticalLayout_4->addWidget(RedBox);

        GreenBox = new QSpinBox(verticalLayoutWidget_4);
        GreenBox->setObjectName("GreenBox");
        GreenBox->setMaximum(255);

        verticalLayout_4->addWidget(GreenBox);

        BlueBox = new QSpinBox(verticalLayoutWidget_4);
        BlueBox->setObjectName("BlueBox");
        BlueBox->setMaximum(255);

        verticalLayout_4->addWidget(BlueBox);

        verticalLayoutWidget_5 = new QWidget(centralwidget);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(580, 20, 111, 311));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        CyanBox = new QSpinBox(verticalLayoutWidget_5);
        CyanBox->setObjectName("CyanBox");
        CyanBox->setMaximum(100);

        verticalLayout_5->addWidget(CyanBox);

        MagentaBox = new QSpinBox(verticalLayoutWidget_5);
        MagentaBox->setObjectName("MagentaBox");
        MagentaBox->setMaximum(100);

        verticalLayout_5->addWidget(MagentaBox);

        YellowBox = new QSpinBox(verticalLayoutWidget_5);
        YellowBox->setObjectName("YellowBox");
        YellowBox->setMaximum(100);

        verticalLayout_5->addWidget(YellowBox);

        BlackBox = new QSpinBox(verticalLayoutWidget_5);
        BlackBox->setObjectName("BlackBox");
        BlackBox->setMaximum(100);

        verticalLayout_5->addWidget(BlackBox);

        verticalLayoutWidget_6 = new QWidget(centralwidget);
        verticalLayoutWidget_6->setObjectName("verticalLayoutWidget_6");
        verticalLayoutWidget_6->setGeometry(QRect(1000, 20, 111, 311));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        HueBox = new QSpinBox(verticalLayoutWidget_6);
        HueBox->setObjectName("HueBox");
        HueBox->setMaximum(360);

        verticalLayout_6->addWidget(HueBox);

        SaturationBox = new QSpinBox(verticalLayoutWidget_6);
        SaturationBox->setObjectName("SaturationBox");
        SaturationBox->setMaximum(100);

        verticalLayout_6->addWidget(SaturationBox);

        ValueBox = new QSpinBox(verticalLayoutWidget_6);
        ValueBox->setObjectName("ValueBox");
        ValueBox->setMaximum(100);

        verticalLayout_6->addWidget(ValueBox);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 350, 231, 181));
        QFont font1;
        font1.setPointSize(25);
        font1.setWeight(QFont::Thin);
        font1.setStrikeOut(false);
        pushButton->setFont(font1);
        colorWidget = new QWidget(centralwidget);
        colorWidget->setObjectName("colorWidget");
        colorWidget->setGeometry(QRect(360, 360, 221, 151));
        textEdit = new QTextEdit(colorWidget);
        textEdit->setObjectName("textEdit");
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(0, 0, 221, 151));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(68, 10, 121, 51));
        QFont font2;
        font2.setPointSize(25);
        font2.setWeight(QFont::Light);
        label->setFont(font2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(410, 10, 101, 51));
        label_2->setFont(font2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(800, -10, 101, 91));
        label_3->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1165, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Pick the color", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "RGB", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "CMYK", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "HSV", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
