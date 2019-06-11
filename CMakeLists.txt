cmake_minimum_required(VERSION 3.13)
project(Final_Project)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Final_Project
        Berries.cpp
        Berries.hpp
        Coconut.cpp
        Coconut.hpp
        CoconutPhone.cpp
        CoconutPhone.hpp
        DangerSpace.cpp
        DangerSpace.hpp
        Game.cpp
        Game.hpp
        inputValid.cpp
        inputValid.hpp
        Item.cpp
        Item.hpp
        ItemSpace.cpp
        ItemSpace.hpp
        main.cpp
        MysterySpace.cpp
        MysterySpace.hpp
        Space.cpp
        Space.hpp
        Wood.cpp
        Wood.hpp)
