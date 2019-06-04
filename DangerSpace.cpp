/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description:
*********************************************************************/
#include "DangerSpace.hpp"
#include "inputValid.hpp"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::cin;

/******************************************************
*
******************************************************/
DangerSpace::DangerSpace()
{
    name = "Danger Space";
}

/******************************************************
*
******************************************************/
DangerSpace::~DangerSpace() {}

/******************************************************
*
******************************************************/
string DangerSpace::getName()
{
    return name;
}

/******************************************************
*
******************************************************/
int DangerSpace::runEvent()
{
    cout << " -~*~--~*~--~*~--~*~--~*~--~*~-" << endl;
    cout << "\t \t  DANGER SPACE" << endl;
    cout << " -~*~--~*~--~*~--~*~--~*~--~*~-" << endl;
    int whichBadEvent = getRand(1, 3);
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

/******************************************************
*
******************************************************/
int DangerSpace::squirrellAttack()
{
    cout << " .   , " << endl;
    cout << " |\\_/|  ,---." << endl;
    cout << " (o.o) /  __ |" << endl;
    cout << "  `W'\\/ /   `'" << endl;
    cout << " ((  ||/" << endl;
    cout << " ``( //      " << endl;
    cout << "  ~~~' " << endl;

    cout << endl;
    cout << endl;

    cout << "Out of nowhere, you hear a high-pitched hissing noise." << endl;
    cout << "You quickly whip around and see a rabid squirrel, looking pissed." << endl;
    cout << "After a brief staring contest, he lunges at you!" << endl;
    cout << "Roll the die to see your fate!" << endl;
    cout << "Press any key and hit enter to roll the dice!" << endl;
    getchar();
    int attackResult = getRand(1, 6);
    cout << "~*~*~*~*~*~ rolling ~*~*~*~*~*~" << endl;
    cout << "The squirrel put up a good fight (and so did you). Ultimately, you lost " << attackResult << " health points." << endl;
    return attackResult;
}

/******************************************************
*
******************************************************/
int DangerSpace::heavyRain()
{

    cout << "   __   _ " << endl;
    cout << " _(  )_( )_" << endl;
    cout << "(_     _   )" << endl;
    cout << "/ (___) (_)" << endl;
    cout << "/ / / / / / " << endl;
    cout << " / / / / / /  " << endl;

    cout << endl;
    cout << endl;

    cout << "Suddenly a heavy downpour and brutal winds wash over you. You've seen this before, and last time the "
            "heavy rains subsided in a matter of minutes. You don't really want to disrupt your foraging progress to "
            "find cover. Do you go find cover, or weather the storm?"<< endl;
    cout << "1. Stay \n2. Go." << endl;
    int stayOrGo = returnInt();
    while (stayOrGo <= 0 || stayOrGo > 2)
    {
        cout << "Please enter an integer representing your choice. 1 - Yes. 2 - No." << endl;
        stayOrGo = returnInt();
    }
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

/******************************************************
*
******************************************************/
int DangerSpace::openTheHatch()
{
    cout << endl;
    cout << "   / \\" << endl;
    cout << "  / /" << endl;
    cout << " / /|" << endl;
    cout << "/ /,^%---" << endl;
    cout << "\\/_<__\\___\\" << endl;
    cout << endl;
    cout << endl;


    cout << "You stumble upon a mysterious looking in-ground hatch." << endl;
    cout << "The top is covered with leaves and brush, but you notice there's nothing covering the handle " << endl;
    cout << "which is looking more tempting by the minute." << endl;
    cout << "Do you wish to open the hatch and explore???" << endl;
    cout << "1. Yes \n2. No." << endl;
    int openHatch = returnInt();
    while (openHatch <= 0 || openHatch > 2)
    {
        cout << "Please enter an integer representing your choice. 1 - Yes. 2 - No." << endl;
        openHatch = returnInt();
    }
    if (openHatch == 1)
    {
        cout << " /\\ " << endl;
        cout << " \\ \\" << endl;
        cout << "  \\ \\\\_,^%---" << endl;
        cout << "   \\ \\_<\\_\\___" << endl;
        cout << "    \\/_" << endl;
        cout << endl;
        cout << endl;

        cout << "You adventurous soul! You open the heavy hatch to reveal a dark, well-like structure below." << endl;
        cout << "You peer over in curiosity, but peer a bit too far. You fall in the hatch!!!" << endl;
        cout << "Hurt, but not terribly so, you pull yourself up out of the hatch." << endl;
        cout << "Nothing good was down there, and you got injured. This sucks." << endl;
        cout <<  "You lose 4 health points." << endl;
        return 4;
    }
    if (openHatch == 2)
    {
        cout << "You chose the safer path. Boring, but probably ultimately for the better. You keep walking by and "
                "go about your day." << endl;
        return 0;
    }
}
