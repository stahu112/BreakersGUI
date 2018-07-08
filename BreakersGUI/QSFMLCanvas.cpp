#include "QSFMLCanvas.h"

QSFMLCanvas::QSFMLCanvas(QWidget* Parent) : QWidget(Parent),
    myInitialized (false)
{
    // Setup some states to allow direct rendering into the widget
    setAttribute(Qt::WA_PaintOnScreen);
    setAttribute(Qt::WA_OpaquePaintEvent);
    setAttribute(Qt::WA_NoSystemBackground);
    // Set strong focus to enable keyboard events to be received
    setFocusPolicy(Qt::StrongFocus);
    // Setup the timer
    //myTimer.setInterval(FrameTime);
}
QSFMLCanvas::~QSFMLCanvas() {}

void QSFMLCanvas::showEvent(QShowEvent*)
{
    if (!myInitialized)
    {
        RenderWindow::create((sf::WindowHandle)winId());

        OnInit();

        connect(&myTimer, SIGNAL(timeout()), this, SLOT(repaint()));
        myTimer.start();
        myInitialized = true;
    }
}
QPaintEngine* QSFMLCanvas::paintEngine() const
{
    return 0;
}
void QSFMLCanvas::paintEvent(QPaintEvent*)
{
    RenderWindow::clear(sf::Color::Green);
    OnUpdate();
    RenderWindow::display();
}
void QSFMLCanvas::OnInit() {}
void QSFMLCanvas::OnUpdate() {}
