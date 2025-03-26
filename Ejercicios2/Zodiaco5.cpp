#include "Zodiaco5.h"

void Zodiaco5::determinarAnimal(int anio) {
    string animales[12] = {
        "Dragon", "Snake", "Horse", "Sheep", "Monkey", "Rooster",
        "Dog", "Pig", "Rat", "OX", "Tiger", "Hare"
    };

    int indice = (anio - 2000) % 12;
    if (indice < 0) {
        indice += 12;
    }

    cout << "El año " << anio << " corresponde al signo del zodiaco chino: " 
         << animales[indice] << endl;
}
