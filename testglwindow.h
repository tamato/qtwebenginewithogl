#ifndef GLWINDOW_H
#define GLWINDOW_H

#include <QWidget>

#include "native_ogl_context.h"

class TestGLWindow : public QWidget
{
    Q_OBJECT

public:
    TestGLWindow();

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

    NativeContext* m_Ctx;
    static NativeContext* m_SharedCtx;
};

#endif // GLWINDOW_H
