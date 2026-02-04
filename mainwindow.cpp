#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDate date = QDate::currentDate();
    ui->dateTimeEdit->setDate(date);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_incrementHalf_clicked()
{
    int val = ui->incrementInput->text().toInt();
    ui->incrementOutput->setText(QString::number(val));
}