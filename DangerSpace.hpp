//
// Created by Katie Stutts on 2019-05-28.
//

#ifndef FINAL_PROJECT_DANGERSPACE_HPP
#define FINAL_PROJECT_DANGERSPACE_HPP

#include <string>
#include "Space.hpp"

class DangerSpace : public Space {
private:
    std::string name;
public:
    DangerSpace();
    ~DangerSpace();
    std::string getName();
    void runEvent();
};


#endif //FINAL_PROJECT_DANGERSPACE_HPP
