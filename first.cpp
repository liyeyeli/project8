#include "first.h"
#include "ui_first.h"


first::first(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::first)
{
    ui->setupUi(this);
    //this->setBackgroundRole()
}

first::~first()
{
    delete ui;
}


void first::on_btn_first_clicked()
{

    this->hide();
}
