#ifndef PHANTOM_HPP
#define PHANTOM_HPP
#include "enemy.hpp"

class phantom : public enemy{
public:
    phantom(std::string enemy_type, int _damage, int _health);
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

#endif // PHANTOM_HPP
