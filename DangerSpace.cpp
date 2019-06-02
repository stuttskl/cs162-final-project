
#include "DangerSpace.hpp"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::cin;


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
            return squirrellAttack();
        case 2:
            return openTheHatch();
        case 3:
            return heavyRain();
    }
}

int DangerSpace::squirrellAttack()
{
    cout << "Out of nowhere, you hear a high-pitched hissing noise. You quickly whip around and see "
            "a rabid squirrel, looking pissed. After a brief staring contest, he lunges at you! Roll "
            "the die to see your fate!" << endl;
    cout << "Press any key and hit enter to roll the dice!" << endl;
    getchar();
    int attackResult = getRand(1, 6);
    cout << "~*~*~*~*~*~ rolling ~*~*~*~*~*~" << endl;
    cout << "The squirrel put up a good fight. Ultimately, you lost " << attackResult << " health points." << endl;
    return attackResult;
}

int DangerSpace::heavyRain()
{
    cout << "Suddenly a heavy downpour and brutal winds wash over you. You've seen this before, and last time the "
            "heavy rains subsided in a matter of minutes. You don't really want to disrupt your foraging progress to "
            "find cover. Do you go find cover, or weather the storm?"<< endl;
    cout << "1. Stay \n2. Go." << endl;
    int stayOrGo;
    cin >> stayOrGo;
    if (stayOrGo == 1)
    {
        int stormResult = getRand(1, 4);
        cout << "You stayed out in the storm. Fool! You loose " << stormResult << " health points." << endl;
        return stormResult;
    }
    if (stayOrGo == 2)
    {
        cout << "Smart move! You found cover right away. Health points unaffected." << endl;
        return 0;
    }
}

int DangerSpace::openTheHatch()
{
    int openHatch;
    cout << "You stumble upon a mysterious looking in-ground hatch. The top is covered with leaves and brush, "
            "but you notice there's nothing covering the handle, which is looking more tempting by the minute. Do you "
            "wish to open the hatch and explore???" << endl;
    cout << "1. Yes \n2. No." << endl;
    cin >> openHatch;
    if (openHatch == 1)
    {
        cout << "You adventurous soul! You open the heavy hatch to reveal a dark, well-like structure below. You peer "
                "over in curiousity, but peer a bit too far. You fall in the hatch!!! Hurt, but not terminally so, you "
                "pull yourself up out of the hatch. Nothing good was down there, and you got injured. This sucks. You "
                "lose 4 health points." << endl;
        return 4;
    }
    if (openHatch == 2)
    {
        cout << "You chose the safer path. Boring, but probably ultimately for the better. You keep walking by and "
                "go about your day." << endl;
        return 0;
    }
}
