#include "Numero1.h"

// Constructor: pide un número al usuario
Numero1::Numero1() {
    cout << "Ingrese un número entero: ";
    cin >> valor;
}

// Método que verifica si el número es par
bool Numero1::esPar() {
    return valor % 2 == 0;
}

// Método que muestra si el número es par o impar
void Numero1::mostrarResultado() {
    if (esPar()) {
        cout << "El número " << valor << " es par." << endl;
    } else {
        cout << "El número " << valor << " es impar." << endl;
    }
}
