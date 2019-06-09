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
    whichItem = getRand(10, 12);
//    createNewItem(1);

    switch (whichItem)
    {
        case 10:
            return 10;
        case 11:
            return 11;
        case 12:
            return 12;
    }

//    cout << "Inside itemspace class" << endl;

}

/******************************************************
*
******************************************************/
//Item* ItemSpace::createNewItem(int itemType)
//{
//
//    newItem = new Wood;
//    return newItem;
//
//
////    switch (itemType)
////    {
////        case 1:
////            newItem = new Wood;
////            return newItem;
////        case 2:
////            newItem = new Knife;
////            return newItem;
////        case 3:
////            newItem = new Sweater;
////            return newItem;
////        case 4:
////            newItem = new Berries;
////            return newItem;
////        case 5:
////            return nullptr;
////    }
//}