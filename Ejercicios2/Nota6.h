#ifndef NOTA6_H
#define NOTA6_H

#include <iostream>
#include <string>
using namespace std;

class Nota6 {
private:
    string nota;     // Ejemplo: "C4"
    double frecuencia;

public:
    Nota6();                 // Constructor que pide la nota al usuario
    void calcularFrecuencia();   // Calcula la frecuencia en Hz
    void mostrarFrecuencia();    // Muestra la frecuencia calculada

private:
    // Función auxiliar para calcular 2^exponente sin usar <cmath>
    double potenciaDeDos(int exponente);
};

#endif
