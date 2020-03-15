#include "WAVplayer.hpp"

wavplayer::wavplayer(int kHz, std::string titulo, std::string tipo, int bits){
    this->kHz = kHz;
    this->titulo = titulo;
    this->tipo = tipo;
    this->bits = bits;
}


void wavplayer::leerCancion(){
    std::cout << "Convirtiendo " << this->titulo << " a WAV" << std::endl;
    /*std::cout << "Realizando conversión de frecuencia . . ."<< std::endl;
    std::cout << "Ajustando canales . . ." << std::endl;
    std::cout << "Definiendo formato . . ." << std::endl;*/
    printf("Conversión exitosa \n");
}

void wavplayer::reproducir(){
    printf("Reproduciendo canción wav . . . \n");
}

void wavplayer::detener(){
    printf("Deteniendo canción. . .\n");
    delete this;
}

