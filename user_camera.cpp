#include "user_camera.h"
#include "ui_user_camera.h"

User_camera::User_camera(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::User_camera)
{
    ui->setupUi(this);
}

User_camera::~User_camera()
{
    delete ui;
}

void User_camera::on_pushButton_2_clicked()
{
    this->hide();
}
