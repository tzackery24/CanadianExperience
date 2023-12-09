//
// Created by Terrance Zackery on 12/5/23.
//

#include "ActualMachine.h"
#include "Component.h"
#include "ContactListener.h"

/// Gravity in meters per second per second
const float Gravity = -9.8f;

/// Number of velocity update iterations per step
const int VelocityIterations = 6;

/// Number of position update iterations per step
const int PositionIterations = 2;

ActualMachine::ActualMachine()
{
    mWorld = std::make_shared<b2World>(b2Vec2(0.0f, Gravity));
}

/**
 * Draw the machine
 * @param graphics Graphics device to render onto
 */
void ActualMachine::Draw(std::shared_ptr<wxGraphicsContext> graphics)
{
    for(auto component: mComponents)
    {
        component->Draw(graphics);
    }
}

/**
 * Add a component to the machine
 * @param component Component to add
 */
void ActualMachine::AddComponent(std::shared_ptr<Component> component)
{
    mComponents.push_back(component);
}


/**
 * Update the machine in time
 * @param elapsed Elapsed time in seconds
 */
void ActualMachine::Update(double elapsed)
{
    // Call Update on all of our components so they can advance in time

    // Advance the physics system one frame in time
    mWorld->Step(elapsed, VelocityIterations, PositionIterations);
}

/**
 * Reset the physics system
 */
void ActualMachine::Reset()
{
    mWorld = std::make_shared<b2World>(b2Vec2(0.0f, Gravity));

//    // Create and install the contact filter
//    mContactListener = std::make_shared<ContactListener>();
//    mWorld->SetContactListener(mContactListener.get());
//
//    for(auto component : mComponents)
//    {
//        component->InstallPhysics(mWorld, mContactListener);
//    }
}