/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description:
*********************************************************************/

#include <iostream>
#include <string>
#include <random>
#include <vector>
#include <cstdlib>
#include "inputValid.hpp"
#include "Space.hpp"
#include "Game.hpp"
#include "Item.hpp"
#include "MysterySpace.hpp"
#include "DangerSpace.hpp"
#include "ItemSpace.hpp"
#include "Item.hpp"
#include "Berries.hpp"
#include "Wood.hpp"
#include "Knife.hpp"
#include "CoconutPhone.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

/******************************************************
* Constructor for the Game class. Creates a new instance
 * of the Game, sets the health points to 20, and creates
 * a "backpack" using an STL vector and reserves 5 slots.
 * Creates 12 pointers to Space nodes, and all but the
 * starting space are created randomly.
******************************************************/
Game::Game()
{
    int healthPoints = 20;
    vector<Item> backpack;
    backpack.reserve(5);

    // 12 spaces total
    Space *startingSpace = new Space;
    Space *space1 = createNewSpaceType();
    Space *space2 = createNewSpaceType();
    Space *space3 = createNewSpaceType();
    Space *space4 = createNewSpaceType();
    Space *space5 = createNewSpaceType();
    Space *space6 = createNewSpaceType();
    Space *space7 = createNewSpaceType();
    Space *space8 = createNewSpaceType();
    Space *space9 = createNewSpaceType();
    Space *space10 = createNewSpaceType();
    Space *space11 = createNewSpaceType();

    // sets the currentSpace to the first space created.
    currentSpace = startingSpace;

    // these series of functions "link" all of the nodes together to form a 'grid-like' pattern
    spaceLinker(currentSpace, space1, right);
    spaceLinker(currentSpace, space4, down);
    spaceLinker(space1, space2, right);
    spaceLinker(space1, space5, down);
    spaceLinker(space2, space3, right);
    spaceLinker(space2, space6, down);
    spaceLinker(space3, space7, down);
    spaceLinker(space4, space5, right);
    spaceLinker(space4, space8, down);
    spaceLinker(space5, space9, down);
    spaceLinker(space5, space6, right);
    spaceLinker(space6, space10, down);
    spaceLinker(space6, space7, right);
    spaceLinker(space7, space11, down);
    spaceLinker(space8, space9, right);
    spaceLinker(space9, space10, right);
    spaceLinker(space10, space11, right);

   // steps start at 0
    steps = 0;
}

/******************************************************
* Used to "link" two Space nodes together. Takes in
 * 2 pointers to space nodes and an enum representing the
 * direction, and links the two spaces in the given
 * direction.
******************************************************/
void Game::spaceLinker(Space *s1, Space *s2, Direction d)
{
    switch (d)
    {
        case up:
            s1->setUp(s2);
            s2->setDown(s1);
            break;
        case down:
            s1->setDown(s2);
            s2->setUp(s1);
            break;
        case left:
            s1->setLeft(s2);
            s2->setRight(s1);
            break;
        case right:
            s1->setRight(s2);
            s2->setLeft(s1);
            break;
    }
}

/******************************************************
* Generates a random number and creates new space types.
 * There is a 30% chance the new space will be an Item
 * Space, a 30% chance it will be a Danger Space, 30%
 * chance it will be a Mystery Space, and 10% chance it
 * will be a regular space. Returns newly created space,
 * and increases the number of spaces in the game.
******************************************************/
Space* Game::createNewSpaceType()
{
    int newSpaceType = getRandomNum(1, 10);

    if (newSpaceType == 1 || newSpaceType == 2 || newSpaceType == 3)
    {
        new ItemSpace;
        numSpaces++;
//        cout << "New Item space created" << endl;
        return new ItemSpace;
    } else if (newSpaceType == 4 || newSpaceType == 5 || newSpaceType == 6)
    {
        new DangerSpace;
        numSpaces++;
//        cout << "New Danger space created" << endl;
        return new DangerSpace;
    } else if (newSpaceType == 7 || newSpaceType == 8 || newSpaceType == 9)
    {
        new MysterySpace;
        numSpaces++;
//        cout << "New Mystery space created" << endl;
        return new MysterySpace;
    } else {
        new Space;
        numSpaces++;
//        cout << "New space created" << endl;
        return new Space;
    }
}

