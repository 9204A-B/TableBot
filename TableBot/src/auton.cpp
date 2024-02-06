#include "vex.h"
using namespace vex;

void auton(void)
{
    while (true)
    {
        Drivetrain.drive(forward);
        if (frontDistance.isObjectDetected())
        {
            Drivetrain.setDriveVelocity(0, percent);
            Drivetrain.stop();
            Drivetrain.driveFor(reverse, 20, inches); 
            Drivetrain.turnFor(left, 180, degrees);
            Drivetrain.setDriveVelocity(40, percent);
        }
        if (rearDistance.isObjectDetected())
        {
            Drivetrain.setDriveVelocity(0, percent);
            Drivetrain.stop();
            Drivetrain.driveFor(forward, 20, inches); 
            Drivetrain.turnFor(right, 180, degrees);
            Drivetrain.setDriveVelocity(40, percent);
        }
        if (leftDistance.isObjectDetected())
        {
            Drivetrain.setDriveVelocity(0, percent);
            Drivetrain.stop();
            leftMotorA.setVelocity(-40, percent);
            leftMotorB.setVelocity(40, percent);
            rightMotorA.setVelocity(40, percent);
            rightMotorB.setVelocity(-40, percent);
            leftMotorA.spinFor(forward, 3, sec);            
            leftMotorB.spinFor(forward, 3, sec);
            rightMotorA.spinFor(forward, 3, sec);
            rightMotorB.spinFor(forward, 3, sec);
            Drivetrain.turnFor(right, 90, degrees);
            Drivetrain.setDriveVelocity(40, percent);
        }
        if (rightDistance.isObjectDetected())
        {
            Drivetrain.setDriveVelocity(0, percent);
            Drivetrain.stop();
            leftMotorA.setVelocity(40, percent);
            leftMotorB.setVelocity(-40, percent);
            rightMotorA.setVelocity(-40, percent);
            rightMotorB.setVelocity(40, percent);
            leftMotorA.spinFor(forward, 3, sec);            
            leftMotorB.spinFor(forward, 3, sec);
            rightMotorA.spinFor(forward, 3, sec);
            rightMotorB.spinFor(forward, 3, sec);
            Drivetrain.turnFor(left, 90, degrees);
            Drivetrain.setDriveVelocity(40, percent);
        }
    }
}