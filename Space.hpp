
#ifndef FINAL_PROJECT_SPACE_HPP
#define FINAL_PROJECT_SPACE_HPP

#include <string>

class Space {
protected:
    std::string name = "";
//    std::string description = "";
    Space *up = nullptr;
    Space *down = nullptr;
    Space *left = nullptr;
    Space *right = nullptr;
public:
    Space();
//    Space(std::string); // default constructor
    virtual ~Space(); // virtual destructor
//    virtual void displayDescription();
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



    virtual std::string getName();

};


#endif //FINAL_PROJECT_SPACE_HPP
