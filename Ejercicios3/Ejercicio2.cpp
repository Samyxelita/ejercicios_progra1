#include "Ejercicio2.h"

Ejercicio2::Ejercicio2(int inicio, int fin, int incremento) {
    this->inicio = inicio;
    this->fin = fin;
    this->incremento = incremento;
}

void Ejercicio2::imprimirRango() {
    std::cout << "Imprimiendo valores en un rango con incremento de " << incremento << ":" << std::endl;

    for (int i = inicio; i <= fin; i += incremento) {
        std::cout << i << std::endl;
    }

    std::cout << "Realizado" << std::endl;
}
