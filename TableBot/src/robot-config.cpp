#include "vex.h"
using namespace vex;

brain Brain;
controller Controller = controller(primary);

motor leftMotorA = motor(PORT11, ratio18_1, true);
motor leftMotorB = motor(PORT12, ratio18_1, true);
motor_group leftDrive = motor_group(leftMotorA, leftMotorB);

motor rightMotorA = motor(PORT19, ratio18_1, false);
motor rightMotorB = motor(PORT19, ratio18_1, false);
motor_group rightDrive = motor_group(rightMotorA, rightMotorB);

drivetrain Drivetrain = drivetrain(leftDrive, rightDrive, 320, 317.5, 254, mm, 1);

// Vex requires this function to initalize everything
void vexcodeInit( void )
{
    Drivetrain.setDriveVelocity(100, percent);
    Drivetrain.setStopping(brake);
    Drivetrain.setTurnVelocity(100, percent);
}