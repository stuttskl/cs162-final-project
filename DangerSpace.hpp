/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description: Danger Space header file. Contains constructor, destructor,
 * getter functions for name and an overridden function, runEvent, that
 * executes the Space's main user interaction.
*********************************************************************/
#ifndef FINAL_PROJECT_DANGERSPACE_HPP
#define FINAL_PROJECT_DANGERSPACE_HPP

#include <string>
#include "Space.hpp"

class DangerSpace : public Space {
private:
    std::string name;
public:
    DangerSpace();
    ~DangerSpace();
    std::string getName();
    int runEvent();
    int squirrellAttack();
    int heavyRain();
    int openTheHatch();
};


#endif //FINAL_PROJECT_DANGERSPACE_HPP
