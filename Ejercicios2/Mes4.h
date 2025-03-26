#ifndef MES4_H
#define MES4_H

#include <iostream>
#include <string>
using namespace std;

class Mes4 {
private:
    string nombreMes;  // Atributo privado para almacenar el mes

public:
    Mes4();  // Constructor
    void mostrarDias();  // Método para determinar los días del mes
};

#endif
