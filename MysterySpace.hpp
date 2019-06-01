#include "Space.hpp"
#include <string>

#ifndef FINAL_PROJECT_MYSTERYSPACE_HPP
#define FINAL_PROJECT_MYSTERYSPACE_HPP


class MysterySpace : public Space {
private:
    std::string name;
public:
    MysterySpace();
    ~MysterySpace();
    std::string getName();
    int runEvent();
};


#endif //FINAL_PROJECT_MYSTERYSPACE_HPP
