
#include "DangerSpace.hpp"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;


DangerSpace::DangerSpace()
{
    name = "Danger Space";
}

DangerSpace::~DangerSpace() {}

string DangerSpace::getName()
{
    return name;
}

void DangerSpace::runEvent()
{
    cout << "YOU HAVE ENTERED A DangerSpace. OoOoOoO~" << endl;
}