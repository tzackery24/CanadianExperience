//
// Created by Terrance Zackery on 12/5/23.
//

#include "ActualMachine.h"


/**
 * Draw the machine
 * @param graphics Graphics device to render onto
 */
void ActualMachine::Draw(std::shared_ptr<wxGraphicsContext> graphics)
{
    graphics->SetPen(*wxRED_PEN);
    graphics->StrokeLine(-300, 0, 300, 0);
    graphics->StrokeLine(0, 0, 0, 25);
    graphics->StrokeLine(-300, 0, -300, 300);
    graphics->StrokeLine(300, 0, 300, 300);
}

