#include "Letra2.h"

// Constructor: pide al usuario una letra
Letra2::Letra2() {
    cout << "Ingrese una letra: ";
    cin >> letra;
    letra = tolower(letra);  // Convertir a minúscula para comparar sin importar mayúsculas
}

// Método que determina si la letra es vocal, "y" o consonante
void Letra2::determinarTipo() {
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout << "La letra ingresada '" << letra << "' es una vocal." << endl;
    } else if (letra == 'y') {
        cout << "La letra 'y' a veces es vocal y otras veces es consonante." << endl;
    } else {
        cout << "La letra ingresada '" << letra << "' es una consonante." << endl;
    }
}
