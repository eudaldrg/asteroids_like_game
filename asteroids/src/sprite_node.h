//
// Created by audi on 19/08/17.
//

#ifndef ASTEROIDS_SPRITE_NODE_H
#define ASTEROIDS_SPRITE_NODE_H


#include <SFML/Graphics/Sprite.hpp>
#include "scene_node.h"

class SpriteNode : public SceneNode
{
public:
    explicit SpriteNode(const sf::Texture& texture);
    SpriteNode(const sf::Texture& texture,
               const sf::IntRect& rect);
private:
    virtual void drawCurrent(sf::RenderTarget& target,
                             sf::RenderStates states) const;
private:
    sf::Sprite mSprite;
};

#endif //ASTEROIDS_SPRITE_NODE_H
