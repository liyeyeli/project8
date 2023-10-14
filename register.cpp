#include "register.h"
#include "ui_register.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QLineEdit>
#include <QDebug>
#include <QSqlError>
#include <QString>

Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    // db.setDatabaseName("/home/incipe/nfs/data.db");
    db.setDatabaseName("data.db");
    if (!db.open()){
         qDebug()<<"Error failer to open" <<db.lastError();
    }else {
        qDebug()<<"database open OK! ";
       }

}

Register::~Register()
{
    delete ui;
}
void Register::on_btn_return_clicked()
{
    this->hide();
}

void Register::on_pushButton_clicked()
{

    qDebug() << QSqlDatabase::drivers();
    QString userName = ui->Ui_Register::lineEdit_3->text();
    QString unitnum = ui->Ui_Register::lineEdit->text();
    QString roomnum = ui->Ui_Register::lineEdit_2->text();
    QString cardID  = "113";
     QSqlQuery q;
     q.prepare("INSERT INTO Student(cardid,name,unitnum,roomnum) "
                   "VALUES (:cardid,:name,:unitnum,:roomnum)");
     q.bindValue(":cardid", cardID);
     q.bindValue(":name", userName);
     q.bindValue(":unitnum", unitnum);
     q.bindValue(":roomnum", roomnum);
     if( !q.exec())
     {
     qDebug() <<"Error insert into data" <<db.lastError();
     }
     else {
         qDebug() <<" insert into data ok！";
     }

//     QString sqlselect = QString("select* from Student; ");
//     if ( !q.exec(sqlselect))
//     {
//        qDebug() << "insert data error" <<db.lastError();
//     }
//     else{
//         while (q.next())
//            {
//                qDebug() <<q.value ("name").toString();
//                 qDebug() << q.value ("unitnum").toInt();
//            }
//         }


       // ui->Ui_Register::label_2->setText(q.value ("name").toString());

        if(QMessageBox::Yes==QMessageBox::question(this,"提示","注册成功！",QMessageBox::Yes));
        this->hide();
}
