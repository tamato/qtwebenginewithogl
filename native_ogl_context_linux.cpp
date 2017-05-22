#include "native_ogl_context.h"
#include "contextlinux.h"

NativeContext::NativeContext()
    : ctx(nullptr)
{

}

NativeContext::~NativeContext()
{
    delete ctx;
    ctx = nullptr;
}

void NativeContext::create()
{
    ctx = new ContextLinux();
    ctx->create();
}

void NativeContext::create(NativeContext* shared, WId winId)
{
    ctx = new ContextLinux();
    ctx->create(shared->ctx, winId);
}

void NativeContext::makeCurrent()
{
    ctx->makeCurrent();
}

void NativeContext::doneCurrent()
{
    ctx->doneCurrent();
}

void NativeContext::swapBuffers()
{
    ctx->swapBuffers();
}
