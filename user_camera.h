#ifndef USER_CAMERA_H
#define USER_CAMERA_H

#include <QWidget>

namespace Ui {
class User_camera;
}

class User_camera : public QWidget
{
    Q_OBJECT

public:
    explicit User_camera(QWidget *parent = nullptr);
    ~User_camera();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::User_camera *ui;
};

#endif // USER_CAMERA_H
