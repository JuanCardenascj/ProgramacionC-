/*Ejercicio 4:

Escribe un programa que defina un vector de numero y muestre en la salida
el vector en orden inverso - del ultimo al primer elemento.

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
    int tama�o;

    // Pedir al usuario el tama�o del vector
    cout << "Introduce el tama�o del vector: ";
    cin >> tama�o;

    // Crear un vector de tama�o especificado
    int vector[tama�o];

    // Llenar el vector con n�meros
    cout << "Introduce " << tama�o << " n�meros: \n";
    for (int i = 0; i < tama�o; i++) {
        cin >> vector[i];
    }

    // Mostrar el vector en orden inverso
    cout << "El vector en orden inverso es: \n";
    for (int i = tama�o - 1; i >= 0; i--) {
        cout << vector[i] << " ";
    }

    getch(); // Espera a que el usuario presione una tecla
    return 0;
}

