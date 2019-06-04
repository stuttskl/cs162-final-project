/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date: June 2nd, 2019
** Description: This file contains four functions that test various
 * levels of input validation.
*********************************************************************/

#ifndef FINAL_PROJECT_INPUTVALID_HPP
#define FINAL_PROJECT_INPUTVALID_HPP


#include <string>

int returnInt();
bool isInt (std::string input);
bool isInRange(int num, int min, int max);
std::string returnString();



#endif //FINAL_PROJECT_INPUTVALID_HPP
