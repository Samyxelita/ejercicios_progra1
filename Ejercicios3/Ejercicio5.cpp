#include "Ejercicio5.h"

Ejercicio5::Ejercicio5(int limite) {
    this->limite = limite;
}

void Ejercicio5::imprimirNumeros() {
    std::cout << "Imprimiendo los números hasta " << limite << ":" << std::endl;

    for (int i = 1; i <= limite; i++) {
        std::cout << "Dado el número: " << i;

        if (i % 2 == 0) {
            std::cout << " es un número par y amamos los números pares.";
        }

        std::cout << std::endl;
    }
}
