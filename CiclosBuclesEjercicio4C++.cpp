/*Ejercicio 4:

Escriba un programa que tome cada 4 horas la temperatura exterior leyendola
durante un periodo de 24 horas. Es decir, debe leer 6 temperaturas.
Calcule la temperatura media del dia, la temperatura mas altas y la mas baja.

*/

#include<iostream>

using namespace std;

int main() {
    int temperatura;
    int sumaTemperaturas = 0;
    int maxTemperatura = -9999;  // Inicializamos con un valor muy bajo
    int minTemperatura = 9999;   // Inicializamos con un valor muy alto

    // Bucle para leer temperaturas cada 4 horas (6 lecturas en total)
    for (int i = 1; i <= 6; i++) {
        cout << "Digite la temperatura para la hora " << (i * 4) << " horas: ";
        cin >> temperatura;

        sumaTemperaturas += temperatura;  // Sumamos la temperatura para el cálculo de la media
        
        // Comprobamos si la temperatura es la nueva más alta o más baja
        if (temperatura > maxTemperatura) {
            maxTemperatura = temperatura;
        }
        if (temperatura < minTemperatura) {
            minTemperatura = temperatura;
        }
    }

    // Calculando la temperatura media
    double temperaturaMedia = sumaTemperaturas / 6.0;

    // Mostrando los resultados
    cout << "La temperatura media del dia es: " << temperaturaMedia << " grados." << endl;
    cout << "La temperatura mas alta fue: " << maxTemperatura << " grados." << endl;
    cout << "La temperatura mas baja fue: " << minTemperatura << " grados." << endl;

    return 0;
}

