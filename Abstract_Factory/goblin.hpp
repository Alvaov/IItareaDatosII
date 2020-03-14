#ifndef GOBLIN_HPP
#define GOBLIN_HPP
#include "enemy.hpp"

class goblin : public enemy{
public:
    goblin(std::string enemy_type, int _damage, int _health);
    std::string get_enemy_type() override{
        return enemy_type;
    };
    int get_health() override{
        return health;
    };
    int get_damage() override{
        return damage;
    };
};

#endif // GOBLIN_HPP
