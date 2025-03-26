#include "Ejercicio7.h"
#include <iostream>

Ejercicio7::Ejercicio7() : contador(0) {}

void Ejercicio7::ejecutarContador() {
    while (contador < 10) {
        std::cout << "Contador: " << contador << std::endl;
        contador++;
    }
}
