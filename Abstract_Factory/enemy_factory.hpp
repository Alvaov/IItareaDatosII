#ifndef ENEMY_FACTORY_HPP
#define ENEMY_FACTORY_HPP
#include<string>
#include "enemy.hpp"
#include "Linked_List.hpp"
class enemy_factory{
    public:
    virtual ~enemy_factory(){};
    virtual enemy** make_enemys(int amount) = 0;
    virtual enemy* make_enemy() = 0;
};
#endif // ENEMY_FACTORY_HPP
