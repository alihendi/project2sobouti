#include "massagesent.h"
#include "ui_massagesent.h"

massagesent::massagesent(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::massagesent)
{
    ui->setupUi(this);
}

massagesent::~massagesent()
{
    delete ui;
}
