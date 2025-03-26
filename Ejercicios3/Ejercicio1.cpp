#include "EjercicioI.h"

EjercicioI::EjercicioI() {
    // Constructor: no requiere inicialización especial en este caso.
}

void EjercicioI::ejecutar() {
    // Recorrer la variable i hasta 10 veces y mostrar su valor
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }
    // Mostrar el mensaje "Realizado" una sola vez al finalizar
    cout << "Realizado" << endl;
}
