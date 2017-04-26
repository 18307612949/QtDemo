#ifndef FRMMENU_H
#define FRMMENU_H

#include <QWidget>

namespace Ui {
class frmMenu;
}

class frmMenu : public QWidget
{
    Q_OBJECT

public:
    explicit frmMenu(QWidget *parent = 0);
    ~frmMenu();

protected:
    void showEvent(QShowEvent *);
    bool eventFilter(QObject *, QEvent *);

private:
    Ui::frmMenu *ui;
};

#endif // FRMMENU_H
