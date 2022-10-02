#include <iostream>
#include "Engine.hpp"
void Engine::input()
{
    if (Keyboard::isKeyPressed(Keyboard::Escape))
    {
        mainWindow.close();
    }

    if (Keyboard::isKeyPressed(Keyboard::A))
    {
        mainPlayer.moveLeft();
    }
    else
    {
        mainPlayer.stopLeft();
    }

    if (Keyboard::isKeyPressed(Keyboard::D))
    {
        mainPlayer.moveRight();
    }
    else
    {
        mainPlayer.stopRight();
    }



    if (Keyboard::isKeyPressed(Keyboard::W))
    {
        mainPlayer.moveUp();
    }
    else
    {
        mainPlayer.stopUp();
    }

    if (Keyboard::isKeyPressed(Keyboard::S))
    {
        mainPlayer.moveBack();
    }
    else
    {
        mainPlayer.stopBack();
    }

}
