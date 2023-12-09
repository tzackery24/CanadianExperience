//
// Created by Terrance Zackery on 12/5/23.
//

#ifndef CANADIANEXPERIENCE_ACTUALMACHINE_H
#define CANADIANEXPERIENCE_ACTUALMACHINE_H

#include <b2_world.h>


class Component;

class ActualMachine
{
private:
    ActualMachine();

/// The machine number
    int mMachineNum = 0;
    /// The installed machine components
    std::vector<std::shared_ptr<Component>> mComponents;
    /// The box2d world
    std::shared_ptr<b2World> mWorld;

public:

    ActualMachine(int machineNum) {mMachineNum = machineNum;}

    /**
     * Get the machine number
     * @return Machine number
     */
    int GetMachineNumber() {return mMachineNum;}

    void Draw(std::shared_ptr<wxGraphicsContext> graphics);

    void AddComponent(std::shared_ptr<Component> component);

    void Update(double elapsed);

    void Reset();
};


#endif //CANADIANEXPERIENCE_ACTUALMACHINE_H
