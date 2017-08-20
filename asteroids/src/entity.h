//
// Created by audi on 17/08/17.
//

#ifndef ASTEROIDS_ENTITY_H
#define ASTEROIDS_ENTITY_H

#include <SFML/System.hpp>
#include "scene_node.h"

class Entity : public SceneNode
{
public:
    void setVelocity(sf::Vector2f velocity);
    void setVelocity(float vx, float vy);
    sf::Vector2f getVelocity() const;
private:
    virtual void updateCurrent(sf::Time dt) override;
    sf::Vector2f mVelocity;
};

#endif //ASTEROIDS_ENTITY_H
