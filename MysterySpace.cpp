#include "MysterySpace.hpp"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;


MysterySpace::MysterySpace()
{
    name = "Mystery Space";
}

MysterySpace::~MysterySpace() {}

string MysterySpace::getName()
{
    return name;
}

void MysterySpace::runEvent()
{
    cout << "YOU HAVE ENTERED A MYSTERY SPACE. OoOoOoO~" << endl;
}