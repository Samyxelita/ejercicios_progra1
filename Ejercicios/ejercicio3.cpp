#include <iostream>
using namespace std;

void convertirMayusculas(char* frase) {
    bool new_word = true;
    for (int i = 0; frase[i] != '\0'; i++) {
        if (new_word && frase[i] >= 'a' && frase[i] <= 'z') {
            frase[i] -= 32; // Convertir a mayúscula
            new_word = false;
        }
        if (frase[i] == ' ') {
            new_word = true;
        }
    }
}

void reemplazarPalabra(char* frase, const char* palabraAntigua, const char* palabraNueva) {
    char resultado[100];
    int i, j, k;
    i = j = k = 0;

    while (frase[i] != '\0') {
        if (frase[i] == palabraAntigua[j]) {
            j++;
            if (palabraAntigua[j] == '\0') {
                for (int l = 0; palabraNueva[l] != '\0'; l++, k++) {
                    resultado[k] = palabraNueva[l];
                }
                j = 0;
            }
        } else {
            if (j > 0) {
                for (int l = 0; l < j; l++, k++) {
                    resultado[k] = palabraAntigua[l];
                }
                j = 0;
            }
            resultado[k++] = frase[i];
        }
        i++;
    }
    resultado[k] = '\0';

    i = 0;
    while (resultado[i] != '\0') {
        frase[i] = resultado[i];
        i++;
    }
    frase[i] = '\0';
}

int main() {
    // Frase obtenida del ejercicio anterior
    char frase[] = "a, culpa, herramienta, la, mal, siempre, trabajador, un,";

    // Convertir la primera letra de cada palabra a mayúsculas
    convertirMayusculas(frase);
    cout << frase << endl;

    // Añadir coma después de "trabajador"
    int len = 0;
    while (frase[len] != '\0') len++;
    for (int i = len; i > 35; i--) {
        frase[i] = frase[i - 1];
    }
    frase[36] = ',';
    frase[len + 1] = '\0';
    cout << frase << endl;

    // Sustituir "trabajador" por "estudiante" y "herramienta" por "profesor"
    reemplazarPalabra(frase, "Trabajador,", "Estudiante,");
    reemplazarPalabra(frase, "Herramienta,", "Profesor,");
    cout << frase << endl;

    return 0;
}
//El codigo de la IA me ayudo a resolverlo aunque aun asi se encuentran algunas debilidadades en el codigo.
