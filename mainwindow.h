#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "admin.h"
#include "register.h"
#include "user.h"
#include "first.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_btn_admin_clicked();

    void on_btn_user_clicked();

    void on_btn_exit_clicked();

private:
    Ui::MainWindow *ui;
    admin m_admin;
    user m_user;
    Register m_register;
    adminmanege m_adminmanege;
    first m_first;

};

#endif // MAINWINDOW_H
