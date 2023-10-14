#include "admin.h"
#include "ui_admin.h"
#include <QString>
#include <QMessageBox>
#include <QDebug>
#include "adminmanege.h"

admin::admin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
}

admin::~admin()
{
    delete ui;
}



void admin::on_pushButton_2_clicked()
{
    this->hide();
}




void admin::on_btn_admins_clicked()
{

    //将账号密码赋值
    QString adminnum = ui->Ui_admin::lineEdit->text();
    QString adminpasswd = ui->Ui_admin::lineEdit_2->text();
    //将账号密码进行比对，若是管理员则登陆成功否则失败
 if((adminnum == "zzh" || adminnum == "ljt") && adminpasswd == "123")
    {
         (QMessageBox::Yes == QMessageBox::question(this,"提示","登录成功！欢迎您~",QMessageBox::Yes));
         this->hide();
         m_adminmanege.show();
    }
 else {
        (QMessageBox::Yes == QMessageBox::question(this,"提示","登陆失败！请重试！",QMessageBox::Yes));
 }
}
