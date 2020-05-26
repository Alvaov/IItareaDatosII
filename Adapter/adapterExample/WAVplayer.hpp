#ifndef WAVPLAYER_H
#define WAVPLAYER_H

#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>

class wavplayer{

    int kHz;
    std::string titulo;
    std::string tipo;
    int bits;

public:
    wavplayer(int kHz, std::string titulo, std::string tipo, int bits);
    void leerCancion();
    void reproducir();
    void detener();
};


#endif // WAVPLAYER_H


