#include "vex.h"
using namespace vex;

brain Brain;
controller Controller = controller(primary);

motor leftMotorA = motor(PORT11, ratio18_1, true);
motor leftMotorB = motor(PORT12, ratio18_1, true);
motor_group leftDrive = motor_group(leftMotorA, leftMotorB);

motor rightMotorA = motor(PORT19, ratio18_1, false);
motor rightMotorB = motor(PORT20, ratio18_1, false);
motor_group rightDrive = motor_group(rightMotorA, rightMotorB);

drivetrain Drivetrain = drivetrain(leftDrive, rightDrive, 320, 317.5, 254, mm, 1);

distance frontDistance = distance(PORT1);
distance rearDistance = distance(PORT2);
distance leftDistance = distance(PORT3);
distance rightDistance = distance(PORT4);

competition Competition;
// Vex requires this function to initalize everything
void vexcodeInit( void )
{
    Drivetrain.setDriveVelocity(40, percent);
    Drivetrain.setStopping(brake);
    Drivetrain.setTurnVelocity(40, percent);
}