//
// Created by audi on 16/08/17.
//

#ifndef ASTEROIDS_RESOURCE_HOLDER_H
#define ASTEROIDS_RESOURCE_HOLDER_H

#include <SFML/Graphics.hpp>
#include <memory>

template <typename Resource, typename Identifier>
class ResourceHolder
{
public:
    void load(Identifier id, const std::string& filename);
    template <typename Parameter> void load(Identifier id, const std::string& filename,
                                            const Parameter& secondParam);
    Resource& get(Identifier id);
    const Resource& get(Identifier id) const;
private:
    std::map<Identifier, std::unique_ptr<Resource>> mResourceMap;
};

#include "resource_holder.inl"

#endif //ASTEROIDS_RESOURCE_HOLDER_H
