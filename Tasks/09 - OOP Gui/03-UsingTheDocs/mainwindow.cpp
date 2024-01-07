#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider, &QSlider::sliderMoved,this, &MainWindow::SliderUp);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SliderUp(int u)
{
    QString S =QString("%1").arg(u);
    ui->labelNumericValue->setText(S);
}

//void MainWindow::SliderDown()
//{
//
//}