/******************************************************
* Simple game menu that provides 4 options to the user.
 * Uses input validation to obtain user selection. Allows
 * user to print their current location, current health points,
 * backpack, or do nothing.
******************************************************/
void Game::gameMenu()
{
    cout << "1. Print current location." << endl;
    cout << "2. Print current Health Points." << endl;
    cout << "3. Print contents of backpack." << endl;
    cout << "4. Do nothing." << endl;

    cout << endl;
    cout << "---------------------------" << endl;
    cout << endl;

    int choice = returnInt();

    while (choice <= 0 || choice > 4)
    {
        cout << "Please enter an integer representing your choice." << endl;
        choice = returnInt();
    }
    if (choice == 1)
    {
        displayCurrentLocation();
    }
    if (choice == 2)
    {
        cout << "Your current Health Points are " << this->getHealthPoints() << endl;
    }
    if (choice == 3)
    {
        if (backpack.empty())
        {
            cout << "Your backpack is currently empty." << endl;
        } else {
            displayBackpack();
        }
    }
    if (choice == 4)
    {

    }
}

/******************************************************
* Runs main game program and continues to
 * invoke game rounds until steps reaches 20.
******************************************************/
void Game::startGame()
{

//    cout << "Number of current spaces is: " << numSpaces << endl;
//    cout << "Starting space type is: " << currentSpace->getName() << endl;

    displayWelcome();
    printMap();


    while (steps < 14)
    {
        gameRound();
    }

//    cout << "Current health points are: " << getHealthPoints() << endl;
//    setHealthPoints(currentSpace->runEvent());
//    cout << "Current health points are: " << getHealthPoints() << endl;

//    cout << "Backpack size is: " << backpack.size() << endl;

}

/******************************************************
* prints out welcome message, game context, rules, and
* objective.
******************************************************/
void Game::displayWelcome()
{
    cout << "_____" << endl;
    cout << " \\ K \\__      ____" << endl;
    cout << "__\\   \\_______\\___\\____________" << endl;
    cout << "< /_/   .....................  `-." << "   ~ SURVIVING COCONUT ISLAND ~    " << endl;
    cout << "`-----------,----,--------------'" << endl;
    cout << "          _/____/" << endl;
    cout << endl;

    cout << "T H E  S E T T I N G " << endl;
    cout << "----------------------\n" << endl;
    cout << "You have just survived a plane crash, and have awoken in a forest amongst\n"
            "tall trees, wild plants, mysterious hatches and TONS of coconuts. You no longer have any of your\n"
            "belongings, except the clothes on your back. You are not sure if others survived,\n"
            "but you see no sign of other human life around you.\n\n";


    cout << "T H E  R U L E S " << endl;
    cout << "----------------------\n" << endl;
    cout << "You are only able to move UP, DOWN, LEFT, or RIGHT -- so choose your moves carefully...\n"
            "Along the way, you may encounter DANGER SPACES -- where you will need to battle ferral animals, \n"
            "or weather treacherous storms...\n"
            "Or you may happen upon MYSTERY SPACES -- where you can test your luck and tempt fate...\n"
            "Lastly, you will stumble upon ITEM SPACES -- where you will be gifted various items that may\n "
            "help you in your journey. Be aware, you have a knapsack but can only hold FIVE items.\n"
            "Select your items consciously...\n\n";


    cout << "T H E  O B J E C T I V E " << endl;
    cout << "----------------------\n" << endl;
    cout << "Your objective: find a way to get off of this island and get to safety.\n\n"
            "You have 14 nights on ths island to find the fabled and elusive ~Coconut Phone~.\n"
            "Then, and only then, are you able to escape the Coconut Island. \n"
            "Will you survive Coconut Island ... ?\n\n";

    cout << "Starting health points are: " << this->getHealthPoints() << endl;
    cout << ".-~-.-~-.-~.-~-.-~-.-~.-~-.-~-.-~" << endl;

}

