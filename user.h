#ifndef USER_H
#define USER_H

#include <QWidget>
#include "register.h"
#include "user_camera.h"

namespace Ui {
class user;
}

class user : public QWidget
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = nullptr);
    ~user();

private slots:
    void on_btn_register_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::user *ui;
        Register m_register;
        User_camera m_user_camera;
};

#endif // USER_H
