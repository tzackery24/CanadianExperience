/**
 * @file MachineC2Factory.cpp
 * @author Charles Owen
 */

#include "pch.h"
#include "MachineC2Factory.h"
#include "ActualMachine.h"
//#include "Body.h"
//#include "Goal.h"
//#include "Hamster.h"

/// The images directory in resources
const std::wstring ImagesDirectory = L"/images";

/**
 * Constructor
 * @param resourcesDir Directory containing the machine resources
 */
MachineC2Factory::MachineC2Factory(std::wstring resourcesDir)
    :mResourcesDir(resourcesDir)
{
    mImagesDir = resourcesDir + ImagesDirectory;
}

/**
 * Create a machine
 * @return Pointer to newly created machine
 */
std::shared_ptr<ActualMachine> MachineC2Factory::Create()
{
    auto machine = std::make_shared<ActualMachine>(1);

    // Notice: All dimensions are in centimeters and assume
    // the Y axis is positive in the up direction.

//    const double FloorWidth = 600;
//    const double FloorHeight = 15;
//
//    //
//    // The floor
//    //
//    // The values are chosen so the top of the floor
//    // is at Y=0
//    //
//    auto floor = std::make_shared<Body>();
//    floor->Rectangle(-FloorWidth/2, -FloorHeight, FloorWidth, FloorHeight);
//    floor->SetImage(mImagesDir + L"/floor.png");
//    machine->AddComponent(floor);
//
//    //
//    // The beam and wedges
//    //
//    const double BeamX = -25;
//    auto beam1 = std::make_shared<Body>();
//    beam1->BottomCenteredRectangle(400, 20);
//    beam1->SetImage(mImagesDir + L"/beam.png");
//    beam1->SetInitialPosition(BeamX, 300);
//    machine->AddComponent(beam1);
//
//    auto wedge1 = std::make_shared<Body>();
//    wedge1->AddPoint(-25, 0);
//    wedge1->AddPoint(25, 0);
//    wedge1->AddPoint(25, 4.5);
//    wedge1->AddPoint(-25, 25);
//    wedge1->SetImage(mImagesDir + L"/wedge.png");
//    wedge1->SetInitialPosition(BeamX-175, 320);
//    machine->AddComponent(wedge1);
//
//    //
//    // Basketball
//    //
//    auto basketball1 = std::make_shared<Body>();
//    basketball1->Circle(12);
//    basketball1->SetImage(mImagesDir + L"/basketball1.png");
//    basketball1->SetInitialPosition(BeamX-186, 353);
//    basketball1->SetDynamic();
//    basketball1->SetPhysics(1, 0.5, 0.6);
//    machine->AddComponent(basketball1);
//
//    //
//    // The hamster motor for the second-beam
//    //
//    auto hamster = std::make_shared<Hamster>(mImagesDir);
//    hamster->SetPosition(-220, 185);
//    hamster->SetInitiallyRunning(true);      // Initially running
//    hamster->SetSpeed(0.60);
//    machine->AddComponent(hamster);
//    auto hamster1shaft = hamster->GetShaftPosition();
//
//    auto arm = std::make_shared<Body>();
//    arm->SetInitialPosition(hamster1shaft);
//    arm->AddPoint(-7, 10);
//    arm->AddPoint(7, 10);
//    arm->AddPoint(7, -60);
//    arm->AddPoint(-7, -60);
//    arm->SetImage(mImagesDir + L"/arm.png");
//    arm->SetKinematic();
//    machine->AddComponent(arm);
//
//    hamster->GetSource()->AddSink(arm);
//
//    //
//    // The Goal
//    //
//    auto goal = std::make_shared<Goal>(mImagesDir);
//    goal->SetPosition(270, 0);
//    machine->AddComponent(goal);

    return machine;
}