/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Logan Dresel                                              */
/*    Created:      4/15/2024, 8:55:38 AM                                     */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

int main() 
{
    // Vex requires this function to initalize everything
    vexcodeInit();
    thread screen = thread(Screen);
}
