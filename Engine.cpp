#include <iostream>
#include "Engine.hpp"
using namespace sf;
Engine::Engine(){
    Vector2f resolution;
    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;
    mainWindow.create(VideoMode(resolution.x, resolution.y), "Simple Game Engine!", Style::Fullscreen);
    mainBackgroundTexture.loadFromFile("background.jpg");
    mainBackgroundSprite.setTexture(mainBackgroundTexture);
}
void Engine::start()
{
    Clock clock;
 
    while (mainWindow.isOpen())
    {
        Time dt = clock.restart();
 
        float dtAsSeconds = dt.asSeconds();
 
        input();
        update(dtAsSeconds);
        draw();
    }
}