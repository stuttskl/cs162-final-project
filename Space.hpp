/*********************************************************************
** Program name: Final Project
** Author: Katie Stutts
** Date:June 2nd, 2019
** Description:
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
    virtual int runEvent();
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
