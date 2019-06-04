/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description:
*********************************************************************/
#include <iostream>
#include <random>
#include <string>
#include "Space.hpp"

using std::cout;
using std::endl;
using std::string;

/******************************************************
*
******************************************************/
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
/******************************************************
*
******************************************************/
Space::~Space()
{
// be sure to set up, down, left, right to null and delete
}

/******************************************************
*
******************************************************/
int Space::runEvent()
{
    cout << "You have landed on a plain ol' space. Nothing cool happens here." << endl;
}

/******************************************************
*
******************************************************/
string Space::getName()
{
    return this->name;
}

/******************************************************
*
******************************************************/
Space* Space::getUp()
{
    return this->up;
}

/******************************************************
*
******************************************************/
Space* Space::getDown()
{
    return this->down;
}

/******************************************************
*
******************************************************/
Space* Space::getLeft()
{
    return this->left;
}

/******************************************************
*
******************************************************/
Space* Space::getRight()
{
    return this->right;
}

/******************************************************
*
******************************************************/
void Space::setUp(Space* s)
{
    this->up = s;
}

/******************************************************
*
******************************************************/
void Space::setDown(Space* s)
{
    this->down = s;
}

/******************************************************
*
******************************************************/
void Space::setLeft(Space* s)
{
    this->left = s;
}

/******************************************************
*
******************************************************/
void Space::setRight(Space* s)
{
    this->right = s;
}

/******************************************************
*
******************************************************/
int Space::getRand(int min, int max)
{
    // copied from https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
    std::random_device seed;
    std::mt19937 gen(seed());
    std::uniform_int_distribution<> roll(min, max);

    return roll(gen);
}

/******************************************************
*
******************************************************/
int Space::rollWeightedDie()
{
    // copied from https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
    std::random_device seed;
    std::mt19937 gen(seed());
    std::uniform_real_distribution<> val(0, 1);

    // floors the result of the weighted die roll so that it is rounded to the tenths place
    double biasedRoll = floorf(val(gen) * 10) / 10;
    cout << "Biased roll is: " << biasedRoll << endl;
    // if the weighted die roll is greater than 0.7
    if (biasedRoll >= 0.7) // 70% chance a good thing will happen
    {
        return 1;
    } else
    {
        return 2; // 30% chance a VERY bad event will happen
    }
}