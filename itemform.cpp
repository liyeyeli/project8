#include "itemform.h"
#include "ui_itemform.h"

itemform::itemform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::itemform)
{
    ui->setupUi(this);
}

itemform::~itemform()
{
    delete ui;
}

void itemform::setStuInfo(int cardid,QString name,int uniname,QString roomnum)
{
    ui->lineEdit->setText(QString::number (cardid) );
    ui->lineEdit_2->setText(name) ;
    ui->lineEdit_3->setText(QString::number(uniname) );
    ui->lineEdit_4->setText(roomnum) ;
}
