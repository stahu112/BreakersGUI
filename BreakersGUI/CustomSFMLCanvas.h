#ifndef CUSTOMSFMLCANVAS_H
#define CUSTOMSFMLCANVAS_H

#include <QSFMLCanvas.h>

class CustomSFMLCanvas : public QSFMLCanvas
{
public:

    CustomSFMLCanvas(QWidget* Parent);
    void OnInit() override;
    void OnUpdate() override;
private:

   sf::RectangleShape shape;
};

#endif // SFMLCANVAS_H
