#include <iostream>
using namespace std;

int main() {
    int cantidad_widgets, cantidad_gizmos;
    const int peso_widget = 75; // Peso en gramos
    const int peso_gizmo = 112; // Peso en gramos

    // Leer la cantidad de widgets y gizmos
    cout << "Ingrese la cantidad de widgets: ";
    cin >> cantidad_widgets;
    cout << "Ingrese la cantidad de gizmos: ";
    cin >> cantidad_gizmos;

    // Calcular el peso total del pedido
    int peso_total = (cantidad_widgets * peso_widget) + (cantidad_gizmos * peso_gizmo);

    // Mostrar el peso total
    cout << "El peso total del pedido es " << peso_total << " gramos." << endl;

    return 0;
}
//Me ayudo solo en los calculos el codigo de la IA
