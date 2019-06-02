//
// Created by Katie Stutts on 2019-06-01.
//

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
