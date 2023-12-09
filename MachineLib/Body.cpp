//
// Created by Terrance Zackery on 12/7/23.
//

#include "Body.h"
#include "ContactListener.h"

/**
 * Draw the body
 * @param graphics Graphics context to draw on
 */
void Body::Draw(std::shared_ptr<wxGraphicsContext> graphics)
{
    mPolygon.Draw(graphics);
}

/**
 * Install this component into the physics system world.
 * @param world Physics system world
 * @param contactListener The contact listener installed for this world
 */
void Body::InstallPhysics(std::shared_ptr<b2World> world, std::shared_ptr<ContactListener> contactListener)
{
    mPolygon.InstallPhysics(world);
}

