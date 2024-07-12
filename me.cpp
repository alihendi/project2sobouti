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
#include "ui_me.h"

me::me(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::me)
{
    ui->setupUi(this);
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
    QPixmap pix7("C://pj//profile.png");
    ui->label_7->setPixmap(pix7.scaled(70,70,Qt::KeepAspectRatio));
}

me::~me()
{
    delete ui;
}

void me::on_pushButton_clicked()
{
    MainWindow *w=new MainWindow;
    w->show();
    this->close();
}


void me::on_pushButton_2_clicked()
{
    mynet *w=new mynet;
    w->show();
    this->close();
}


void me::on_pushButton_3_clicked()
{
    jobs *w=new jobs;
    w->show();
    this->close();
}


void me::on_pushButton_4_clicked()
{
    massage *w=new massage;
    w->show();
    this->close();
}

