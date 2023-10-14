#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>
#include "adminmanege.h"

namespace Ui {
class admin;
}

class admin : public QWidget
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

private slots:
    void on_pushButton_2_clicked();

    void on_btn_admins_clicked();

private:
    Ui::admin *ui;
    adminmanege m_adminmanege;
};

#endif // ADMIN_H
