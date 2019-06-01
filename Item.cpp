
#include <iostream>
#include <string>
#include "Item.hpp"


using std::cout;
using std::endl;
using std::string;

Item::Item() {}
Item::~Item() {}
string Item::getName()
{
    return name;
}
string Item::getDescription()
{
    return description;
}
int Item::getHealthPoints()
{
    return healthPoints;
}
int Item::getMoralityPoints()
{
    return moralityPoints;
}
void Item::addToPack(Item*)
{}