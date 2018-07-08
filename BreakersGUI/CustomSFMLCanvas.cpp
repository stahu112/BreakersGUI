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

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        shape.move({10* 0.016f,0});
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        shape.move({-10* 0.016f,0});
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        shape.move({0,-10* 0.016f});
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        shape.move({0,10* 0.016f});
    }

    RenderWindow::draw(shape);
}
