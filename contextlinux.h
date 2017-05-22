#ifndef CONTEXTLINUX_H
#define CONTEXTLINUX_H

#include "contextinterface.h"

#include <X11/Xlib.h>

#include <GL/gl.h>
#include <GL/glx.h>

class ContextLinux : public ContextInterface
{
public:
    ContextLinux();
    ~ContextLinux();

    virtual void create();
    virtual void create(ContextInterface*, WId);
    virtual void makeCurrent();
    virtual void doneCurrent();
    virtual void swapBuffers();

private:
     GLXContext m_ctx;
     Window m_win;
     Display* m_display;
     Colormap m_cmap;
};

#endif // CONTEXTLINUX_H
