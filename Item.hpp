/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description:
*********************************************************************/

#include <string>


#ifndef FINAL_PROJECT_ITEM_HPP
#define FINAL_PROJECT_ITEM_HPP


class Item {
protected:
    std::string name = "item";
    std::string description = "plain item";
public:
    Item();
    virtual ~Item();
    virtual std::string getName();
    virtual std::string getDescription();
    virtual void addToPack(Item*);
};


#endif //FINAL_PROJECT_ITEM_HPP
