#include "frm2.h"
#include "ui_frm2.h"

frm2::frm2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frm2)
{
    ui->setupUi(this);
    this->setProperty("CanMove", true);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);
}

frm2::~frm2()
{
    delete ui;
}

void frm2::on_pushButton_clicked()
{
    this->close();
}
