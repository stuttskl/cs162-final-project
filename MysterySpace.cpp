#include "MysterySpace.hpp"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::cin;


MysterySpace::MysterySpace()
{
    name = "Mystery Space";
}

MysterySpace::~MysterySpace() {}

string MysterySpace::getName()
{
    return name;
}

int MysterySpace::runEvent()
{
    cout << " -~*~--~*~--~*~--~*~--~*~--~*~-" << endl;
    cout << "\t \t  MYSTERY SPACE" << endl;
    cout << " -~*~--~*~--~*~--~*~--~*~--~*~-" << endl;
    cout << "If you're feeling rather lucky, you can opt to roll a weighted die. There is a greater chance you will "
            "be blessed with a good event, however if you do experience a bad event, it will be BAD. Worse than if "
            "you were to simply take the 50/50 chance... What will you do? Are you feeling risky?" << endl;
    cout << "1. Roll the balanced die." << endl;
    cout << "2. Roll the weighted die. Bigger risk, potentially bigger reward." << endl;

    int whichDie;
    cin >> whichDie;
    if (whichDie == 1)
    {
        // roll normal die
    }
    if (whichDie == 2)
    {
        int weightedRollResult = rollWeightedDie();


        if (weightedRollResult == 1)
        {
            cout << "A good thing will happen." << endl;
        }
        if (weightedRollResult == 2)
        {
            cout << "A VERY bad thing will happen." << endl;
        }
    }


    cout << "----------------------------------------" << endl;
//    int goodOrBad = getRand(1, 6);
//    switch (goodOrBad)
//    {
//        case 1:
//            cout << "Suddenly a heavy downpour and brutal winds wash over you, and you hardly have any time to find "
//                    "cover. As a result, you get a little sick. Health decreases by 2." << endl;
//            return -2;
//        case 2:
//            cout << "Out of nowhere, you are attacked by an angry, rabid squirrel. You have no time to think, and "
//                    "are unfortunately injured. Health decreases by 4." << endl;
//            return -4;
//        case 3:
//            cout << "You suddenly realize your knapsack feels a lot lighter… three items lighter, to be specific."
//                    "You realize you left your knapsack alone earlier, and another island dweller has stolen 3 "
//                    "of your items. You lose 3 items from your knapsack." << endl;
//            return -3;
//        case 4:
//            cout << "You’ve just stumbled upon a small dead animal. You feel sad that the animal did not survive, "
//                    "but grateful for the nutrition it provides. Health increases by 4." << endl;
//            return 4;
//        case 5:
//            cout << "Despite the overbearing struggle for survival, you realize that you are on a beautiful island, "
//                    "and the weather is remarkably beautiful today. You take just a moment, to close your eyes,"
//                    "breathe deeply and feel gratitude that you are alive. Morale increases by 2." << endl;
//            return 2;
//        case 6:
//            cout << "You have been walking for what seems like hours, and you stumble upon a beautiful meadow with the "
//                    "most gorgeous and fragrant flowers you've seen. This puts you in a good mood, and to make things "
//                    "even better, you discover delicious fruits. Health increases by 2, Morale increases by 3." << endl;
//            return 2;
//    }
}

