#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"mynet.h"
#include"me.h"
#include"jobs.h"
#include "massage.h"
#include"ui_mynet.h"
#include "fstream"
#include "QFile"
#include"QTextStream"
#include "QMessageBox"
#include "QString"
#include "qstring.h"
#include<QTime>
#include "comment.h"
#include "ui_comment.h"

MainWindow::MainWindow(QWidget *parent):
     QMainWindow(parent),
     ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->groupBox_12->hide();
    ui->groupBox_17->hide();
    ui->groupBox_19->hide();
    ui->groupBox_20->hide();

    QPixmap pix("C://pj//home.png");
    ui->label->setPixmap(pix.scaled(40,40,Qt::KeepAspectRatio));
    QPixmap pix2("C://pj//network.png");
    ui->label_2->setPixmap(pix2.scaled(40,40,Qt::KeepAspectRatio));
    QPixmap pix3("C://pj//job.png");
    ui->label_3->setPixmap(pix3.scaled(40,40,Qt::KeepAspectRatio));
    QPixmap pix4("C://pj//message.png");
    ui->label_4->setPixmap(pix4.scaled(40,40,Qt::KeepAspectRatio));
    QPixmap pix5("C://pj//me.png");
    ui->label_5->setPixmap(pix5.scaled(40,40,Qt::KeepAspectRatio));
    QPixmap pix6("C://pj//in.png");
    ui->label_6->setPixmap(pix6.scaled(40,40,Qt::KeepAspectRatio));
    QPixmap pix7("C://pj//prof.png");
    ui->label_8->setPixmap(pix7.scaled(80,80,Qt::KeepAspectRatio));
    QPixmap pix12("C://pj//net//7.png");
    ui->label_18->setPixmap(pix12.scaled(80,80,Qt::KeepAspectRatio));
    QPixmap pix13("C://pj//net//1.png");
    ui->label_24->setPixmap(pix13.scaled(80,80,Qt::KeepAspectRatio));
    QPixmap pix14("C://pj//net//6.png");
    ui->label_34->setPixmap(pix14.scaled(80,80,Qt::KeepAspectRatio));
    QPixmap pix15("C://pj//net//4.png");
    ui->label_35->setPixmap(pix15.scaled(80,80,Qt::KeepAspectRatio));



    QPixmap pix8("C://pj//like.png");
    ui->label_9->setPixmap(pix8.scaled(40,40,Qt::KeepAspectRatio));
    QPixmap pix9("C://pj//comment.png");
    ui->label_10->setPixmap(pix9.scaled(20,20,Qt::KeepAspectRatio));
    QPixmap pix10("C://pj//repost.png");
    ui->label_11->setPixmap(pix10.scaled(30,30,Qt::KeepAspectRatio));
    QPixmap pix11("C://pj//send.png");
    ui->label_12->setPixmap(pix11.scaled(40,40,Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    mynet *w=new mynet;
    w->show();
    this->close();
}

void MainWindow::on_pushButton_3_clicked()
{
    jobs *w=new jobs;
    w->show();
    this->close();
}


void MainWindow::on_pushButton_4_clicked()
{
    massage *w=new massage;
    w->show();
    this->close();
}

void MainWindow::on_pushButton_5_clicked()
{
    me *w=new me;
    w->show();
    this->close();
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->groupBox->close();
     ui->groupBox_3->close();
}

void MainWindow::on_pushButton_7_clicked()
{
    if(ui->radioButton->isChecked())
    {   ui->label_7->setText("followed");}
        else {
            ui->label_7->setText("follow");
        }
}





void MainWindow::on_pushButton_9_clicked()
{
    comment *w=new comment;
    w->show();
    this->close();
}


void MainWindow::on_pushButton_32_clicked()
{
    ui->groupBox_12->show();
    ui->groupBox_17->show();
    ui->groupBox_19->show();
    ui->groupBox_20->show();

}
