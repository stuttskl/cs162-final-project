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
* Space constructor. Assigns name, and sets all four
 * pointers to nullptr.
******************************************************/
Space::Space()
{
    name = "Normal Space";
    up = nullptr;
    down = nullptr;
    left = nullptr;
    right = nullptr;
}

/******************************************************
* Space destructor. Sets up, down, left, right to
 * nullptr and deletes pointers.
******************************************************/
Space::~Space()
{
// be sure to set up, down, left, right to null and delete
    up = nullptr;
    down = nullptr;
    left = nullptr;
    right = nullptr;
}

/******************************************************
* overridden function of base class. Will run main event
 * for each space derived class.
******************************************************/
int Space::runEvent()
{}

/******************************************************
* returns the name of the space
******************************************************/
string Space::getName()
{
    return this->name;
}

/******************************************************
* returns the space that is "above" the current space
******************************************************/
Space* Space::getUp()
{
    return this->up;
}

/******************************************************
* returns the space that is "below" the current space
******************************************************/
Space* Space::getDown()
{
    return this->down;
}

/******************************************************
* returns the space that is to the "left" of the current space
******************************************************/
Space* Space::getLeft()
{
    return this->left;
}

/******************************************************
* returns the space that is to the "right" of the current space
******************************************************/
Space* Space::getRight()
{
    return this->right;
}

/******************************************************
* assigns a passed in pointer to a space object to the
 * "upper" link
******************************************************/
void Space::setUp(Space* s)
{
    this->up = s;
}

/******************************************************
* assigns a passed in pointer to a space object to the
 * "lower" link
******************************************************/
void Space::setDown(Space* s)
{
    this->down = s;
}

/******************************************************
* assigns a passed in pointer to a space object to the
 * "left" link
******************************************************/
void Space::setLeft(Space* s)
{
    this->left = s;
}

/******************************************************
* assigns a passed in pointer to a space object to the
 * "right" link
******************************************************/
void Space::setRight(Space* s)
{
    this->right = s;
}

/******************************************************
* takes in two int and returns a random number
 * between min, max.
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
* returns a real num between 0 and 1. The die is biased,
 * so if the roll is greater than .7, a good event will
 * happen, otherwise a bad event will happen.
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


/******************************************************
* returns a random real number bewteen 0 and 1. Based on
 * the output of the roll, will return an int, indicating
 * different types of items to be created. The coconut phone
 * (winning item) will be the most difficult item to get,
 * at a 15% chance of getting this item.
******************************************************/
int Space::generateNewItem()
{
    // copied from https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
    std::random_device seed;
    std::mt19937 gen(seed());
    std::uniform_real_distribution<> val(0, 1);

    // floors the result of the weighted die roll so that it is rounded to the tenths place
    double biasedRoll = floorf(val(gen) * 10) / 10;
    cout << "Biased roll is: " << biasedRoll << endl;

    if (biasedRoll <= .425)
    {
        return 1;
    }
    if (biasedRoll <= .85)
    {
        return 2;
    }
    if (biasedRoll >= .85)
    {
        return 3;
    }
}