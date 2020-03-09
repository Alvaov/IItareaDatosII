#include "WAVplayer.hpp"


void wavplayer::leerCancion(std::string titulo){
    this->titulo = titulo;
    std::cout << "Leyendo " << this->titulo << std::endl;
}

void wavplayer::reproducir(){
    printf("Reproduciendo canción wav . . . \n");
}

void wavplayer::detener(){
    printf("Deteniendo canción. . .\n");
}

