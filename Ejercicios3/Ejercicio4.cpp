#include "Ejercicio4.h"

Ejercicio4::Ejercicio4(int numeroUsuario) {
    this->numeroUsuario = numeroUsuario;
}

void Ejercicio4::ejecutar() {
    for (int i = 1; i <= 5; i++) {
        std::cout << "Iteración: " << i << std::endl;

        if (i == numeroUsuario) {
            std::cout << "El número " << numeroUsuario << " coincide con la iteración " << i << "." << std::endl;
        }
    }

    std::cout << "Hecho" << std::endl;
}
