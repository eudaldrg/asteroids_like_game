//
// Created by audi on 17/08/17.
//

#ifndef ASTEROIDS_AIRCRAFT_H
#define ASTEROIDS_AIRCRAFT_H

#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include "entity.h"
#include "resource_enum_classes.h"

template <typename Resource, typename Identifier>
class ResourceHolder;
typedef ResourceHolder<sf::Texture, Textures::ID> TextureHolder;

class Aircraft : public Entity
{
public:
    enum Type
    {
        Eagle,
        Raptor,
    };
public:
    Aircraft(Type type, const TextureHolder& textures);
    virtual void drawCurrent(sf::RenderTarget& target,
                sf::RenderStates states) const override;
private:
    Type mType;
    sf::Sprite mSprite;
};


#endif //ASTEROIDS_AIRCRAFT_H
