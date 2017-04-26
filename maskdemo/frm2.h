#ifndef FRM2_H
#define FRM2_H

#include <QWidget>

namespace Ui {
class frm2;
}

class frm2 : public QWidget
{
    Q_OBJECT

public:
    explicit frm2(QWidget *parent = 0);
    ~frm2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::frm2 *ui;
};

#endif // FRM2_H
