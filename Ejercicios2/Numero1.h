#ifndef NUMERO1_H
#define NUMERO1_H

#include <iostream>
using namespace std;

class Numero1 {
private:
    int valor;

public:
    Numero1();  // Constructor
    bool esPar();  // Método para verificar si es par
    void mostrarResultado();  // Método para mostrar el resultado
};

#endif
