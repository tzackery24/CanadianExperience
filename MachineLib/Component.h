//
// Created by Terrance Zackery on 12/7/23.
//

#ifndef CANADIANEXPERIENCE_COMPONENT_H
#define CANADIANEXPERIENCE_COMPONENT_H

#include <b2_world.h>
#include "ContactListener.h"

class Component
{
private:

public:
    /**
     * Draw the component
     * @param graphics Graphics context to draw on
     */
    virtual void Draw(std::shared_ptr<wxGraphicsContext> graphics) = 0;

    /**
     * Install this component into the physics system world.
     * @param world Physics system world
     * @param contactListener The contact listener installed for this world
     */
    virtual void InstallPhysics(std::shared_ptr<b2World> world, std::shared_ptr<ContactListener> contactListener) {}
};


#endif //CANADIANEXPERIENCE_COMPONENT_H
