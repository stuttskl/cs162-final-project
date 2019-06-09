#ifndef FINAL_PROJECT_COCONUTPHONE_HPP
#define FINAL_PROJECT_COCONUTPHONE_HPP

#include <iostream>
#include <string>
#include "Item.hpp"


class CoconutPhone : public Item {
public:
    CoconutPhone();
    ~CoconutPhone();
    std::string getName();
    std::string getDescription();
};


#endif //FINAL_PROJECT_COCONUTPHONE_HPP
