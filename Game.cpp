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
#include "Sweater.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

/******************************************************
*
******************************************************/
Game::Game()
{
    int healthPoints = 10;

    // 12 spaces total
    Space *startingSpace = new ItemSpace;
    currentSpace = startingSpace;
    vector<Item> backpack;
    backpack.reserve(10);
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

    steps = 0;
}

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

void Game::gameMenu()
{
    cout << "1. Print current location." << endl;
    cout << "2. Print current Health Points." << endl;
    cout << "3. Print contents of backpack." << endl;
    int choice = returnInt();
    while (choice <= 0 || choice > 3)
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
        cout << "Your current Health Points are " << getHealthPoints() << endl;
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
}

/******************************************************
*
******************************************************/
void Game::startGame()
{
    //gameMenu();

    cout << "Number of current spaces is: " << numSpaces << endl;
    cout << "Starting space type is: " << currentSpace->getName() << endl;
    while (steps <= 10)
    {
        gameRound();
    }


//    nextMove();

/*
    cout << "_____" << endl;
    cout << " \\ K \\__      ____" << endl;
    cout << "__\\   \\_______\\___\\____________" << endl;
    cout << "< /_/   .....................  `-." << endl;
    cout << "`-----------,----,--------------'" << endl;
    cout << "          _/____/" << endl;
    cout << endl;
    cout << "You have just survived a plane crash, and have awoken in a forest amongst tall trees, wild plants and mysterious "
            "hatches. You no longer have any of your belongings, except the clothes on your back. "
            "You are not sure if others survived, but you see no sign of other human life around you. " << endl;
    cout << "Your objective: find a way to get off of this island and get to safety. "
            "There are three possible ways to make it off the island alive:\n"
            "1. Gather enough wood to make a large bonfire. There are small planes that fly overhead, but nothing "
            "except a huge bonfire would catch their attention.\n"
            "2. Gather the correct items and build a raft, and escape to safety via the sea. \n"
            "3. Gather the correct items and build a jetpack (easier than you’d think) to fly off to safety." << endl;
*/
//    cout << "Current health points are: " << getHealthPoints() << endl;
//    setHealthPoints(currentSpace->runEvent());
//    cout << "Current health points are: " << getHealthPoints() << endl;
//    Item *i1 = new Item;
//    Wood *w1 = new Wood;

//    addToBackpack(i1);
//    addToBackpack(w1);
//    displayBackpack();
    cout << "Backpack size is: " << backpack.size() << endl;


}

/******************************************************
*
******************************************************/
void Game::gameRound()
{
    cout << " -~*~--~*~--~*~--~*~--~*~--~*~-" << endl;
    cout << "\t \t    ROUND " << steps+1 << endl;
    cout << " -~*~--~*~--~*~--~*~--~*~--~*~-" << endl;
    nextMove();
    cout << "Next space is: " << currentSpace->getName() << endl;

    if (currentSpace->getName() == "Item Space")
    {
        switch (currentSpace->runEvent())
        {
            case 10:
                addToBackpack(createNewItem(10));
                break;
            case 11:
                addToBackpack(createNewItem(11));
                break;
            case 12:
                addToBackpack(createNewItem(12));
                break;
            case 13:
                addToBackpack(createNewItem(13));
                break;
            case 14:
                addToBackpack(createNewItem(14));
                break;
        }
    } else {
        currentSpace->runEvent();
    }

    bool shouldKeepPlaying = true;
    if (!stillAlive())
    {
        shouldKeepPlaying = false;
    }
}

/******************************************************
*
******************************************************/
bool Game::stillAlive()
{
    if (getHealthPoints() <= 0)
    {
        cout << "Health points are below or equal to 0." << endl;
        return false;
    } else {
        return true;
    }
}

/******************************************************
*
******************************************************/
Item* Game::createNewItem(int itemType)
{
    Item *newItem = nullptr;

    switch (itemType)
    {
        case 10:
            newItem = new Wood;
            return newItem;
        case 11:
            newItem = new Knife;
            return newItem;
        case 12:
            newItem = new Sweater;
            return newItem;
        case 13:
            newItem = new Berries;
            return newItem;
        case 14:
            newItem = new Item;
            return newItem;
    }

}

/******************************************************
*
******************************************************/
void Game::nextMove()
{
    int nextMove = returnInt();
    cout << "Where would you like to move next?" << endl;
    cout << " 1. Up \n 2. Down \n 3. Left \n 4. Right" << endl;
    while (nextMove <= 0 || nextMove > 4)
    {
        cout << "Please enter an integer representing your choice." << endl;
        cout << " 1. Up \n 2. Down \n 3. Left \n 4. Right" << endl;
        nextMove = returnInt();
    }
    switch (nextMove)
    {
        case 1:
            if (currentSpace->getUp() == nullptr)
            {
                cout << "Sorry! Cannot move up!" << endl;
                break;
            }
            move(up);
            break;
        case 2:
            if (currentSpace->getDown() == nullptr)
            {
                cout << "Sorry! Cannot move down!" << endl;
                break;
            }
            move(down);
            break;
        case 3:
            if (currentSpace->getLeft() == nullptr)
            {
                cout << "Sorry! Cannot move left!" << endl;
                break;
            }
            move(left);
            break;
        case 4:
            if (currentSpace->getRight() == nullptr)
            {
                cout << "Sorry! Cannot move right!" << endl;
                break;
            }
            move(right);
            break;
    }
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
            cout << "Moving up!" << endl;
            break;
        case down:
            currentSpace = currentSpace->getDown();
            cout << "Moving down!" << endl;
            break;
        case left:
            currentSpace = currentSpace->getLeft();
            cout << "Moving left!" << endl;
            break;
        case right:
            currentSpace = currentSpace->getRight();
            cout << "Moving right!" << endl;
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
*
******************************************************/
void Game::setHealthPoints(int hp)
{
    healthPoints -= hp;
}

/******************************************************
* First checks if there is a valid space, and if so,
 * displays current location, and the up, down, left
 * and right spaces (if applicable).
******************************************************/
void Game::displayCurrentLocation()
{
    cout << "You are currently at a " << currentSpace->getName() << endl;
    if (currentSpace->getUp())
    {
        cout << "The space above you is " << currentSpace->getUp()->getName() << endl;
    }
    if (currentSpace->getDown())
    {
        cout << "The space below you is " << currentSpace->getDown()->getName() << endl;
    }
    if (currentSpace->getLeft())
    {
        cout << "The space to your left is " << currentSpace->getLeft()->getName() << endl;
    }
    if (currentSpace->getRight())
    {
        cout << "The space to your right is " << currentSpace->getRight()->getName() << endl;
    }
}

/******************************************************
* Iterates through all items in the backpack and prints
 * the name of each item.
******************************************************/
void Game::displayBackpack()
{
    // empty check done before

    for (vector<Item>::iterator i = backpack.begin(); i != backpack.end(); ++i)
    {
        cout << i->getName() << ' ';
    }
}

/******************************************************
* Prompts the user if they'd like to add a new item
 * to their backpack.
******************************************************/
void Game::addToBackpack(Item *itemIn)
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
    }
    if (addItem == 2)
    {
        cout << "This item will not be added to your backpack." << endl;
    }
}
