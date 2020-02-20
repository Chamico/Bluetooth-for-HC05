#ifndef GLWIDGET_H
#define GLWIDGET_H

#include "head.h"

class GLWidget : public QGLWidget
{
    Q_OBJECT

public:
    explicit GLWidget(QWidget *parent = nullptr);
    ~GLWidget();

    void GLWidgetStart();
    void UpdateOpenGL(int, int, int);

protected:
    // 设置渲染环境
    void initializeGL();
    // 绘制窗口
    void paintGL();
    // 响应窗口的大小变化
    void resizeGL(int width, int height);



private:

    // 旋转角度
    GLfloat  xRot;
    GLfloat  yRot;
    GLfloat  zRot;
    // 存储纹理
    GLuint texture[2];

    QTimer *timer_update;



private slots:


};
#endif // GLWIDGET_H
