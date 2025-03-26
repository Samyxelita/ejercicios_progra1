#include "Zodiaco5.h"

int main() {
    int anio;
    cout << "Ingrese un año: ";
    cin >> anio;

    Zodiaco5 miZodiaco;
    miZodiaco.determinarAnimal(anio);

    return 0;
}

