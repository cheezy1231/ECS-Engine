//
// Created by Andrew Knee on 7/22/2020.
//

#ifndef VOXELGAME_COMPONENTMANAGER_H
#define VOXELGAME_COMPONENTMANAGER_H

#include <Defines.h>
#include <memory>

namespace ClockworkEngine {

    class Engine;
    class Component;

    class ComponentManager {
    private:
        std::weak_ptr<Engine> engine;
    public:
        ComponentManager(std::shared_ptr<Engine> engine);
        virtual ~ComponentManager();
    };
}


#endif //VOXELGAME_COMPONENTMANAGER_H
