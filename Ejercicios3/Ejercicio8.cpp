#include "Ejercicio8.h"

Ejercicio8::Ejercicio8() {
    // Inicializar la semilla del generador de números aleatorios
    std::srand(std::time(0));
}

void Ejercicio8::tirarDados() {
    int dado1 = std::rand() % 6 + 1;
    int dado2 = std::rand() % 6 + 1;

    std::cout << "Tire los dados...\n";
    std::cout << "Los valores son: " << dado1 << " y " << dado2 << "\n";
}

bool Ejercicio8::deseaContinuar() {
    char respuesta;
    std::cout << "¿Quieres tirar los dados nuevamente? (s/n): ";
    std::cin >> respuesta;
    return respuesta == 's' || respuesta == 'S';
}
