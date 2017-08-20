//
// Created by audi on 14/08/17.
//
#pragma once

#include "resource_holder.hpp"
#include "resource_enum_classes.h"

class Game
{
public:
    Game();
    void run();
private:
    void processEvents();
    void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);
    void update(sf::Time deltaTime);
    void render();
private:
    sf::RenderWindow mWindow;
    sf::Texture mTexture;
    sf::Sprite mPlayer;
    ResourceHolder<sf::Texture, Textures::ID> mTextureHolder;
    double PlayerSpeed;
    const sf::Time TimePerFrame = sf::seconds(1.f / 60.f);
    bool mIsMovingUp;
    bool mIsMovingDown;
    bool mIsMovingLeft;
    bool mIsMovingRight;
};