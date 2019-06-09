/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description:
*********************************************************************/
#include "MysterySpace.hpp"
#include "inputValid.hpp"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::cin;

/******************************************************
* Constructor for MysterySpace. Sets default name.
******************************************************/
MysterySpace::MysterySpace()
{
    name = "Mystery Space";
}

/******************************************************
* Destructor for MysterySpace.
******************************************************/
MysterySpace::~MysterySpace() {}

/******************************************************
* Returns name of space type.
******************************************************/
string MysterySpace::getName()
{
    return name;
}

/******************************************************
*
******************************************************/
int MysterySpace::runEvent()
{
    cout << " -~*~--~*~--~*~--~*~--~*~--~*~-" << endl;
    cout << "\t \t  MYSTERY SPACE" << endl;
    cout << " -~*~--~*~--~*~--~*~--~*~--~*~-" << endl;


    cout << "   .-------.    ______" << endl;
    cout << "  /   o   /|   /\\     \\" << endl;
    cout << " /_______/o|  /o \\  o  \\" << endl;
    cout << " | o     | | /   o\\_____\\" << endl;
    cout << " |   o   |o/ \\o   /o    /" << endl;
    cout << " |     o |/   \\ o/  o  /" << endl;
    cout << " '-------'     \\/____o/" << endl;



    cout << "If you're feeling rather lucky, you can opt to roll a weighted die. \n"
            "There is a greater chance you will "
            "be blessed with a good event, however if you do experience a bad event, \n"
            "it will be BAD. Worse than if "
            "you were to simply take the 50/50 chance... What will you do? Are you feeling \n"
            "risky?" << endl;
    cout << endl;
    cout << "---------------------------" << endl;
    cout << endl;
    cout << "1. Roll the balanced die." << endl;
    cout << "2. Roll the weighted die. Bigger risk, potentially bigger reward." << endl;

    int whichDie = returnInt();
    while (whichDie <= 0 || whichDie > 2)
    {
        cout << "Please enter an integer representing your choice." << endl;
        cout << "1. Roll the balanced die." << endl;
        cout << "2. Roll the weighted die. Bigger risk, potentially bigger reward." << endl;
        whichDie = returnInt();
    }
    if (whichDie == 1)
    {
        // roll normal die
        int goodOrBad = getRand(1, 4);
        switch (goodOrBad)
        {
            case 1:
                cout << "Suddenly a heavy downpour and brutal winds wash over you, and you hardly have any time to find "
                        "cover. As a result, you get a little sick. Health decreases by 2." << endl;
                return 2;
            case 2:
                cout << "Out of nowhere, you are attacked by an angry, rabid squirrel. You have no time to think, and "
                        "are unfortunately injured. Health decreases by 4." << endl;
                return 4;
            case 3:
                cout << "You’ve just stumbled upon a small dead animal. You feel sad that the animal did not survive, "
                        "but grateful for the nutrition it provides. Health increases by 4." << endl;
                return -3;
            case 4:
                cout << "Despite the overbearing struggle for survival, you realize that you are on a beautiful island, "
                        "and the weather is remarkably beautiful today. You take just a moment, to close your eyes,"
                        "breathe deeply and feel gratitude that you are alive. Health increases by 2." << endl;
                return -2;
        }

    }
    if (whichDie == 2)
    {
        int weightedRollResult = rollWeightedDie();

        if (weightedRollResult == 1)
        {
            cout << "AMAZING! You have beat the odds and have been spared from experiencing a very bad event. "
                    "Nothing else to see here." << endl;
            return 0;
        }
        if (weightedRollResult == 2)
        {
            cout << "You have been tempted by chance, and it has failed you. "
                    "You lose 8 Health Points."<< endl;
            return 8;
        }
    }
}

