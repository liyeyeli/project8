#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_admin_clicked()
{
    m_admin.show();
}

void MainWindow::on_btn_user_clicked()
{
    m_user.show();
}

void MainWindow::on_btn_exit_clicked()
{
    exit(0);
}
