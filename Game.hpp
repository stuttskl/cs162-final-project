/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description:
*********************************************************************/
#include "Space.hpp"
#include "Item.hpp"
#include <vector>

using std::vector;

#ifndef FINAL_PROJECT_GAME_HPP
#define FINAL_PROJECT_GAME_HPP

enum Direction {up, down, left, right};

class Game {
private:
    Space *currentSpace = nullptr;
    int steps = 0; // run until steps = 100??
    vector<Item> backpack;
    int numSpaces = 1;
    int healthPoints = 10;

public:
    Game();
    void startGame();
    Space* createNewSpaceType();

    void gameMenu();

    void gameRound();

    void getNextMove();
    void spaceLinker(Space*, Space*, Direction);

    bool canMove(int);

    void printMap();
    int getHealthPoints();
    void setHealthPoints(int);

    bool isStillAlive();

    int getRandomNum(int, int);
    void move(Direction);

    void displayCurrentLocation();

    void displayBackpack();
    void addToBackpack(Item*);

    Item* createNewItem(int);

};


#endif //FINAL_PROJECT_GAME_HPP
