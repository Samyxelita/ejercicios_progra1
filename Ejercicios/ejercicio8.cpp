#include <iostream>
using namespace std;

int main() {
    int n;
    int suma;

    // Leer el número entero positivo
    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    // Calcular la suma de los primeros n enteros positivos
    suma = (n * (n + 1)) / 2;

    // Mostrar la suma
    cout << "La suma de los primeros " << n << " números enteros positivos es: " << suma << endl;

    return 0;
}
