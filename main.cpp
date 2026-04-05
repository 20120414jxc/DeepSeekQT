#include "mainwindow.h"
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    // 启用高DPI支持（高清屏幕），必须在 QApplication 实例化之前调用
    QApplication::setHighDpiScaleFactorRoundingPolicy(Qt::HighDpiScaleFactorRoundingPolicy::PassThrough);

    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/icons/deepseek-color.png"));

    MainWindow w;
    w.show();

    return a.exec();
}
