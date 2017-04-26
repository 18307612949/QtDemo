#include "frmmenu.h"
#include "ui_frmmenu.h"
#include "qdebug.h"

frmMenu::frmMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frmMenu)
{
    ui->setupUi(this);

    QList<QLabel *> labs = ui->widgetMenu->findChildren<QLabel *>();
    foreach (QLabel *lab, labs) {
        lab->installEventFilter(this);
    }
}

frmMenu::~frmMenu()
{
    delete ui;
}

void frmMenu::showEvent(QShowEvent *)
{
    this->move(-10, -5);
}

bool frmMenu::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonPress) {
        QLabel *lab = (QLabel *)obj;
        qDebug() << "click" << lab->objectName() << lab->text();
    }
    return QWidget::eventFilter(obj, event);
}
