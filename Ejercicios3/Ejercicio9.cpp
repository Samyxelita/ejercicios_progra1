#include "Ejercicio9.h"

void Ejercicio9::agregarArticulo(double precio) {
    total += precio;
}

double Ejercicio9::calcularTotal() {
    return redondearAlNickel(total);
}

double Ejercicio9::redondearAlNickel(double cantidad) {
    int centavos = static_cast<int>(cantidad * 100);
    int resto = centavos % PENNIES_PER_NICKEL;

    if (resto < PENNIES_PER_NICKEL / 2) {
        centavos -= resto;
    } else {
        centavos += (PENNIES_PER_NICKEL - resto);
    }

    return centavos / 100.0;
}
