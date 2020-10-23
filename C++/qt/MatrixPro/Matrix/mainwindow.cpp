#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this); 
        //Запись из и перевод из QString в int
     int1  =  ui->lineEdit->text().toInt();
     int2  =  ui->lineEdit_2->text().toInt();
     int3  =  ui->lineEdit_3->text().toInt();
     int4  =  ui->lineEdit_4->text().toInt();
     int5  =  ui->lineEdit_5->text().toInt();
     int6  =  ui->lineEdit_6->text().toInt();
     int7  =  ui->lineEdit_7->text().toInt();
     int8  =  ui->lineEdit_8->text().toInt();
     int9  =  ui->lineEdit_9->text().toInt();

    //Запись из и перевод из QString в int
     int10  =  ui->lineEdit_10->text().toInt();
     int11  =  ui->lineEdit_11->text().toInt();
     int12  =  ui->lineEdit_12->text().toInt();
     int13  =  ui->lineEdit_13->text().toInt();
     int14  =  ui->lineEdit_14->text().toInt();
     int15  =  ui->lineEdit_15->text().toInt();
     int16  =  ui->lineEdit_16->text().toInt();
     int17  =  ui->lineEdit_17->text().toInt();
     int18  =  ui->lineEdit_18->text().toInt();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //перевод из int  в QString
    QString dec1 = QString::number(int1 + int10);
    QString dec2 = QString::number(int2 + int11);
    QString dec3 = QString::number(int3 + int12);
    QString dec4 = QString::number(int4 + int13);
    QString dec5 = QString::number(int5 + int14);
    QString dec6 = QString::number(int6 + int15);
    QString dec7 = QString::number(int7 + int16);
    QString dec8 = QString::number(int8 + int17);
    QString dec9 = QString::number(int9 + int18);
    // Запись в Libel
    ui->label->setText(dec1);
    ui->label_2->setText(dec2);
    ui->label_3->setText(dec3);
    ui->label_4->setText(dec4);
    ui->label_5->setText(dec5);
    ui->label_6->setText(dec6);
    ui->label_7->setText(dec7);
    ui->label_8->setText(dec8);
    ui->label_9->setText(dec9);
}

void MainWindow::on_pushButton_2_clicked()
{
    //перевод из int  в QString
    QString dec1 = QString::number(int1 - int10);
    QString dec2 = QString::number(int2 - int11);
    QString dec3 = QString::number(int3 - int12);
    QString dec4 = QString::number(int4 - int13);
    QString dec5 = QString::number(int5 - int14);
    QString dec6 = QString::number(int6 - int15);
    QString dec7 = QString::number(int7 - int16);
    QString dec8 = QString::number(int8 - int17);
    QString dec9 = QString::number(int9 - int18);
    // Запись в Libel
    ui->label->setText(dec1);
    ui->label_2->setText(dec2);
    ui->label_3->setText(dec3);
    ui->label_4->setText(dec4);
    ui->label_5->setText(dec5);
    ui->label_6->setText(dec6);
    ui->label_7->setText(dec7);
    ui->label_8->setText(dec8);
    ui->label_9->setText(dec9);
}
