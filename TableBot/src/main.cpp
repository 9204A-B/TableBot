/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       logan                                                     */
/*    Created:      2/5/2024, 6:04:38 PM                                      */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

int main() 
{
    // Vex requires this function to initalize everything
    vexcodeInit();
    Competition.autonomous(auton);
    Competition.drivercontrol(drive);
}
