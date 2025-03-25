#include <iostream>
using namespace std;

int main() {
    float ancho, largo, area_pies, area_acres;

    cout << "Ingrese el ancho del campo en pies: ";
    cin >> ancho;
    cout << "Ingrese la longitud del campo en pies: ";
    cin >> largo;

    area_pies = ancho * largo;
    area_acres = area_pies / 43560.0;

    cout << "El área del campo es " << area_acres << " acres." << endl;

    return 0;
}
//El codigo lo hice yo completamente 
