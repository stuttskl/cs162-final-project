/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description: Source file for Coconut Phone item. Contains constructor,
 * destructor, and getter function to retreive name.
*********************************************************************/
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "CoconutPhone.hpp"

/******************************************************
* Constructor for Coconut Phone. Sets name and description.
******************************************************/
CoconutPhone::CoconutPhone()
{
    name = "Coconut Phone";
    description = "YOU FOUND IT! Incredible!";
}

/******************************************************
* Destructor for Coconut Phones.
******************************************************/
CoconutPhone::~CoconutPhone() {}

/******************************************************
* Returns item name.
******************************************************/
string CoconutPhone::getName()
{
    return name;
}
