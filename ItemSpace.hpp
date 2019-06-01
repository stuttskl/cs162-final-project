
#ifndef FINAL_PROJECT_ITEMSPACE_HPP
#define FINAL_PROJECT_ITEMSPACE_HPP

#include <string>
#include "Space.hpp"

class ItemSpace : public Space {
private:
    std::string name;
public:
    ItemSpace();
    ~ItemSpace();
    std::string getName();
    int runEvent();
};


#endif //FINAL_PROJECT_ITEMSPACE_HPP
