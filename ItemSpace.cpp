/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description:
*********************************************************************/
#include "ItemSpace.hpp"
#include "Item.hpp"
#include "Berries.hpp"
#include "Sweater.hpp"
#include "Knife.hpp"
#include "Wood.hpp"
#include "Game.hpp"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

/******************************************************
*
******************************************************/
ItemSpace::ItemSpace()
{
    name = "Item Space";
}

/******************************************************
*
******************************************************/
ItemSpace::~ItemSpace() {}

/******************************************************
*
******************************************************/
string ItemSpace::getName()
{
    return name;
}

/******************************************************
*
******************************************************/
int ItemSpace::runEvent()
{
    cout << " -~*~--~*~--~*~--~*~--~*~--~*~-" << endl;
    cout << "\t \t  ITEM   SPACE" << endl;
    cout << " -~*~--~*~--~*~--~*~--~*~--~*~-" << endl;

    int whichItem;
    whichItem = getRand(1, 5);
    createNewItem(1);


    Item *i2 = new Wood;

//    switch (whichItem)
//    {
//        case 1:
//            createNewItem(1);
//        case 2:
//            createNewItem(2);
//        case 3:
//            createNewItem(3);
//        case 4:
//            createNewItem(4);
//        case 5:
//            createNewItem(5);
//    }

}

/******************************************************
*
******************************************************/
Item* ItemSpace::createNewItem(int itemType)
{

    newItem = new Wood;
    return newItem;


//    switch (itemType)
//    {
//        case 1:
//            newItem = new Wood;
//            return newItem;
//        case 2:
//            newItem = new Knife;
//            return newItem;
//        case 3:
//            newItem = new Sweater;
//            return newItem;
//        case 4:
//            newItem = new Berries;
//            return newItem;
//        case 5:
//            return nullptr;
//    }
}