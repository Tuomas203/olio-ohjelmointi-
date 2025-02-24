#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LisaaNappi_clicked()
{
    QString str = ui->NumeroNaytto->text();
    int num = str.toInt();
    num ++;
    qDebug() << "Numero: " << num;
    QString uusStr = QString::number(num);
    ui->NumeroNaytto->setText(uusStr);


}


void MainWindow::on_ResetNappi_clicked()
{
    QString str = ui->NumeroNaytto->text();
    int num = str.toInt();
    num = 0;
    qDebug() << "Numero: " << num;
    QString uusStr = QString::number(num);
    ui->NumeroNaytto->setText(uusStr);



}

