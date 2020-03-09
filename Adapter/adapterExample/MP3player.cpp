#include "MP3player.hpp"


void mp3player::reproducirMp3(){

    printf("Tipo de archivo no soportado . . . \n");

    adapterMP3toWAV cancionActual;
    cancionActual.nombre = titulo;
    cancionActual.reproducir();
}


void mp3player::detenerMp3(){
    printf("Deteniendo música . . .\n");
}
