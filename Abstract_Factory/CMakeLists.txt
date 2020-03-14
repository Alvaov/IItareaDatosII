cmake_minimum_required(VERSION 3.5)

project(Abstract_Factory LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Abstract_Factory
    main.cpp
    enemy_factory.hpp
    enemy.cpp
    enemy.hpp
    goblin_factory.cpp
    goblin_factory.hpp
    goblin.cpp
    goblin.hpp
    phantom.cpp
    phantom.hpp
    phantom_factory.cpp
    phantom_factory.hpp
    )
