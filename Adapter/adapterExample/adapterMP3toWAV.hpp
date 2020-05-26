#ifndef ADAPTERMP3TOWAV_HPP
#define ADAPTERMP3TOWAV_HPP

#include<stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include "WAVplayer.hpp"

class adapterMP3toWAV{

    wavplayer* cancionActual;
public:
    std::string nombre;
    void reproducir();
    void detener();
};


#endif // ADAPTERMP3TOWAV_HPP
