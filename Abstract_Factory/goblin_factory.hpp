#ifndef GOBLIN_FACTORY_HPP
#define GOBLIN_FACTORY_HPP
#include "enemy_factory.hpp"
#include <string>
#include "goblin.hpp"
#include "Linked_List.hpp"
#include "enemy.hpp"
class goblin_factory: public enemy_factory{
public:
    goblin_factory();
    enemy** make_enemys(int amount) override;
    enemy* make_enemy() override;
};

#endif // GOBLIN_FACTORY_HPP
