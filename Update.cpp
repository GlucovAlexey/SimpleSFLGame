#include <iostream>
#include "Engine.hpp"

using namespace sf;

void Engine::update(float dtAsSeconds)
{
    mainPlayer.update(dtAsSeconds);
}