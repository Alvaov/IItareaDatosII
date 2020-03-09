#include "WAVplayer.hpp"


void wavplayer::leerCancion(std::string titulo){
    this->titulo = titulo;
    std::cout << "Convirtiendo " << this->titulo << " a WAV" << std::endl;
}

void wavplayer::reproducir(){
    printf("Reproduciendo canción wav . . . \n");
}

void wavplayer::detener(){
    printf("Deteniendo canción. . .\n");
}

