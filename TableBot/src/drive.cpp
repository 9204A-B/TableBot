#include "vex.h"
using namespace vex;

void drive(void)
{
    while (true)
    {
        leftMotorA.setVelocity((Controller.Axis3.position() + Controller.Axis4.position()) + Controller.Axis1.position(), percent);
        leftMotorB.setVelocity((Controller.Axis3.position() - Controller.Axis4.position()) + Controller.Axis1.position(), percent);
        rightMotorA.setVelocity((Controller.Axis3.position() - Controller.Axis4.position()) - Controller.Axis1.position(), percent);
        rightMotorB.setVelocity((Controller.Axis3.position() + Controller.Axis4.position()) - Controller.Axis1.position(), percent);
        leftMotorA.spin(forward);
        leftMotorB.spin(forward);
        rightMotorA.spin(forward);
        rightMotorB.spin(forward);
        wait(20, msec);
    }
}