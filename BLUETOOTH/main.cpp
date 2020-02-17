#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow mainwindow;
    mainwindow.setWindowTitle("基于QT的机器人数据可视化分析");
    mainwindow.show();
    return a.exec();
}
