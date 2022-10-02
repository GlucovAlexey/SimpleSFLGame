#include <iostream>
#include <cmath>
#include "Player.hpp"

Player::Player(){
    playerSpeed = 300;
    sf::Vector2f targetSize(320.0f, 300.0f);

    playerTexture.loadFromFile("player.png");
    playerSprite.setTexture(playerTexture);
    playerSprite.setScale(
    targetSize.x / playerSprite.getLocalBounds().width,
targetSize.y / playerSprite.getLocalBounds().height);

    playerPosition.x = 300;
    playerPosition.y = 300;

}
Sprite Player::getSprite()
{
        return playerSprite;
}

void Player::moveLeft(){
    leftPressed = true;
}
void Player::moveRight(){
    rightPressed = true;
}
void Player::stopLeft(){
    leftPressed = false;
}
void Player::stopRight(){
    rightPressed = false;
}
/*-------------------------------*/
void Player::moveUp(){
    upPressed = true;
}
void Player::moveBack(){
    backPressed = true;
}
void Player::stopUp(){
    upPressed = false;
}
void Player::stopBack(){
    backPressed = false;
}


void Player::update(float elapsedTime){
    if (rightPressed){
        playerPosition.x += playerSpeed * elapsedTime;
    }
    if (leftPressed) {
        playerPosition.x -= playerSpeed * elapsedTime;
    }
    if (upPressed){
        playerPosition.y -= playerSpeed * elapsedTime;
    }
    if (backPressed) {
        playerPosition.y += playerSpeed * elapsedTime;
    }
    playerSprite.setPosition(playerPosition);
}
