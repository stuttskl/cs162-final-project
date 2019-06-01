
#include "DangerSpace.hpp"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;


DangerSpace::DangerSpace()
{
    name = "Danger Space";
}

DangerSpace::~DangerSpace() {}

string DangerSpace::getName()
{
    return name;
}

int DangerSpace::runEvent()
{
    cout << " -~*~--~*~--~*~--~*~--~*~--~*~-" << endl;
    cout << "\t \t  DANGER SPACE" << endl;
    cout << " -~*~--~*~--~*~--~*~--~*~--~*~-" << endl;
    int whichBadEvent = getRand(1, 3);
    cout << whichBadEvent << endl;
    switch (whichBadEvent)
    {
        case 1:
            cout << "Suddenly a heavy downpour and brutal winds wash over you, and you hardly have any time to find "
                    "cover. As a result, you get a little sick. Health decreases by 2." << endl;
            break;
        case 2:
            cout << "Out of nowhere, you are attacked by an angry, rabid squirrel. You have no time to think, and "
                    "are unfortunately injured. Health decreases by 4." << endl;
            break;
        case 3:
            cout << "You suddenly realize your knapsack feels a lot lighter… three items lighter, to be specific. "
                    "You realize you left your knapsack alone earlier, and another island dweller has stolen 3 "
                    "of your items. You lose 3 items from your knapsack." << endl;
            break;
    }


}