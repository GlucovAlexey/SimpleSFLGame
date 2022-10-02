#include <iostream>
#include "Engine.hpp"

void Engine::draw()
{
    mainWindow.clear(Color::White);
 
    mainWindow.draw(mainBackgroundSprite);
    mainWindow.draw(mainPlayer.getSprite());
 
    mainWindow.display();
}