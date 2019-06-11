/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description: Source file for an item. Contains field for name,
 * description, constructor, destructor and a virtual overriden function
 * to retreive the item's name.
*********************************************************************/
#include <iostream>
#include <string>
#include "Item.hpp"


using std::cout;
using std::endl;
using std::string;

/******************************************************
* Constructor
******************************************************/
Item::Item() {}

/******************************************************
* Destructor
******************************************************/
Item::~Item() {}

/******************************************************
* Returns name of space type.
******************************************************/
string Item::getName()
{
    return name;
}
