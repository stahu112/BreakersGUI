#include "CustomSFMLCanvas.h"


CustomSFMLCanvas::CustomSFMLCanvas(QWidget* Parent) : QSFMLCanvas(Parent)
{
}

void CustomSFMLCanvas::OnInit()
{
    shape.setFillColor(sf::Color::Red);
    shape.setSize({50,50});
    shape.setPosition({300,200});
}

void CustomSFMLCanvas::OnUpdate()
{
    RenderWindow::draw(shape);
}
