#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float costo_comida, tasa_impositiva, impuesto, propina, total;

    // Leer el costo de la comida y la tasa impositiva
    cout << "Ingrese el costo de la comida: ";
    cin >> costo_comida;
    cout << "Ingrese la tasa impositiva (en porcentaje): ";
    cin >> tasa_impositiva;

    // Calcular el impuesto (tasa_impositiva % del costo de la comida)
    impuesto = costo_comida * (tasa_impositiva / 100.0);

    // Calcular la propina (18% del costo de la comida)
    propina = costo_comida * 0.18;

    // Calcular el total (costo de la comida + impuesto + propina)
    total = costo_comida + impuesto + propina;

    // Formatear la salida para mostrar dos !g++ ejercicio6.cpp -o ejercicio6decimales
    cout << fixed << setprecision(2);

    // Mostrar el monto del impuesto, la propina y el total
    cout << "Monto del impuesto: $" << impuesto << endl;
    cout << "Monto de la propina: $" << propina << endl;
    cout << "Total general: $" << total << endl;

    return 0;
}
// LA ia me ayudo en la eficiencia del codigo 
