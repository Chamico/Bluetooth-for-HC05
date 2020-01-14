/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QLabel *_label_contronl;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *_label_bluetooth_switch;
    QRadioButton *radioButton_bluetooth_open;
    QRadioButton *radioButton_bluetooth_close;
    QVBoxLayout *verticalLayout_2;
    QLabel *_label_contronl_2;
    QListView *listView;
    QVBoxLayout *verticalLayout_6;
    QLabel *_label_connected_device;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *_label_connected_device_name;
    QLabel *label_connected_device_name;
    QHBoxLayout *horizontalLayout_5;
    QLabel *_label_connected_device_address;
    QLabel *label_connected_device_address_2;
    QVBoxLayout *verticalLayout;
    QLabel *_label_local_deviece;
    QHBoxLayout *horizontalLayout;
    QLabel *_label_local_device_name;
    QLabel *label_local_device_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *_label_local_device_address;
    QLabel *label_local_device_address;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *_label_system_output;
    QPlainTextEdit *pte_system_output;
    QHBoxLayout *horizontalLayout_7;
    QLabel *_label_system_error;
    QPlainTextEdit *pte_system_error;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1285, 790);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(270, 81, 705, 628));
        verticalLayout_8 = new QVBoxLayout(widget);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        _label_contronl = new QLabel(widget);
        _label_contronl->setObjectName(QString::fromUtf8("_label_contronl"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        _label_contronl->setFont(font);

        verticalLayout_4->addWidget(_label_contronl);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        _label_bluetooth_switch = new QLabel(widget);
        _label_bluetooth_switch->setObjectName(QString::fromUtf8("_label_bluetooth_switch"));
        QFont font1;
        font1.setPointSize(12);
        _label_bluetooth_switch->setFont(font1);

        horizontalLayout_3->addWidget(_label_bluetooth_switch);

        radioButton_bluetooth_open = new QRadioButton(widget);
        radioButton_bluetooth_open->setObjectName(QString::fromUtf8("radioButton_bluetooth_open"));
        radioButton_bluetooth_open->setFont(font1);

        horizontalLayout_3->addWidget(radioButton_bluetooth_open);

        radioButton_bluetooth_close = new QRadioButton(widget);
        radioButton_bluetooth_close->setObjectName(QString::fromUtf8("radioButton_bluetooth_close"));
        radioButton_bluetooth_close->setFont(font1);

        horizontalLayout_3->addWidget(radioButton_bluetooth_close);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        _label_contronl_2 = new QLabel(widget);
        _label_contronl_2->setObjectName(QString::fromUtf8("_label_contronl_2"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        _label_contronl_2->setFont(font2);

        verticalLayout_2->addWidget(_label_contronl_2);

        listView = new QListView(widget);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout_2->addWidget(listView);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_7->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        _label_connected_device = new QLabel(widget);
        _label_connected_device->setObjectName(QString::fromUtf8("_label_connected_device"));
        _label_connected_device->setFont(font);

        verticalLayout_6->addWidget(_label_connected_device);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        _label_connected_device_name = new QLabel(widget);
        _label_connected_device_name->setObjectName(QString::fromUtf8("_label_connected_device_name"));
        _label_connected_device_name->setFont(font1);

        horizontalLayout_4->addWidget(_label_connected_device_name);

        label_connected_device_name = new QLabel(widget);
        label_connected_device_name->setObjectName(QString::fromUtf8("label_connected_device_name"));
        label_connected_device_name->setFont(font1);

        horizontalLayout_4->addWidget(label_connected_device_name);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        _label_connected_device_address = new QLabel(widget);
        _label_connected_device_address->setObjectName(QString::fromUtf8("_label_connected_device_address"));
        _label_connected_device_address->setFont(font1);

        horizontalLayout_5->addWidget(_label_connected_device_address);

        label_connected_device_address_2 = new QLabel(widget);
        label_connected_device_address_2->setObjectName(QString::fromUtf8("label_connected_device_address_2"));
        label_connected_device_address_2->setFont(font1);

        horizontalLayout_5->addWidget(label_connected_device_address_2);


        verticalLayout_5->addLayout(horizontalLayout_5);


        verticalLayout_6->addLayout(verticalLayout_5);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        _label_local_deviece = new QLabel(widget);
        _label_local_deviece->setObjectName(QString::fromUtf8("_label_local_deviece"));
        _label_local_deviece->setFont(font);

        verticalLayout->addWidget(_label_local_deviece);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        _label_local_device_name = new QLabel(widget);
        _label_local_device_name->setObjectName(QString::fromUtf8("_label_local_device_name"));
        _label_local_device_name->setFont(font1);

        horizontalLayout->addWidget(_label_local_device_name);

        label_local_device_name = new QLabel(widget);
        label_local_device_name->setObjectName(QString::fromUtf8("label_local_device_name"));
        label_local_device_name->setFont(font1);

        horizontalLayout->addWidget(label_local_device_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        _label_local_device_address = new QLabel(widget);
        _label_local_device_address->setObjectName(QString::fromUtf8("_label_local_device_address"));
        _label_local_device_address->setFont(font1);

        horizontalLayout_2->addWidget(_label_local_device_address);

        label_local_device_address = new QLabel(widget);
        label_local_device_address->setObjectName(QString::fromUtf8("label_local_device_address"));
        label_local_device_address->setFont(font1);

        horizontalLayout_2->addWidget(label_local_device_address);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_7->addLayout(verticalLayout);


        verticalLayout_8->addLayout(verticalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        _label_system_output = new QLabel(widget);
        _label_system_output->setObjectName(QString::fromUtf8("_label_system_output"));
        _label_system_output->setFont(font);

        horizontalLayout_6->addWidget(_label_system_output);

        pte_system_output = new QPlainTextEdit(widget);
        pte_system_output->setObjectName(QString::fromUtf8("pte_system_output"));
        pte_system_output->setReadOnly(true);
        pte_system_output->setCenterOnScroll(true);

        horizontalLayout_6->addWidget(pte_system_output);


        horizontalLayout_8->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        _label_system_error = new QLabel(widget);
        _label_system_error->setObjectName(QString::fromUtf8("_label_system_error"));
        _label_system_error->setFont(font);

        horizontalLayout_7->addWidget(_label_system_error);

        pte_system_error = new QPlainTextEdit(widget);
        pte_system_error->setObjectName(QString::fromUtf8("pte_system_error"));
        pte_system_error->setReadOnly(true);
        pte_system_error->setCenterOnScroll(true);

        horizontalLayout_7->addWidget(pte_system_error);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout_8->addLayout(horizontalLayout_8);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1285, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        _label_contronl->setText(QCoreApplication::translate("MainWindow", "\346\216\247\345\210\266", nullptr));
        _label_bluetooth_switch->setText(QCoreApplication::translate("MainWindow", "\350\223\235\347\211\231\345\274\200\345\205\263\357\274\232", nullptr));
        radioButton_bluetooth_open->setText(QCoreApplication::translate("MainWindow", "\345\274\200", nullptr));
        radioButton_bluetooth_close->setText(QCoreApplication::translate("MainWindow", "\345\205\263", nullptr));
        _label_contronl_2->setText(QCoreApplication::translate("MainWindow", "\345\217\257\347\224\250\350\256\276\345\244\207\345\210\227\350\241\250", nullptr));
        _label_connected_device->setText(QCoreApplication::translate("MainWindow", "\345\267\262\350\277\236\346\216\245\350\256\276\345\244\207", nullptr));
        _label_connected_device_name->setText(QCoreApplication::translate("MainWindow", "\345\267\262\350\277\236\346\216\245\350\256\276\345\244\207\345\220\215\347\247\260\357\274\232", nullptr));
        label_connected_device_name->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        _label_connected_device_address->setText(QCoreApplication::translate("MainWindow", "\345\267\262\350\277\236\346\216\245\350\256\276\345\244\207\345\234\260\345\235\200\357\274\232", nullptr));
        label_connected_device_address_2->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        _label_local_deviece->setText(QCoreApplication::translate("MainWindow", "\346\234\254\345\234\260\350\256\276\345\244\207", nullptr));
        _label_local_device_name->setText(QCoreApplication::translate("MainWindow", "\346\234\254\345\234\260\350\256\276\345\244\207\345\220\215\347\247\260\357\274\232", nullptr));
        label_local_device_name->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        _label_local_device_address->setText(QCoreApplication::translate("MainWindow", "\346\234\254\345\234\260\350\256\276\345\244\207\345\234\260\345\235\200\357\274\232", nullptr));
        label_local_device_address->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        _label_system_output->setText(QCoreApplication::translate("MainWindow", "System Output:", nullptr));
        pte_system_output->setPlainText(QCoreApplication::translate("MainWindow", "output", nullptr));
        _label_system_error->setText(QCoreApplication::translate("MainWindow", "Error:", nullptr));
        pte_system_error->setPlainText(QCoreApplication::translate("MainWindow", "none", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
