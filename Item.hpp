/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description: Header file for an item. Contains field for name,
 * description, constructor, destructor and a virtual overriden function
 * to retreive the item's name.
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
};


#endif //FINAL_PROJECT_ITEM_HPP