/******************************************************
* first checks if the player is still alive - meaning
 * their health points are above 0. If isStillAlive
 * returns false, prints a message indicating the game is
 * over and the program terminates.
 * Otherwise, prints rounds and prompts user for next
 * move. Checks if next space is an item space and if so,
 * allows the user to add item to their backpack. Otherwise,
 * runs the event space and updates Health Points after
 * the result of the event.
******************************************************/
void Game::gameRound()
{

    if (!isStillAlive())
    {
        cout << "Game over!" << endl;
        exit(0);
    }

    cout << " -~*~--~*~--~*~--~*~--~*~--~*~-" << endl;
    cout << "\t \t    ROUND " << steps+1 << endl;
    cout << " -~*~--~*~--~*~--~*~--~*~--~*~-" << endl;
    getNextMove();
//    cout << "Next space is: " << currentSpace->getName() << endl;

    // if the next space is an item space, allows user to add item to backpack.
    if (currentSpace->getName() == "Item Space")
    {
        switch (currentSpace->runEvent())
        {
            case 1:
                addToBackpack(createNewItem(1));
                break;
            case 2:
                addToBackpack(createNewItem(2));
                break;
            case 3:
                addToBackpack(createNewItem(3));
                break;
            case 4:
                addToBackpack(createNewItem(4));
                break;
        }
    } else {
//        this->setHealthPoints(currentSpace->runEvent());
        int hpChange = currentSpace->runEvent();
        cout << "hpChange is: " << hpChange << endl;
        if (!(hpChange <= -4 || hpChange > 10))
        {
            setHealthPoints(hpChange);
            cout << "Updated HP are: " << this->getHealthPoints() << endl;
        }
    }
    gameMenu();

}

/******************************************************
* checks if the player's health points are below or
 * equal to 0. If so, returns false, indicating the
 * player is not alive and the game should end.
******************************************************/
bool Game::isStillAlive()
{
    if (this->getHealthPoints() <= 0)
    {
        cout << "Your current health points are: " << this->getHealthPoints() << endl;
        return false;
    } else {
        return true;
    }
}

/******************************************************
* takes in an integer representing an item 'type' and
 * will create a new item of said type and return it
 * back to the function, so that it can be added
 * to the user's backpack.
******************************************************/
Item* Game::createNewItem(int itemType)
{
    Item *newItem = nullptr;

    switch (itemType)
    {
        case 1:
            cout << "You got a new Wood item!" << endl;
            newItem = new Wood;
            return newItem;
        case 2:
            cout << "You got a new Knife item!" << endl;
            newItem = new Knife;
            return newItem;
        case 3:
            cout << "You found some Berries!" << endl;
            newItem = new Berries;
            return newItem;
        case 4:
            cout << "You found the Coconut Phone!!!!" << endl;
            newItem = new CoconutPhone;
            return newItem;
    }
}

/******************************************************
* prompts user on where to move next. Once a selection
 * is made, checks if the desired space is valid (meaning
 * it is NOT pointing to nullptr). If the space is valid,
 * invokes the move() function.
******************************************************/
void Game::getNextMove()
{
    cout << "Where would you like to move next?" << endl;
    cout << " 1. Up \n 2. Down \n 3. Left \n 4. Right" << endl;
    int nextMove = returnInt();
    while (nextMove <= 0 || nextMove > 4)
    {
        cout << "Please enter an integer representing your choice." << endl;
        cout << " 1. Up \n 2. Down \n 3. Left \n 4. Right" << endl;
        nextMove = returnInt();
    }

    switch (nextMove)
    {
        case 1:
            if (canMove(nextMove)) // if true
            {
                move(up);
            }
            break;
        case 2:
            if (canMove(nextMove)) // if true
            {
                move(down);
            }
            break;
        case 3:
            if (canMove(nextMove)) // if true
            {
                move(left);
            }
            break;
        case 4:
            if (canMove(nextMove)) // if true
            {
                move(right);
            }
            break;
    }
}

/******************************************************
* based on a given integer input representing a direction,
 * (up, down, left, right), checks if the next space is
 * valid and if so, returns true, indicating the player
 * is able to move. If not, the function returns false,
 * indicating the player must choose another direction
 * to move.
******************************************************/
bool Game::canMove(int direction)
{
    if (direction == 1)
    {
        if (currentSpace->getUp()) {
            return true;
        } else {
            cout << "no." << endl;
            return false;
        }
    } else if (direction == 2)
    {
        if (currentSpace->getDown())
        {
            return true;
        } else {
            cout << "no." << endl;

            return false;
        }
    } else if (direction == 3)
    {
        if (currentSpace->getLeft())
        {
            return true;
        } else {
            cout << "no." << endl;

            return false;
        }
    } else if (direction == 4)
    {
        if (currentSpace->getRight())
        {
            return true;
        } else {
            cout << "no." << endl;

            return false;
        }
    }
}

void Game::printMap()
{
    cout << "- - - - - - - - - - - - - - - - " << endl;
    cout << "|                              |\n";
    cout << "|   #      *      *       *    |\n";
    cout << "|                              |\n";
    cout << "|   *      *      *       *    |\n";
    cout << "|                              |\n";
    cout << "|   *      *      *       *    |\n";
    cout << "|                              |\n";
    cout << "|   *      *      *       *    |\n";
    cout << "|                              |\n";
    cout << "- - - - - - - - - - - - - - - - " << endl;


}

