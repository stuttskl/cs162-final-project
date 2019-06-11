/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description: Space header file. Contains field for name, and creates
 * 4 pointers to Spaces and sets to nullptr. Contains constructor,
 * destructor, a pure virtual function to run each Space's event,
 * getters and setters for the 4 pointers.
 * Contains additional Space functions to retreive random numbers
 * that will impact events.
*********************************************************************/
#ifndef FINAL_PROJECT_SPACE_HPP
#define FINAL_PROJECT_SPACE_HPP

#include <string>

class Space {
protected:
    std::string name = "";
    Space *up = nullptr;
    Space *down = nullptr;
    Space *left = nullptr;
    Space *right = nullptr;
public:
    Space();
    virtual ~Space(); // virtual destructor
    virtual int runEvent() = 0;
    Space* getUp();
    Space* getDown();
    Space* getLeft();
    Space* getRight();
    void setUp(Space*);
    void setDown(Space*);
    void setLeft(Space*);
    void setRight(Space*);

    virtual int getRand(int, int);
    virtual int rollWeightedDie();
    virtual int generateNewItem();



    virtual std::string getName();

};


#endif //FINAL_PROJECT_SPACE_HPP
