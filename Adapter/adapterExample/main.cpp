#include <QCoreApplication>
#include <iostream>
#include "MP3player.hpp"

//using namespace std;

int main()
{
    std::string nombre;
    mp3player cancionActual;
    int activo = 1;
    while (activo == 1) {

        std::cout << "Inserte su canción MP3 o detenga la actual: \n";
        getline(std::cin,nombre);
        if(nombre == "detener"){
            cancionActual.detenerMp3();
        }else{
            cancionActual.titulo = nombre;
            cancionActual.reproducirMp3();
        }
        std::cout << "--------------------------\n" << "¿Desea continuar?\n" << "Sí 1 \n" << "No 0 \n" << "--------------------------\n";
        std::cin >> activo;
        if(activo == 0){
            break;
        }

    }
    return 0;
}
