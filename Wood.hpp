/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description: Source file for Wood item. Contains constructor,
 * destructor, and getter function to retreive name.
*********************************************************************/
#include <string>
#include "Item.hpp"
#ifndef FINAL_PROJECT_WOOD_HPP
#define FINAL_PROJECT_WOOD_HPP


class Wood : public Item {
public:
    Wood();
    ~Wood();
    std::string getName();
};


#endif //FINAL_PROJECT_WOOD_HPP
