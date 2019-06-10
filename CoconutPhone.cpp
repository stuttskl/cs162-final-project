/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description:
*********************************************************************/
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "CoconutPhone.hpp"

/******************************************************
*
******************************************************/
CoconutPhone::CoconutPhone()
{
    name = "Coconut Phone";
    description = "YOU FOUND IT! Incredible!";
}


/******************************************************
*
******************************************************/
CoconutPhone::~CoconutPhone() {}

/******************************************************
*
******************************************************/
string CoconutPhone::getName()
{
    return name;
}

/******************************************************
*
******************************************************/
string CoconutPhone::getDescription()
{
    return description;
}