#include "adapterMP3toWAV.hpp"

void adapterMP3toWAV::reproducir(){

        printf("Iniciando conversión . . .\n");
        wavplayer* cancionActual = new wavplayer(44,nombre,"stereo",16);
        this->cancionActual = cancionActual;
        cancionActual->leerCancion();
        cancionActual->reproducir();

}

void adapterMP3toWAV::detener(){
    cancionActual->detener();
}
