#ifndef FRM1_H
#define FRM1_H

#include <QWidget>

namespace Ui {
class frm1;
}

class frm1 : public QWidget
{
    Q_OBJECT

public:
    explicit frm1(QWidget *parent = 0);
    ~frm1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::frm1 *ui;
};

#endif // FRM1_H
