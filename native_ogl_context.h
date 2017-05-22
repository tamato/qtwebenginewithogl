#ifndef CREATEOGLCONTEXT_H
#define CREATEOGLCONTEXT_H

#include "contextinterface.h"

class NativeContext
{
public:
    NativeContext();
    ~NativeContext();

    void create();
    void create(NativeContext* shared, WId winId);
    void makeCurrent();
    void doneCurrent();
    void swapBuffers();

private:
    ContextInterface *ctx;
};


#endif // CREATEOGLCONTEXT_H
