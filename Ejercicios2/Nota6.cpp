#include "Nota6.h"

Nota6::Nota6() {
    cout << "Ingrese la nota (por ejemplo: C4, A4, B3, etc.): ";
    cin >> nota;
    frecuencia = 0.0;  // Valor inicial
}

void Nota6::calcularFrecuencia() {
    // Verificamos que la nota tenga al menos 2 caracteres (ej: 'C' y '4')
    if (nota.size() < 2) {
        cout << "Formato de nota inválido." << endl;
        return;
    }

    // El primer caracter es la letra (C, D, E, F, G, A o B)
    char letra = nota[0];
    // El segundo caracter es la octava (0-8) convertido de char a int
    int octava = nota[1] - '0';  

    // Frecuencias base para la octava 4
    double freqBase = 0.0;
    if (letra == 'C') {
        freqBase = 261.63;
    } else if (letra == 'D') {
        freqBase = 293.66;
    } else if (letra == 'E') {
        freqBase = 329.63;
    } else if (letra == 'F') {
        freqBase = 349.23;
    } else if (letra == 'G') {
        freqBase = 392.00;
    } else if (letra == 'A') {
        freqBase = 440.00;
    } else if (letra == 'B') {
        freqBase = 493.88;
    } else {
        cout << "Nota no válida." << endl;
        return;
    }

    // Calculamos la diferencia de octavas con respecto a la octava 4
    int diferencia = octava - 4;

    // Ajustamos freqBase multiplicando o dividiendo por 2^(diferencia)
    freqBase *= potenciaDeDos(diferencia);

    // Guardamos la frecuencia calculada
    frecuencia = freqBase;
}

void Nota6::mostrarFrecuencia() {
    if (frecuencia == 0.0) {
        // Significa que no se pudo calcular (nota inválida o no se llamó a calcularFrecuencia)
        cout << "No se pudo determinar la frecuencia de la nota " << nota << "." << endl;
    } else {
        cout << "La frecuencia de la nota " << nota << " es: " 
             << frecuencia << " Hz." << endl;
    }
}

// Función auxiliar que calcula 2^exponente sin <cmath> (repetida multiplicación o división)
double Nota6::potenciaDeDos(int exponente) {
    double resultado = 1.0;
    if (exponente > 0) {
        for (int i = 0; i < exponente; i++) {
            resultado *= 2.0;
        }
    } else if (exponente < 0) {
        for (int i = 0; i < -exponente; i++) {
            resultado /= 2.0;
        }
    }
    return resultado;
}
