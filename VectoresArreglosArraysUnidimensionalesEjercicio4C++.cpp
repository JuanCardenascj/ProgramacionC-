/*Ejercicio 4:

Escribe un programa que defina un vector de numero y muestre en la salida
el vector en orden inverso - del ultimo al primer elemento.

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
    int tamaño;

    // Pedir al usuario el tamaño del vector
    cout << "Introduce el tamaño del vector: ";
    cin >> tamaño;

    // Crear un vector de tamaño especificado
    int vector[tamaño];

    // Llenar el vector con números
    cout << "Introduce " << tamaño << " números: \n";
    for (int i = 0; i < tamaño; i++) {
        cin >> vector[i];
    }

    // Mostrar el vector en orden inverso
    cout << "El vector en orden inverso es: \n";
    for (int i = tamaño - 1; i >= 0; i--) {
        cout << vector[i] << " ";
    }

    getch(); // Espera a que el usuario presione una tecla
    return 0;
}

