#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Player{

    private:
        Vector2f playerPosition;
        Sprite playerSprite;
        Texture playerTexture;
        float playerSpeed;
        bool leftPressed;
        bool rightPressed;
        bool upPressed;
        bool backPressed;

    public:
        Player();
        void moveLeft();
        void moveRight();
        void stopLeft();
        void stopRight();
        void moveUp();
        void moveBack();
        void stopUp();
        void stopBack();
        Sprite getSprite();
        void update(float elapsedTime);

};
