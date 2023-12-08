//
// Created by Terrance Zackery on 12/5/23.
//

#ifndef CANADIANEXPERIENCE_ACTUALMACHINE_H
#define CANADIANEXPERIENCE_ACTUALMACHINE_H


class ActualMachine
{
private:
    /// The machine number
    int mMachineNum = 0;

public:
    ActualMachine(int machineNum) {mMachineNum = machineNum;}

    /**
     * Get the machine number
     * @return Machine number
     */
    int GetMachineNumber() {return mMachineNum;}

    void Draw(std::shared_ptr<wxGraphicsContext> graphics);
};


#endif //CANADIANEXPERIENCE_ACTUALMACHINE_H
