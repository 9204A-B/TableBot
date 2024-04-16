#include "vex.h"
#include <random>
#include <string>

using namespace vex;

void Screen(void)
{
    while (true)
    {
        Brain.Screen.drawImageFromFile("cool.png", 0, 0);
        if (Brain.Screen.pressing())
        {
            if (Brain.Screen.xPosition() < 240)
            {
                for (int x = 0; x < 110; x++)
                {
                    std::string file = "correct" + x + ".png";
                    Brain.Screen.drawImageFromFile(file, 0, 0);
                    wait(150, msec);
                }
                for (int x = 0; x < 1371; x++)
                {
                    std::string file = "expect" + x + ".png";
                    Brain.Screen.drawImageFromFile(file, 0, 0);
                    wait(150, msec);
                }
            }
            else
            {
                Brain.Screen.setFillColor(192);
                Brain.Screen.setPenColor(red);
                Brain.Screen.setFont(mono30);
                const char* word = "Wrong".c_str();
                Brain.Screen.printAt(Brain.Screen.xPosition(), Brain.Screen.yPosition(), word);
                wait(1, sec);
            }                    
            wait(10, msec);
        }
    }
}