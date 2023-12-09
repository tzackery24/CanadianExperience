//
// Created by Terrance Zackery on 12/7/23.
//

#ifndef CANADIANEXPERIENCE_BODY_H
#define CANADIANEXPERIENCE_BODY_H

#include "Component.h"
#include "PhysicsPolygon.h"

class Body : public Component
{
private:
    /// The physics polygon to use
    cse335::PhysicsPolygon mPolygon;

public:
    void Draw(std::shared_ptr<wxGraphicsContext> graphics) override;

    /**
     * Create a rectangle.
     *
     * If the height parameter is not supplied and an image
     * has been set, the height will be computed so as to
     * keep the original image aspect ratio correct.
     *
     * @param x Left side X
     * @param y Bottom left Y
     * @param width Width of the rectangle
     * @param height Height of the rectangle
     */
    void Rectangle(double x, double y, double width = 0, double height = 0) {
        mPolygon.Rectangle(x, y, width, height);
    }

    /**
     * Set an image we will use as a texture for the polygon
     * @param filename Image filename
     */
    void SetImage(std::wstring filename) {mPolygon.SetImage(filename);}

    /**
     * Create a circle centered on (0,0)
     * @param radius Circle radius
     */
    void Circle(double radius) {mPolygon.Circle(radius);}

    /**
     * Set the component position in the machine
     * @param x X position in centimeters
     * @param y Y position in centimeters
     */
    void SetInitialPosition(double x, double y) { mPolygon.SetInitialPosition(x, y); }

    /**
     * Make this component a dynamic component
     *
     * Dynamic components move based on the physics
     */
    void SetDynamic() {
        mPolygon.SetDynamic();
    }

    /**
     * Make this component a kinematic component
     *
     * Dynamic components move based on the physics and defined
     * velocity characteristics
     */
    void SetKinematic() {
        mPolygon.SetKinematic();
    }


    /**
     * Make this component a kinematic component
     *
     * Dynamic components move based on the physics
     * @param density Density in kg/m^2
     * @param friction Friction coefficient in the range [0, 1]
     * @param restitution Restitution value in the rnnge [0, 1]
     */
    void SetPhysics(double density=1.0, double friction=0.5, double restitution=0.5) {
        mPolygon.SetPhysics(density, friction, restitution);
    }

    /**
     * Get the enclosed physics polygon object
     * @return PhysicsPolygon object
     */
    cse335::PhysicsPolygon* GetPolygon() {return &mPolygon;}
//
//    virtual ~Body() { }

    void InstallPhysics(std::shared_ptr<b2World> world, std::shared_ptr<ContactListener> contactListener) override;
};


#endif //CANADIANEXPERIENCE_BODY_H
