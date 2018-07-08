#include "mainwindow.h"
#include <QApplication>
#include <SFML/Graphics.hpp>
#include <thread>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    sf::RenderWindow window(sf::VideoMode(800,600),"Title", sf::Style::Default);

    window.clear(sf::Color::Green);
    window.display();

    return a.exec();
}
