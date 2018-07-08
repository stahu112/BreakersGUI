#ifndef QSFMLCANVAS_H
#define QSFMLCANVAS_H

#include <QObject>
#include <QWidget>
#include <QTimer>
#include <SFML/Graphics.hpp>

class QSFMLCanvas : public QWidget, public sf::RenderWindow
{
    Q_OBJECT

public:
    explicit QSFMLCanvas(QWidget *parent);
    virtual void showEvent(QShowEvent*);
    virtual QPaintEngine* paintEngine() const;
    virtual void paintEvent(QPaintEvent*);
    virtual ~QSFMLCanvas();
    virtual void OnInit();
    virtual void OnUpdate();
    private:
    QTimer myTimer;
    bool myInitialized;
};

#endif // QSFMLCANVAS_H
