#include "head.h"




void qgluPerspective(GLdouble fovy, GLdouble aspect, GLdouble zNear, GLdouble zFar)
{
    const GLdouble ymax = zNear * tan(qDegreesToRadians(fovy) / 2.0);
    const GLdouble ymin = -ymax;
    const GLdouble xmin = ymin * aspect;
    const GLdouble xmax = ymax * aspect;
    glFrustum(xmin, xmax, ymin, ymax, zNear, zFar);
}

GLWidget::GLWidget(QWidget *parent)
    : QGLWidget(parent)
    , xRot(0.0f)
    , yRot(0.0f)
    , zRot(0.0f)
{
    // 设置画面的双缓冲和深度缓存
    setFormat(QGLFormat(QGL::DoubleBuffer | QGL::DepthBuffer));


    timer_update = new QTimer();

    timer_update->start();
    timer_update->setInterval(100);
}

GLWidget::~GLWidget()
{

}

void GLWidget::initializeGL()
{
    // 启用阴影平滑
    glShadeModel(GL_SMOOTH);
    // 白色背景
    glClearColor(1.0, 1.0, 1.0, 1.0);
    // 设置深度缓存
    glClearDepth(1.0);
    // 启用深度测试
    glEnable(GL_DEPTH_TEST);
    // 所作深度测试的类型
    glDepthFunc(GL_LEQUAL);
    // 告诉系统对透视进行修正
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
    // 启用2D纹理映射
    glEnable(GL_TEXTURE_2D);

}

void GLWidget::paintGL()
{
/*static int count = 0;
    //
    //            glColor3f(1.0f, 1.0f, 0.0f);                    //黄色
    //glColor3f(1.0f, 0.0f, 1.0f);       //紫色
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //清除屏幕和深度缓存

    glLoadIdentity();                                   //重置模型观察矩阵
    glTranslatef(0, 0.0f, -4.0f);                    //右移1.5单位，并移入屏幕6.0单位
    //glRotatef(45, 1.0f, 0.0f, 0.0f);               //绕x轴旋转四边形
    glRotatef(count, 0.0f, 1.0f, 0.0f);               //绕y轴旋转四边形
    glRotatef(45, 0.0f, 0.0f, 1.0f);               //绕z轴旋转四边形
    qDebug() << count;
    count++;


    glBegin(GL_LINES);                                  //开始绘制立方体

    glColor3f(1.0f, 0.0f, 0.0f);       //红色  X
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(1.0f, 0.0f, 0.0f);


    glColor3f(0.0f, 0.0f, 1.0f);       //蓝色   Y
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 1.0f, 0.0f);

    glColor3f(0.0f, 1.0f, 0.0f);       //绿色   Z
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 1.0f);


    glEnd();      */                                      //立方体绘制结束




}

void GLWidget::resizeGL(int width, int height)
{
    // 防止窗口大小变为0
    if ( height == 0 )
    {
        height = 1;
    }
    // 重置当前的视口
    glViewport(0, 0, (GLint)width, (GLint)height);
    // 选择投影矩阵
    glMatrixMode(GL_PROJECTION);
    // 重置投影矩阵
    glLoadIdentity();
    // 设置视口的大小
    qgluPerspective(45.0, (GLdouble)width / (GLdouble)height, 0.1, 100.0);
    //qgluPerspective(45,45,45,45);
    // 选择模型观察矩阵
    glMatrixMode(GL_MODELVIEW);
    // 重置投影矩阵
    glLoadIdentity();
}

void GLWidget::UpdateOpenGL(int x,int y, int z){

//gyrox_max:  8245   gyrox_min:  -8315
//gyroy_max:  7443   gyroy_min:  -9259
//gyroz_max:  7855   gyroz_min:  -6286

        //
        //            glColor3f(1.0f, 1.0f, 0.0f);                    //黄色
        //glColor3f(1.0f, 0.0f, 1.0f);       //紫色
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //清除屏幕和深度缓存

        glLoadIdentity();                                   //重置模型观察矩阵
        glTranslatef(0, 0.0f, -4.0f);                    //移入屏幕5.0单位
        glRotatef(x * 0.0437, 1.0f, 0.0f, 0.0f);               //绕x轴旋转四边形
        glRotatef(-z * 0.0437, 0.0f, 1.0f, 0.0f);               //绕y轴旋转四边形
        glRotatef(y * 0.0437, 0.0f, 0.0f, 1.0f);               //绕z轴旋转四边形



        glBegin(GL_LINES);                                  //开始绘制立方体

        glColor3f(1.0f, 0.0f, 0.0f);       //红色  X
        glVertex3f(0.0f, 0.0f, 0.0f);
        glVertex3f(1.0f, 0.0f, 0.0f);


        glColor3f(0.0f, 0.0f, 1.0f);       //蓝色   Y
        glVertex3f(0.0f, 0.0f, 0.0f);
        glVertex3f(0.0f, 1.0f, 0.0f);

        glColor3f(0.0f, 1.0f, 0.0f);       //绿色   Z
        glVertex3f(0.0f, 0.0f, 0.0f);
        glVertex3f(0.0f, 0.0f, 1.0f);


        glEnd();                                            //立方体绘制结束

        update();

}

void GLWidget::GLWidgetStart(){
    initializeGL();
    paintGL();
}





