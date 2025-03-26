#ifndef EJERCICIO9_H
#define EJERCICIO9_H

#include <iostream>
#include <iomanip>
#include <string>

const int PENNIES_PER_NICKEL = 5;
const double NICKEL = 0.05;

class Ejercicio9 {
public:
    void agregarArticulo(double precio);
    double calcularTotal();
    double redondearAlNickel(double cantidad);
private:
    double total = 0.0;
};

#endif
