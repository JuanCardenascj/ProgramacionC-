/*Ejercicio2: Determinar si un número es primo o no; con punteros y ademas
indicar en que posicion de memoria se guardo el numero.*/

#include<iostream>
#include<conio.h>
using namespace std;

bool esPrimo(int num) {
    if (num <= 1) return false; // Los números menores o iguales a 1 no son primos
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false; // Si es divisible por algún número, no es primo
        }
    }
    return true; // Si no es divisible por ningún número, es primo
}

int main() {
    int numero, *dir_numero; // Variable puntero

    cout << "Digite un numero: ";
    cin >> numero;

    dir_numero = &numero; // Guardando la posición de memoria

    // Verificar si el número es primo
    if (esPrimo(numero)) {
        cout << "El numero " << numero << " es primo." << endl;
    } else {
        cout << "El numero " << numero << " no es primo." << endl;
    }

    // Imprimir la dirección de memoria del número
    cout << "La direccion de memoria del numero es: " << dir_numero << endl;

    getch();
    return 0;
}

