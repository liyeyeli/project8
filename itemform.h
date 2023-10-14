#ifndef ITEMFORM_H
#define ITEMFORM_H

#include <QWidget>

namespace Ui {
class itemform;
}

class itemform : public QWidget
{
    Q_OBJECT

public:
    explicit itemform(QWidget *parent = nullptr);
    ~itemform();

    void setStuInfo(int cardid,QString name,int uniname,QString roomnum);

private:
    Ui::itemform *ui;
};

#endif // ITEMFORM_H
