/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description: Item Space header file. Contains constructor, destructor,
 * getter functions for name and an overridden function, runEvent, that
 * executes the Space's main user interaction.
*********************************************************************/
#ifndef FINAL_PROJECT_ITEMSPACE_HPP
#define FINAL_PROJECT_ITEMSPACE_HPP

#include <string>
#include "Space.hpp"
#include "Item.hpp"

class ItemSpace : public Space {
private:
    std::string name;
public:
    ItemSpace();
    ~ItemSpace();
    std::string getName();
    int runEvent();
};


#endif //FINAL_PROJECT_ITEMSPACE_HPP
