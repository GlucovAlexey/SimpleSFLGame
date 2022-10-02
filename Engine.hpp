#pragma once
#include <SFML/Graphics.hpp>
#include "Player.hpp"
using namespace sf;

class Engine{
    private:
        RenderWindow mainWindow;
        Sprite mainBackgroundSprite;
        Texture mainBackgroundTexture;
        Player mainPlayer;
        void input();
        void update(float dtAsSecond);
        void draw();
    public:
        Engine();
        void start();
};