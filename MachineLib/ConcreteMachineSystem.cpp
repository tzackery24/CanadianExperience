/**
 * @file ConcreteMachineSystem.cpp
 *
 * @author Terrance Zackery II
 *
 *
 */

#include "pch.h"
#include "MachineSystemFactory.h"
#include "MachineSystemStandin.h"
#include "ConcreteMachineSystem.h"
#include "MachineC2Factory.h"

/**
 * Constructor
 * @param resourcesDir Resources directory
 */
ConcreteMachineSystem::ConcreteMachineSystem(std::wstring resourcesDir) :
        mResourcesDir(resourcesDir)
{
    SetMachineNumber(1);
}

/**
* Draw the machine at the currently specified location
* @param graphics Graphics object to render to
*/
void ConcreteMachineSystem::DrawMachine(std::shared_ptr<wxGraphicsContext> graphics)
{
    graphics->PushState();
    graphics->Translate(mLocation.x, mLocation.y);
    graphics->Scale(mPixelsPerCentimeter, -mPixelsPerCentimeter);

    // Be sure you put this before the PopState!
    graphics->SetPen(*wxRED_PEN);
    graphics->StrokeLine(-300, 0, 300, 0);
    graphics->StrokeLine(0, 0, 0, 25);
    graphics->StrokeLine(-300, 0, -300, 300);
    graphics->StrokeLine(300, 0, 300, 300);

    graphics->PopState();
}

/**
* Set the machine number
* @param machine An integer number. Each number makes a different machine
*/
void ConcreteMachineSystem::SetMachineNumber(int machine)
{
    if(machine == 1)
    {
        // Create machine #1
        MachineC2Factory factory(mResourcesDir);
        mMachine = factory.Create();
    }
    else
    {
        // Create machine #2
        mMachine = std::make_shared<ActualMachine>(2);
    }
}
