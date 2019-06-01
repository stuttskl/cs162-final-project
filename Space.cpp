#include <iostream>
#include <string>
#include "Space.hpp"

using std::cout;
using std::endl;
using std::string;

Space::Space()
{
    name = "Normal Space";
    up = nullptr;
    down = nullptr;
    left = nullptr;
    right = nullptr;
}

//Space::Space(string name)
//{
//    this->name = name;
//    up = nullptr;
//    down = nullptr;
//    left = nullptr;
//    right = nullptr;
//}

Space::~Space()
{
// be sure to set up, down, left, right to null and delete
}

void Space::runEvent()
{
    cout << "You have landed on a plain ol' space. Nothing cool happens here." << endl;
}

string Space::getName()
{
    return this->name;
}

Space* Space::getUp()
{
    return this->up;
}

Space* Space::getDown()
{
    return this->down;
}

Space* Space::getLeft()
{
    return this->left;
}

Space* Space::getRight()
{
    return this->right;
}

void Space::setUp(Space* s)
{
    this->up = s;
}

void Space::setDown(Space* s)
{
    this->down = s;
}

void Space::setLeft(Space* s)
{
    this->left = s;
}

void Space::setRight(Space* s)
{
    this->right = s;
}