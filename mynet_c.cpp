#include "mynet_c.h"
#include "ui_mynet_c.h"
#include "mynet.h"
#include "ui_mynet.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"jobs.h"
#include"me.h"
#include "massage.h"
#include"ui_mynet.h"
#include "fstream"
#include "QFile"
#include"QTextStream"
#include "QMessageBox"
#include "QString"
#include "qstring.h"
#include<QTime>

Mynet_c::Mynet_c(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Mynet_c)
{
    ui->setupUi(this);


    ui->comboBox->addItem("me");
    ui->comboBox->addItem("Company");
    ui->comboBox->setCurrentIndex(1);
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



    QPixmap pix7("C://pj//net//6.png");
    ui->label_7->setPixmap(pix7.scaled(40,40,Qt::KeepAspectRatio));
    QPixmap pix8("C://pj//net//7.png");
    ui->label_8->setPixmap(pix8.scaled(40,40,Qt::KeepAspectRatio));
    QPixmap pix9("C://pj//prof.png");
    ui->label_9->setPixmap(pix9.scaled(40,40,Qt::KeepAspectRatio));
    QPixmap pix10("C://pj//net//9.png");
    ui->label_10->setPixmap(pix10.scaled(40,40,Qt::KeepAspectRatio));
    QPixmap pix11("C://pj//me.png");
    ui->label_11->setPixmap(pix11.scaled(40,40,Qt::KeepAspectRatio));

}

Mynet_c::~Mynet_c()
{
    delete ui;
}

void Mynet_c::on_pushButton_clicked()
{
    MainWindow *w=new MainWindow;
    w->show();
    this->close();
}



void Mynet_c::on_pushButton_3_clicked()
{
    jobs *w=new jobs;
    w->show();
    this->close();
}


void Mynet_c::on_pushButton_4_clicked()
{
    massage *w=new massage;
    w->show();
    this->close();
}


void Mynet_c::on_pushButton_5_clicked()
{
    me *w=new me;
    w->show();
    this->close();
}




void Mynet_c::on_pushButton_6_clicked()
{
    ui->groupBox_3->close();
}


void Mynet_c::on_pushButton_7_clicked()
{
    ui->groupBox_4->close();
}


void Mynet_c::on_pushButton_8_clicked()
{
    ui->groupBox_5->close();
}


void Mynet_c::on_pushButton_9_clicked()
{
    ui->groupBox_6->close();
}


void Mynet_c::on_pushButton_10_clicked()
{
    ui->groupBox_7->close();
}


void Mynet_c::on_comboBox_currentIndexChanged(int index)
{
    if (index == 0)
    {
        Mynet_c* mnc = new Mynet_c;
        mnc->show();
        this->close();
    }
}

