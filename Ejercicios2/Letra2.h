#ifndef LETRA2_H
#define LETRA2_H

#include <iostream>
using namespace std;

class Letra2 {
private:
    char letra;  // Atributo privado para almacenar la letra ingresada

public:
    Letra2();  // Constructor
    void determinarTipo();  // Método para verificar si es vocal, consonante o "y"
};

#endif