/******************************************************
* takes in an enum representing a direction, and depending
 * on the direction, grabs the current space's
******************************************************/
void Game::move(Direction d)
{
    switch(d)
    {
        case up:
            currentSpace = currentSpace->getUp();
//            cout << "Moving up!" << endl;
            break;
        case down:
            currentSpace = currentSpace->getDown();
//            cout << "Moving down!" << endl;
            break;
        case left:
            currentSpace = currentSpace->getLeft();
//            cout << "Moving left!" << endl;
            break;
        case right:
            currentSpace = currentSpace->getRight();
//            cout << "Moving right!" << endl;
            break;
    }

    steps++;
}

/******************************************************
* takes in a min and max, and returns a random number
 * with that range.
******************************************************/
int Game::getRandomNum(int min, int max)
{
    // copied from https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
    std::random_device seed;
    std::mt19937 gen(seed());
    std::uniform_int_distribution<> roll(min, max);

    return roll(gen);
}

/******************************************************
* returns current health points.
******************************************************/
int Game::getHealthPoints()
{
    return healthPoints;
}

/******************************************************
* sets player's heatlh points. Takes in an integer
 * and subtracts from health points.
******************************************************/
void Game::setHealthPoints(int hp)
{
    cout << "passed in figure is: " << hp << endl;
    cout << "current health points are: " << this->healthPoints << endl;
    this->healthPoints -= hp;
}

/******************************************************
* First checks if there is a valid space, and if so,
 * displays current location, and the up, down, left
 * and right spaces (if applicable).
******************************************************/
void Game::displayCurrentLocation()
{
    cout << "You are currently at a " << currentSpace->getName() << " space" << endl;
    if (currentSpace->getUp())
    {
        cout << "The space above you is a " << currentSpace->getUp()->getName() << " space" << endl;
    } else {
        cout << "There is nothing above you!" << endl;
    }
    if (currentSpace->getDown())
    {
        cout << "The space below you is a " << currentSpace->getDown()->getName() << " space" << endl;
    } else {
        cout << "There is nothing below you!" << endl;
    }
    if (currentSpace->getLeft())
    {
        cout << "The space to your left is a " << currentSpace->getLeft()->getName() << " space" << endl;
    } else {
        cout << "There is nothing to the left of you!" << endl;
    }
    if (currentSpace->getRight())
    {
        cout << "The space to your right is a " << currentSpace->getRight()->getName() << " space" << endl;
    } else {
        cout << "There is nothing to the right of you!" << endl;
    }
}

/******************************************************
* Iterates through all items in the backpack and prints
 * the name of each item.
******************************************************/
void Game::displayBackpack()
{
    // empty check done before
    cout << "The contents of your backpack are: " << endl;

    for (vector<Item>::iterator i = backpack.begin(); i != backpack.end(); ++i)
    {
        cout << i->getName() << ' ';
    }
    cout << endl;
}

/******************************************************
* Prompts the user if they'd like to add a new item
 * to their backpack.
******************************************************/
void Game::addToBackpack(Item *itemIn)
{

    if (backpack.size() <= 4) // max capacity of 5 items
    {
        cout << "Would you like to add this item to your backpack?" << endl;
        cout << "1. Yes \n2. No" << endl;
        int addItem = returnInt();
        while (addItem <= 0 || addItem > 2)
        {
            cout << "Please enter an integer representing your selection." << endl;
            cout << "1. Yes \n2. No" << endl;
            addItem = returnInt();
        }

        if (addItem == 1)
        {
            backpack.push_back(*itemIn);
            displayBackpack();
            cout << endl;
        }
        if (addItem == 2)
        {
            cout << "This item will not be added to your backpack." << endl;
        }
    } else {
        cout << "Sorry! Your backpack is at full capacity (5 items).\n "
                "Would you like to remove the first item in your backpack to free up space? \n1. Yes \n 2. No" << endl;

        int choice = returnInt();
        while (choice <= 0 || choice > 2)
        {
            cout << "Please enter an integer representing your selection." << endl;
            cout << "1. Yes \n2. No" << endl;
            choice = returnInt();
        }
        if (choice == 1)
        {
            backpack.erase(backpack.begin());
        }
        if (choice == 2)
        {
            cout << "Nothing will be removed from your backpack. You'll have to forgo this item." << endl;
        }
    }
}
