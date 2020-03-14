#include "phantom_factory.hpp"

phantom_factory::phantom_factory()
{

}

enemy** phantom_factory::make_enemys(int amount){
    enemy** vec = new enemy*[amount];
    for(int i = 0; i<=amount;i++){
        vec[i] = make_enemy();
    }return vec;
}

enemy* phantom_factory::make_enemy(){
    return new phantom("phantom", 90, 150);
}
