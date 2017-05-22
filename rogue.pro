QT += widgets webenginewidgets

HEADERS = window.h \
    movementtransition.h \
    contextinterface.h \
    contextlinux.h \
    native_ogl_context.h \
    testglwindow.h

SOURCES = main.cpp \
    window.cpp \
    native_ogl_context_linux.cpp \
    contextlinux.cpp \
    testglwindow.cpp

win:SOURCES += createoglcontext_win.cpp
unix:SOURCES +=

unix:LIBS += -lX11

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/statemachine/rogue
INSTALLS += target
