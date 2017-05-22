#include <QtWidgets>
#include "testglwindow.h"

NativeContext* TestGLWindow::m_SharedCtx(nullptr);

TestGLWindow::TestGLWindow()
    : m_Ctx(nullptr)
{
    if (nullptr == m_SharedCtx){
        m_SharedCtx = new NativeContext;
        m_SharedCtx->create();
    }

    m_Ctx = new NativeContext;
    m_Ctx->create(m_SharedCtx, winId());
}

void TestGLWindow::paintEvent(QPaintEvent* /*event*/)
{

}
