/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description: Source file for Wood item. Contains constructor,
 * destructor, and getter function to retreive name.
*********************************************************************/
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "Wood.hpp"

/******************************************************
* Constructor for Berries. Sets name and description.
******************************************************/
Wood::Wood()
{
    name = "Wood";
    description = "Straight from the source! This is great wood, excellent for building fires.";
}

/******************************************************
* Destructor for Berries.
******************************************************/
Wood::~Wood() {}

/******************************************************
* Returns item name
******************************************************/
string Wood::getName()
{
    return name;
}
