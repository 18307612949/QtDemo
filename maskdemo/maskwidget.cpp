#include "maskwidget.h"
#include "qapplication.h"

MaskWidget *MaskWidget::self = 0;
MaskWidget::MaskWidget(QWidget *parent) : QWidget(parent)
{
    mainWidget = 0;
    setOpacity(0.7);
    setBgColor(QColor(0, 0, 0));

    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);

    //绑定全局事件,过滤弹窗窗体进行处理
    qApp->installEventFilter(this);
}

void MaskWidget::setMainWidget(QWidget *mainWidget)
{
    if (this->mainWidget != mainWidget) {
        this->mainWidget = mainWidget;
    }
}

void MaskWidget::setDialogNames(const QStringList &dialogNames)
{
    if (this->dialogNames != dialogNames) {
        this->dialogNames = dialogNames;
    }
}

void MaskWidget::setOpacity(double opacity)
{
    this->setWindowOpacity(opacity);
}

void MaskWidget::setBgColor(const QColor &bgColor)
{
    QPalette palette = this->palette();
    palette.setBrush(QPalette::Background, bgColor);
    this->setPalette(palette);
}

void MaskWidget::showEvent(QShowEvent *)
{
    if (mainWidget != 0) {
        this->setGeometry(mainWidget->geometry());
    }
}

bool MaskWidget::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::Show) {
        if (dialogNames.contains(obj->objectName())) {
            this->show();
            QWidget *w = (QWidget *)obj;
            w->activateWindow();
        }
    } else if (event->type() == QEvent::Hide) {
        if (dialogNames.contains(obj->objectName())) {
            this->hide();
        }
    }

    return QObject::eventFilter(obj, event);
}
