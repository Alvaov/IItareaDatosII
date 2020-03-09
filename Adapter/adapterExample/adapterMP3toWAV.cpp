#include "adapterMP3toWAV.hpp"

void adapterMP3toWAV::reproducir(){

        printf("Iniciando conversión . . .\n");
        wavplayer cancionActual;
        cancionActual.leerCancion(nombre);
        printf("Conversión exitosa \n");
        cancionActual.reproducir();

}
