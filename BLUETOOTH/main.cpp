#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow main_window_;
    main_window_.setWindowTitle("基于QT的机器人数据可视化分析");
    main_window_.resize(1200,800);
    main_window_.show();

    return a.exec();
}
