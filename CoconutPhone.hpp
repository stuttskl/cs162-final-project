/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description: Header file for CoconutPhone item. Contains constructor,
 * destructor, and getter function to retreive name.
*********************************************************************/

#ifndef FINAL_PROJECT_COCONUTPHONE_HPP
#define FINAL_PROJECT_COCONUTPHONE_HPP

#include <iostream>
#include <string>
#include "Item.hpp"


class CoconutPhone : public Item {
public:
    CoconutPhone();
    ~CoconutPhone();
    std::string getName();
};


#endif //FINAL_PROJECT_COCONUTPHONE_HPP
