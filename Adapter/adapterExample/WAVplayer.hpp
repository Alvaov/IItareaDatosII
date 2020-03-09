#ifndef WAVPLAYER_H
#define WAVPLAYER_H

#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>

class wavplayer{

    std::string titulo;

public:
    void leerCancion(std::string titulo);
    void reproducir();
    void detener();
};


#endif // WAVPLAYER_H


