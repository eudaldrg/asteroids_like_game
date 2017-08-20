//
// Created by audi on 19/08/17.
//

#ifndef ASTEROIDS_WORLD_H
#define ASTEROIDS_WORLD_H


#include <SFML/Graphics/View.hpp>
#include "resource_holder.inl"
#include "scene_node.h"

namespace sf
{
    class RenderWindow;
}
class Aircraft;

class World : private sf::NonCopyable {
public:
    explicit World(sf::RenderWindow &window);

    void update(sf::Time dt);

    void draw();

private:
    void buildScene();
    void loadTextures();

private:
    enum class Layer {
        Background,
        Air,
        LayerCount
    };
private:
    sf::RenderWindow & mWindow;
    sf::View mWorldView;
    TextureHolder mTextures;
    SceneNode mSceneGraph;
    std::array<SceneNode *, Layer::LayerCount> mSceneLayers;
    sf::FloatRect mWorldBounds;
    sf::Vector2f mSpawnPosition;
    float mScrollSpeed;
    Aircraft* mPlayerAircraft;
};


#endif //ASTEROIDS_WORLD_H
