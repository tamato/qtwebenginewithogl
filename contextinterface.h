#ifndef CONTEXTINTERFACE_H
#define CONTEXTINTERFACE_H

struct ContextInterface
{
    virtual void create() = 0;
    virtual void create(ContextInterface*) = 0;
    virtual void makeCurrent() = 0;
    virtual void doneCurrent() = 0;
    virtual void swapBuffers() = 0;
};

#endif // CONTEXTINTERFACE_H
