#include <iostream>
#include <string>

int main() {
    std::string nombre;
    std::cout << "Introduce tu nombre: ";
    std::getline(std::cin, nombre);
    std::cout << "Hola, " << nombre << "!" << std::endl;
    return 0;
}
