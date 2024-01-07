#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->SecondButton, &QPushButton::clicked, this, &MainWindow::SecondButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::on_pushButton_clicked()
//{
//    ui->labelMessage->setText("Hello World");
//}

void MainWindow::onButtonClicked (bool b)
{
    ui -> labelMessage -> setText("Hello world!");
}

void MainWindow::SecondButtonClicked (bool b)
{
    ui ->labelMessage->setText("May the force be with you");
}
