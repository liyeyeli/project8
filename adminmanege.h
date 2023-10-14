#ifndef ADMINMANEGE_H
#define ADMINMANEGE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "itemform.h"


namespace Ui {
class adminmanege;
}

class adminmanege : public QWidget
{
    Q_OBJECT

public:
    explicit adminmanege(QWidget *parent = nullptr);
    ~adminmanege();


private slots:
    void on_pushButton_clicked();

    void on_add_pushButton_clicked();

    void on_updata_pushButton_clicked();

    void on_delete_pushButton_clicked();

    void on_search_pushButton_clicked();

    void on_add_pushButton_2_clicked();

    void on_add_pushButton_3_clicked();

private:
    Ui::adminmanege *ui;
    QSqlDatabase db;
};

#endif // ADMINMANEGE_H
