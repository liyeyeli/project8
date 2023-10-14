#include "user.h"
#include "ui_user.h"
#include "ui_register.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QLineEdit>
#include <QDebug>

user::user(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::user)
{
    ui->setupUi(this);
}

user::~user()
{
    delete ui;
}

void user::on_btn_register_clicked()
{

    m_register.show();
}

void user::on_pushButton_clicked()
{





//    if(//查询数据库，有卡号存在进入，否则失败)
//       {
//            (QMessageBox::Yes == QMessageBox::question(this,"提示","登录成功！欢迎您~",QMessageBox::Yes));
//            this->hide();
//            m_adminmanege.show();
//       }
//    else {
//           (QMessageBox::Yes == QMessageBox::question(this,"提示","登陆失败！请重试！",QMessageBox::Yes));
//    }
    m_user_camera.show();
}

void user::on_pushButton_2_clicked()
{
    this->hide();
}
