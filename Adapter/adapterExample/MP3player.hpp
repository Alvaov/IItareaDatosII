#ifndef MP3PLAYER_HPP
#define MP3PLAYER_HPP

#include <stdio.h>
#include <iostream>
#include "adapterMP3toWAV.hpp"

class mp3player{

public:
    std::string titulo;
    void reproducirMp3();
    void detenerMp3();

};

#endif // MP3PLAYER_HPP
