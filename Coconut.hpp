/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description: Header file for Coconut item. Contains constructor,
 * destructor, and getter function to retreive name.
*********************************************************************/
#ifndef FINAL_PROJECT_KNIFE_HPP
#define FINAL_PROJECT_KNIFE_HPP

#include <string>
#include "Item.hpp"

class Coconut : public Item {
public:
    Coconut();
    ~Coconut();
    std::string getName();
};


#endif //FINAL_PROJECT_KNIFE_HPP
