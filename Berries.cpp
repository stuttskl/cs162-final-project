#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "Berries.hpp"

Berries::Berries()
{
    name = "Wild island berries.";
    description = "These island berries are vibrant in color, and sweet in taste. You need but a handful to feel full"
                  " and energized.";
}

Berries::~Berries() {}

string Berries::getName()
{
    return name;
}

string Berries::getDescription()
{
    return description;
}