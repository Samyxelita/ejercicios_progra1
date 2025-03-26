#include "Ejercicio4.h"

int main() {
    int numeroUsuario;
    std::cout << "Ingrese un número para comparar con las iteraciones: ";
    std::cin >> numeroUsuario;

    Ejercicio4 ejercicio(numeroUsuario);
    ejercicio.ejecutar();

    return 0;
}
