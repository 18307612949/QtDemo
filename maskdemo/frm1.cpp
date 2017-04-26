#include "frm1.h"
#include "ui_frm1.h"

frm1::frm1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frm1)
{
    ui->setupUi(this);
    this->setProperty("CanMove", true);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);
}

frm1::~frm1()
{
    delete ui;
}

void frm1::on_pushButton_clicked()
{
    this->close();
}
