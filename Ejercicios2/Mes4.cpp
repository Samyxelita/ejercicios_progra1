#include "Mes4.h"

// Constructor: solicita el mes al usuario
Mes4::Mes4() {
    cout << "Ingrese el nombre de un mes: ";
    cin >> nombreMes;

    // Convertir la primera letra a mayúscula y el resto a minúsculas para mejor comparación
    nombreMes[0] = toupper(nombreMes[0]);
    for (size_t i = 1; i < nombreMes.length(); i++) {
        nombreMes[i] = tolower(nombreMes[i]);
    }
}

// Método que muestra la cantidad de días del mes
void Mes4::mostrarDias() {
    if (nombreMes == "Enero" || nombreMes == "Marzo" || nombreMes == "Mayo" ||
        nombreMes == "Julio" || nombreMes == "Agosto" || nombreMes == "Octubre" || nombreMes == "Diciembre") {
        cout << "El mes de " << nombreMes << " tiene 31 días." << endl;
    } else if (nombreMes == "Abril" || nombreMes == "Junio" || nombreMes == "Septiembre" || nombreMes == "Noviembre") {
        cout << "El mes de " << nombreMes << " tiene 30 días." << endl;
    } else if (nombreMes == "Febrero") {
        cout << "El mes de febrero tiene 28 o 29 días." << endl;
    } else {
        cout << "Error: Nombre de mes no válido." << endl;
    }
}
