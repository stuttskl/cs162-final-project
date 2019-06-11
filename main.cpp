/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description: Main program file. Creates new instance of game,
 * and invokes startGame() to run the main program.
*********************************************************************/

#include <iostream>
#include <string>
#include "Game.hpp"
#include "Space.hpp"

using std::cout;
using std::endl;
using std::string;

/******************************************************
* Creates new instance of a Game, and invokes startGame()
 * to run the start of the game.
******************************************************/
int main() {

    Game g1;

    g1.startGame();

    return 0;
}