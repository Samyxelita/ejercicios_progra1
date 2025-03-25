#include <iostream>
using namespace std;

void ordenarFrase(char* palabras[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int k = 0;
            while (palabras[i][k] == palabras[j][k]) {
                k++;
            }
            if (palabras[i][k] > palabras[j][k]) {
                char* temp = palabras[i];
                palabras[i] = palabras[j];
                palabras[j] = temp;
            }
        }
    }
}

int main() {
    const int n = 8;
    char palabra1[] = "culpa,";
    char palabra2[] = "mal,";
    char palabra3[] = "un,";
    char palabra4[] = "siempre,";
    char palabra5[] = "la,";
    char palabra6[] = "trabajador,";
    char palabra7[] = "a,";
    char palabra8[] = "herramienta";
    char* palabras[n] = {palabra1, palabra2, palabra3, palabra4, palabra5, palabra6, palabra7, palabra8};

    ordenarFrase(palabras, n);

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << palabras[i];
    }
    cout << endl;

    return 0;
}
// El codigo de la IA me ayudo a entender la logica porque no entendi muy bien el enunciado.
