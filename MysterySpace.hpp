/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description: Mystery Space header file. Contains constructor, destructor,
 * getter functions for name and an overridden function, runEvent, that
 * executes the Space's main user interaction.
*********************************************************************/

#include "Space.hpp"
#include <string>

#ifndef FINAL_PROJECT_MYSTERYSPACE_HPP
#define FINAL_PROJECT_MYSTERYSPACE_HPP


class MysterySpace : public Space {
private:
    std::string name;
public:
    MysterySpace();
    ~MysterySpace();
    std::string getName();
    int runEvent();
};


#endif //FINAL_PROJECT_MYSTERYSPACE_HPP
