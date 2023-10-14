#include "adminmanege.h"
#include "ui_adminmanege.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QLineEdit>
#include <QDebug>
#include <QSqlError>
#include "itemform.h"
#include <QListWidgetItem>

adminmanege::adminmanege(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adminmanege)
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

adminmanege::~adminmanege()
{
    delete ui;
}

void adminmanege::on_pushButton_clicked()
{
    this->hide();
}

void adminmanege::on_add_pushButton_clicked()
{

}

void adminmanege::on_updata_pushButton_clicked()
{

}

void adminmanege::on_delete_pushButton_clicked()
{
    QSqlQuery query;
    int id =ui->cardid_lineEdit->text().toInt();
    QString sqlDelete = QString( "delete from Student where cardid = %1;" ).arg(id);
    if( ! query.exec (sqlDelete))
    {
     qDebug()<< "Error delete into data" << db.lastError();
    }
    ui->listWidget->takeItem(id-1);
}

void adminmanege::on_search_pushButton_clicked()
{

}

void adminmanege::on_add_pushButton_2_clicked()
{
    ui->listWidget->clear();
    QSqlQuery query;
    //[1]向数据库下达查询数据的命令
    QString sqlSelect = QString("select * from Student;");
    //[1]查询数据库数据
    if ( ! query.exec (sqlSelect) )
    {
    qDebug()<<"Error query into data" <<db.lastError ( );
    }
    //[2]遍历数据库记录
    while (query.next()) {
    int id = query.value ("cardid").toInt( );
    QString name = query.value ( "name").toString();
    int uniname = query.value("unitnum").toInt( );
    QString roomnum = query.value ("roomnum").toString();

    itemform* staffitem = new itemform;
    staffitem->setStuInfo(id,name,uniname,roomnum);
    QListWidgetItem* item = new QListWidgetItem;
    item->setSizeHint(QSize(574,51) );
    ui->listWidget->addItem(item) ;
    ui->listWidget->setItemWidget(item,staffitem);
    }
}

void adminmanege::on_add_pushButton_3_clicked()
{
    QSqlQuery query;
    QString id =ui->cardid_lineEdit->text();
    QString name =ui->name_lineEdit->text( );
    QString unit = ui->unit_lineEdit->text();
    QString roomnum = ui->roomnum_lineEdit->text();
    //[2]通过数据库接口的访问，将数据插入的数据库中QsqlQuery query;
    query.prepare("INSERT INTO Student(cardid,name,unitnum,roomnum) "
                  "VALUES (:cardid,:name,:unitnum,:roomnum)");
    query.bindValue(":cardid", id);
    query.bindValue(":name",name);
    query.bindValue(":unitnum",unit);
    query.bindValue(":roomnum", roomnum);
    if( !query.exec())
    {
    qDebug() <<"Error insert into data" <<db.lastError();
    }
    else {
        qDebug() <<" insert into data ok！";
    }
    ui->cardid_lineEdit->clear();
    ui->name_lineEdit->clear();
    ui->unit_lineEdit->clear();
    ui->roomnum_lineEdit->clear();
}
