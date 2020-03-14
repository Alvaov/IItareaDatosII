#include <iostream>
#include "goblin_factory.hpp"
#include "phantom_factory.hpp"
int main()
{

    std::cout<<"enemy: goblins"<<"\n";
    enemy_factory* fabrica = new goblin_factory();
    enemy* enemigo = fabrica->make_enemy();
    std::cout<<"type: "<<(enemigo)->get_enemy_type()<<" damage: "<<(enemigo)->get_damage()
        <<" health: "<<(enemigo)->get_health() <<std::endl;

    delete fabrica;
    delete enemigo;
    std::cout<<"enemy: phantoms"<<"\n";
    fabrica = new phantom_factory();
    enemigo= fabrica->make_enemy();
    std::cout<<"type: "<<(enemigo)->get_enemy_type()<<" damage: "<<(enemigo)->get_damage()
        <<" health: "<<(enemigo)->get_health() <<std::endl;


    delete fabrica;
    delete enemigo;
    return 0;
}
