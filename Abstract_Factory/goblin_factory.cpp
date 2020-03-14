#include "goblin_factory.hpp"
goblin_factory::goblin_factory(){

}
enemy** goblin_factory::make_enemys(int amount){
    enemy** vec = new enemy*[amount];
    for(int i = 0; i<=amount;i++){
        vec[i] = make_enemy();
    }return vec;
}

enemy* goblin_factory::make_enemy(){
    return new goblin("goblin", 15, 50);
}
