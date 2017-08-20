//
// Created by audi on 17/08/17.
//

#ifndef ASTEROIDS_SCENE_NODE_H
#define ASTEROIDS_SCENE_NODE_H

#include <vector>
#include <memory>
#include <SFML/System/NonCopyable.hpp>
#include <SFML/Graphics/Transformable.hpp>
#include <SFML/Graphics/Drawable.hpp>

namespace sf
{
    class Time;
}

class SceneNode: public sf::Transformable, public sf::Drawable,
                 private sf::NonCopyable
{
public:
    typedef std::unique_ptr<SceneNode> Ptr;

    SceneNode() = default;
    void attachChild(Ptr child);
    Ptr detachChild(const SceneNode& node);
    void update(sf::Time dt);
    sf::Vector2f getWorldPosition() const
private:
    virtual void updateCurrent(sf::Time dt);
    void updateChildren(sf::Time dt);
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const final;
    virtual void drawCurrent(sf::RenderTarget& target, sf::RenderStates states) const;
    void drawChildren(sf::RenderTarget& target, sf::RenderStates states) const;
    sf::Transform getWorldTransform() const;
    std::vector<Ptr> mChildren;
    SceneNode* mParent;
};

#endif //ASTEROIDS_SCENE_NODE_H
