/**
 * @file MachineCFactory.h
 * @author Terrance Zackery
 *
 */

#ifndef CANADIANEXPERIENCE_MACHINEC2FACTORY_H
#define CANADIANEXPERIENCE_MACHINEC2FACTORY_H

#include <memory>
#include <string>

class ActualMachine;

/**
 * Factory that creates just the parts of the machine
 * necessary for the checkpoint.
 */
class MachineC2Factory
{
private:
    /// Path to the resources directory
    std::wstring mResourcesDir;

    /// Path to the images directory
    std::wstring mImagesDir;

public:
    MachineC2Factory(std::wstring resourcesDir);

    std::shared_ptr<ActualMachine> Create();
};

#endif //CANADIANEXPERIENCE_MACHINEC2FACTORY_H
