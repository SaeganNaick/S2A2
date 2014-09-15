#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QLabel>

QString input = "";
QString code = "1234";
QString access = "";



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    input+="1";
}

void MainWindow::on_pushButton_2_clicked()
{
    input+="2";
}

void MainWindow::on_pushButton_3_clicked()
{
    input+="3";
}

void MainWindow::on_pushButton_4_clicked()
{
    input+="4";
}

void MainWindow::on_pushButton_5_clicked()
{
    input+="5";
}

void MainWindow::on_pushButton_6_clicked()
{
    input+="6";
}

void MainWindow::on_pushButton_7_clicked()
{
    input+="7";
}

void MainWindow::on_pushButton_8_clicked()
{
    input+="8";
}

void MainWindow::on_pushButton_9_clicked()
{
    input+="9";
}

void MainWindow::on_pushButton_10_clicked()
{
    input+="0";
}

void MainWindow::on_eval_clicked()
{
QObject::connect(ui->eval, SIGNAL(clicked()),ui->label_3, SLOT(setText()));
    if (input=="12334")
    {
        access = "GRANTED";
        ui->label_3->setText(access);
    }
    else
        access = "DENIED";
        access = "";
}



