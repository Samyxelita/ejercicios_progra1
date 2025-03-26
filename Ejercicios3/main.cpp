#include "Ejercicio10.h"

int main() {
    Ejercicio10 ejercicio;
    int numero;

    std::cout << "Ingrese un número para calcular su factorial: ";
    std::cin >> numero;

    int resultado = ejercicio.calcularFactorial(numero);
    std::cout << "El factorial de " << numero << " es: " << resultado << std::endl;

    return 0;
}
