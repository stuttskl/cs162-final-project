#include "Space.hpp"

#ifndef FINAL_PROJECT_GAME_HPP
#define FINAL_PROJECT_GAME_HPP

enum Direction {up, down, left, right};

class Game {
private:
    Space *currentSpace = nullptr;
    int steps = 0; // run until steps = 100??
    int numSpaces = 1;


public:
    Game();
    void startGame();
    Space* createNewSpaceType();

    void nextMove();
    void spaceLinker(Space*, Space*, Direction);

    int getRandomNum(int, int);
    void move(Direction);


};


#endif //FINAL_PROJECT_GAME_HPP
