//
// Created by audi on 18/08/17.
//

#include "aircraft.h"
#include "resource_enum_classes.h"
#include "resource_holder.hpp"


Textures::ID toTextureID(Aircraft::Type type)
{
    switch (type)
    {
        case Aircraft::Eagle:
            return Textures::ID::Eagle;
        case Aircraft::Raptor:
            return Textures::ID::Raptor;
    }
    throw std::logic_error("toTextureID in Aircraft cpp called with " + type);
}

Aircraft::Aircraft(Type type, const TextureHolder& textures):
        mType(type), mSprite(textures.get(toTextureID(type)))
{
    sf::FloatRect bounds = mSprite.getLocalBounds();
    mSprite.setOrigin(bounds.width / 2.f, bounds.height / 2.f);
}
void Aircraft::drawCurrent(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(mSprite, states);
}