#include <iostream>
using namespace std;

int main() {
    float ancho, largo, area;
    string unidad;

    cout << "Ingrese la unidad de medida (pies o metros): ";
    cin >> unidad;

    cout << "Ingrese el ancho de la habitación en " << unidad << ": ";
    cin >> ancho;
    cout << "Ingrese el largo de la habitación en " << unidad << ": ";
    cin >> largo;

    area = ancho * largo;

    cout << "El área de la habitación es " << area << " " << unidad << " cuadrados." << endl;

    return 0;
}
