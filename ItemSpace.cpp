//
// Created by Katie Stutts on 2019-05-28.
//

#include "ItemSpace.hpp"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;


ItemSpace::ItemSpace()
{
    name = "Item Space";
}

ItemSpace::~ItemSpace() {}

string ItemSpace::getName()
{
    return name;
}

int ItemSpace::runEvent()
{
    cout << "YOU HAVE ENTERED A Item Space. OoOoOoO~" << endl;
}