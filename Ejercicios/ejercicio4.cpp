#include <iostream>
using namespace std;

int main() {
    // Texto de Shakespeare
    const char* texto = "Más de una vez he visto, la luz de la mañana, acariciar las cumbres con ojo soberano, besar su labio de oro el verdor de los campos, dorando los arroyos con celestial alquimia.";

    // Contador de la letra "a"
    int contador_a = 0;

    // Contar cuántas veces aparece la letra "a"
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == 'a' || texto[i] == 'A') {
            contador_a++;
        }
    }

    // Imprimir el resultado
    cout << "La letra 'a' aparece " << contador_a << " veces en la estrofa." << endl;

    return 0;
}
