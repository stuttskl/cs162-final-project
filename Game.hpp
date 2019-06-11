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

class Game {
private:
    Space *currentSpace = nullptr;
    Space *startingSpace = nullptr;
    Space *space1 = nullptr;
    Space *space2 = nullptr;
    Space *space3 = nullptr;
    Space *space4 = nullptr;
    Space *space5 = nullptr;
    Space *space6 = nullptr;
    Space *space7 = nullptr;
    Space *space8 = nullptr;
    Space *space9 = nullptr;
    Space *space10 = nullptr;
    Space *space11 = nullptr;
    int steps = 0;
    vector<Item> backpack;
    int numSpaces = 1;
    int healthPoints = 15;
    bool hasCoconutPhone = false;
    bool gameOver = false;

public:
    enum Direction {up, down, left, right};

    Game();
    ~Game();

    void deleteSpaces();
    void startGame();
    Space* createNewSpaceType();

    void displayWelcome();

    void gameMenu();

    void gameRound();

    void getNextMove();
    void spaceLinker(Space*, Space*, Direction);

    bool canMove(int);

    void printMap();
    int getHealthPoints();
    void setHealthPoints(int);

    void isStillAlive();

    int getRandomNum(int, int);
    void move(Direction);

    void displayCurrentLocation();

    void displayBackpack();
    void addToBackpack(Item*);

    Item* createNewItem(int);

};


#endif //FINAL_PROJECT_GAME_HPP
