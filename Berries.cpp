/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description: Source file for Berries item. Contains constructor,
 * destructor, and getter function to retreive name.
*********************************************************************/
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "Berries.hpp"

/******************************************************
* Constructor for Berries. Sets name and description.
******************************************************/
Berries::Berries()
{
    name = "Berries";
    description = "Wild island berries. Yummm!";
}

/******************************************************
* Destructor for Berries.
******************************************************/
Berries::~Berries() {}

/******************************************************
* Returns item name
******************************************************/
string Berries::getName()
{
    return name;
}
