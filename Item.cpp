/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description:
*********************************************************************/
#include <iostream>
#include <string>
#include "Item.hpp"


using std::cout;
using std::endl;
using std::string;

Item::Item() {}
Item::~Item() {}
string Item::getName()
{
    return name;
}
string Item::getDescription()
{
    return description;
}

void Item::addToPack(Item*)
{}