#ifndef HEAD_H
#define HEAD_H

class Uart;
class Widget;
class GLWidget;

#include "QDebug"

#include <QLabel>
#include <QRadioButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QComboBox>
#include <QPlainTextEdit>
#include <QtCharts/QChartView>//显示图表
#include <QtCharts/QLineSeries>//线系列
#include <QtCharts/QValueAxis>
#include <QSpinBox>

#include <QOpenGLWidget>
#include <GL/gl.h>
#include <GL/glu.h>
#include <QOpenGLWidget>
#include <QOpenGLFunctions_4_5_Compatibility>
#include <QOpenGLFunctions_4_5_Core>
#include <QGLWidget>


#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QByteArray>
#include <QMessageBox>
#include <QTimer>
#include <QString>

#include <qmath.h>

#include <QMainWindow>

#include "Uart/uart.h"
#include "Widget/widget.h"
#include "GLWidget/glwidget.h"




#endif // HEAD_H
