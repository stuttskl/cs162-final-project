/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description: Item Space source file. Contains constructor, destructor,
 * getter functions for name and an overridden function, runEvent, that
 * executes the Space's main user interaction.
*********************************************************************/
#include "ItemSpace.hpp"
#include "Item.hpp"
#include "Berries.hpp"
#include "CoconutPhone.hpp"
#include "Coconut.hpp"
#include "Wood.hpp"
#include "Game.hpp"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

/******************************************************
* ItemSpace default constructor.
******************************************************/
ItemSpace::ItemSpace()
{
    name = "Item Space";
}

/******************************************************
* Destructor for ItemSpace.
******************************************************/
ItemSpace::~ItemSpace() {}

/******************************************************
* Returns name.
******************************************************/
string ItemSpace::getName()
{
    return name;
}

/******************************************************
* runs event for the Item Space. The goal for the user
 * is to obtain the coconut phone. Returns a random
 * integer, and this will determine which type of item
 * is generated.
******************************************************/
int ItemSpace::runEvent()
{
    cout << "-~*~--~*~--~*~--~*~--~*~--~*~-" << endl;
    cout << " ITEM SPACE" << endl;
    cout << "-~*~--~*~--~*~--~*~--~*~--~*~-" << endl;

    return generateNewItem();
}
