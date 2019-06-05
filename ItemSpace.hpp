
#ifndef FINAL_PROJECT_ITEMSPACE_HPP
#define FINAL_PROJECT_ITEMSPACE_HPP

#include <string>
#include "Space.hpp"
#include "Item.hpp"

class ItemSpace : public Space {
private:
    std::string name;
    Item* newItem = nullptr;
public:
    ItemSpace();
    ~ItemSpace();
    std::string getName();
    int runEvent();
//    Item* createNewItem(int);

};


#endif //FINAL_PROJECT_ITEMSPACE_HPP
