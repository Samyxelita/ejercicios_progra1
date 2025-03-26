#include "Ejercicio10.h"

int Ejercicio10::calcularFactorial(int numero) {
    if (numero <= 1) {
        return 1;
    }
    return numero * calcularFactorial(numero - 1);
}
