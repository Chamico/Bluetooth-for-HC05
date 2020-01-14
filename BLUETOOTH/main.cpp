#include "mainwindow.h"



int main(int argc, char *argv[])
{

    QApplication application(argc, argv);
    MainWindow window;
    window.show();

    window.setWindowTitle("基于Qt的机器人数据可视化分析");

    return application.exec();
}


