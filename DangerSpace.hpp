/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description:
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
