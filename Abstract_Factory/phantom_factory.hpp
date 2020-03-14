#ifndef PHANTOM_FACTORY_HPP
#define PHANTOM_FACTORY_HPP
#include "enemy_factory.hpp"
#include "enemy.hpp"
#include <string>
#include "phantom.hpp"
class phantom_factory : public enemy_factory{
public:
    phantom_factory();
    enemy** make_enemys(int amount) override;
    enemy* make_enemy() override;
};

#endif // PHANTOM_FACTORY_HPP
