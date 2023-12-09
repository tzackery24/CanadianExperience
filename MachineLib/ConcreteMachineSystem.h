/**
 * @file MachineSystemActual.h
 * @author Terrance Zackery II
 *
 *
 */

#ifndef CANADIANEXPERIENCE_CONCRETEMACHINESYSTEM_H
#define CANADIANEXPERIENCE_CONCRETEMACHINESYSTEM_H

#include "IMachineSystem.h"
#include "ActualMachine.h"

class ConcreteMachineSystem : public IMachineSystem
{
private:

/// Machine location
    wxPoint mLocation;
    /// How many pixels there are for each CM
    double mPixelsPerCentimeter = 1.5;
    /// Pointer to the installed machine
    std::shared_ptr<ActualMachine> mMachine;
    /// The resources directory
    std::wstring mResourcesDir;
    /// The current machine frame
    int mFrame = 0;
    /// The frame rate
    double mFrameRate = 30;
public:
    /**
    * Set the position for the root of the machine
    * @param location The x,y location to place the machine
    */
    virtual void SetLocation(wxPoint location) { mLocation = location; }

    /**
     * Get the location of hte machine
     * @return Location x,y in pixels as a point
     */
    virtual wxPoint GetLocation() { return mLocation; }

    /**
    * Draw the machine at the currently specified location
    * @param graphics Graphics object to render to
    */
    virtual void DrawMachine(std::shared_ptr<wxGraphicsContext> graphics);

    /**
    * Set the current machine animation frame
    * @param frame Frame number
    */
    virtual void SetMachineFrame(int frame) { }

    /**
     * Set the expected frame rate in frames per second
     * @param rate Frame rate in frames per second
     */
    virtual void SetFrameRate(double rate) { mFrameRate = rate; }

    /**
    * Set the machine number
    * @param machine An integer number. Each number makes a different machine
    */
    virtual void SetMachineNumber(int machine);


    /**
     * Get the current machine number
     * @return Machine number integer
     */
    virtual int GetMachineNumber() {return mMachine->GetMachineNumber();}

    /**
     * Get the current machine time.
     * @return Machine time in seconds
     */
    virtual double GetMachineTime() { return 0; }

    /**
     * Set the flag from the control panel
     * @param flag Flag to set
     */
    virtual void SetFlag(int flag) {}



    ConcreteMachineSystem(std::wstring resourcesDir);
};


#endif //CANADIANEXPERIENCE_CONCRETEMACHINESYSTEM_H
