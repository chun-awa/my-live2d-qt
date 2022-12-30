#ifndef MOUSEEVENTTHREAD_H
#define MOUSEEVENTTHREAD_H

#include <QThread>
#include <QDebug>
#include <QObject>
#include <QX11Info>
//#include <X11/Xlib.h>
#include <QRect>
#include <QPoint>
#include <iostream>
#include <X11/extensions/XInput2.h>
using namespace std;

class MouseEventThread : public QThread {
    Q_OBJECT
public:
    MouseEventThread(QRect screenRect, int winID, QObject *parent = nullptr);
    ~MouseEventThread();
private:
    void run();
    int queryCursor(int &relX, int &relY, int &absX, int &absY);

    Display *display = XOpenDisplay(0);
    Window rootWindow;
    int xi_opcode;
    QRect *canvasRect;
    Window appWindow;
    bool clicking;
signals:
    void mouseEvent(QPoint relPosition, QPoint absPosition);
    void mousePress(QPoint relPosition, QPoint absPosition);
    void mouseRelease(QPoint relPosition, QPoint absPosition);
};


#endif // MOUSEEVENTTHREAD_H
