#include "comment.h"
#include "ui_comment.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"mynet.h"
#include"jobs.h"
#include"jobs_c.h"
#include "massage.h"
#include"me.h"
#include"ui_mynet.h"
#include "fstream"
#include "QFile"
#include"QTextStream"
#include "QMessageBox"
#include "QString"
#include "qstring.h"
#include<QTime>
#include "ui_jobs.h"


comment::comment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::comment)
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
    QPixmap pix7("C://pj//prof.png");
    ui->label_8->setPixmap(pix7.scaled(60,60,Qt::KeepAspectRatio));



    QPixmap pix9("C://pj//comment.png");
    ui->label_10->setPixmap(pix9.scaled(50,50,Qt::KeepAspectRatio));
    QPixmap pix16("C://pj//net//1.png");
    ui->label_16->setPixmap(pix16.scaled(60,60,Qt::KeepAspectRatio));

}

comment::~comment()
{
    delete ui;
}

void comment::on_pushButton_clicked()
{
    MainWindow *w=new MainWindow;
    w->show();
    this->close();
}


void comment::on_pushButton_2_clicked()
{
    mynet *w=new mynet;
    w->show();
    this->close();
}


void comment::on_pushButton_3_clicked()
{
    jobs *w=new jobs;
    w->show();
    this->close();
}


void comment::on_pushButton_4_clicked()
{
    massage *w=new massage;
    w->show();
    this->close();
}


void comment::on_pushButton_5_clicked()
{
    me *w=new me;
    w->show();
    this->close();
}


void comment::on_pushButton_6_clicked()
{
    ui->groupBox->close();
}


void comment::on_pushButton_7_clicked()
{
    if(ui->radioButton->isChecked())
    {   ui->label_7->setText("followed");}
        else {
            ui->label_7->setText("follow");
        }
}

