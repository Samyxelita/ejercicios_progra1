#include "Figura3.h"

// Constructor: pide al usuario el número de lados
Figura3::Figura3() {
    cout << "Ingrese el número de lados de la figura (3-10): ";
    cin >> lados;
}

// Método que determina el nombre de la figura según su número de lados
void Figura3::determinarFigura() {
    switch (lados) {
        case 3:
            cout << "La figura con 3 lados es un triángulo." << endl;
            break;
        case 4:
            cout << "La figura con 4 lados es un cuadrilátero." << endl;
            break;
        case 5:
            cout << "La figura con 5 lados es un pentágono." << endl;
            break;
        case 6:
            cout << "La figura con 6 lados es un hexágono." << endl;
            break;
        case 7:
            cout << "La figura con 7 lados es un heptágono." << endl;
            break;
        case 8:
            cout << "La figura con 8 lados es un octágono." << endl;
            break;
        case 9:
            cout << "La figura con 9 lados es un eneágono." << endl;
            break;
        case 10:
            cout << "La figura con 10 lados es un decágono." << endl;
            break;
        default:
            cout << "Error: Solo se permiten figuras con 3 a 10 lados." << endl;
            break;
    }
}
