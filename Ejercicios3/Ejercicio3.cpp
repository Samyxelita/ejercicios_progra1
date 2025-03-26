#include "Ejercicio3.h"

Ejercicio3::Ejercicio3(int repeticiones) {
    this->repeticiones = repeticiones;
}

void Ejercicio3::ejecutar() {
    for (int _ = 0; _ < repeticiones; _++) { // Variable anónima "_"
        std::cout << "Iteración en progreso..." << std::endl;
    }

    std::cout << "Realizado" << std::endl;
}
