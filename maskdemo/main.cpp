#include "widget.h"
#include <QApplication>
#include "qtextcodec.h"
#include "appinit.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //设置编码,保证各平台各编译器不乱码
#if (QT_VERSION <= QT_VERSION_CHECK(5,0,0))
#if _MSC_VER
    QTextCodec *codec = QTextCodec::codecForName("gbk");
#else
    QTextCodec *codec = QTextCodec::codecForName("utf-8");
#endif
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForTr(codec);
#endif

    //初始化,全局事件过滤器,用于无边框窗体拖动,这样不用每个无边框窗体都写重复代码
    AppInit::Instance()->start();

    Widget w;
    w.show();

    return a.exec();
}
