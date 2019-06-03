/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description:
*********************************************************************/
#ifndef FINAL_PROJECT_BERRIES_HPP
#define FINAL_PROJECT_BERRIES_HPP

#include <iostream>
#include <string>
#include "Item.hpp"


class Berries : public Item {
public:
    Berries();
    ~Berries();
    std::string getName();
    std::string getDescription();
};


#endif //FINAL_PROJECT_BERRIES_HPP
