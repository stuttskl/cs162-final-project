/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description: Source file for Coconut item. Contains constructor,
 * destructor, and getter function to retreive name.
*********************************************************************/
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "Coconut.hpp"

/******************************************************
* Constructor for Coconut Item. Sets name and description.
******************************************************/
Coconut::Coconut()
{
    name = "Coconut";
    description = "A regular coconut. Definitely not a phone.";
}

/******************************************************
* Destructor for Coconut Item.
******************************************************/
Coconut::~Coconut() {}

/******************************************************
* Returns item name.
******************************************************/
string Coconut::getName()
{
    return name;
}
