#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <string>
class enemy{
protected:
    int damage;
    int health;
    std::string enemy_type;
public:
    enemy(std::string _enemy_type,int _health,int _damage);
    virtual ~enemy(){};
    virtual std::string get_enemy_type() = 0;
    virtual int get_health() = 0;
    virtual int get_damage() = 0;
};

#endif // ENEMY_HPP
