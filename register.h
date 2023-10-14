#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();
private slots:
    void on_btn_return_clicked();

    void on_pushButton_clicked();

private:
    Ui::Register *ui;
    QSqlDatabase db;
};

#endif // REGISTER_H
