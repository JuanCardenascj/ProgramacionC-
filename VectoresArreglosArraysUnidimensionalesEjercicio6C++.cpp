/*Ejercicio 6:

Escribe un programa que define un vector de un números y calcule
si existe algún numeros en el vector cuyo valor equivale a la suma
del resto de números del vector.

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
    int numeros[100], n, suma = 0;

    cout << "Digite la cantidad de numeros del arreglo: "; // Solicitar la cantidad de números
    cin >> n;

    // Solicitar los números al usuario
    cout << "Introduce los " << n << " números: \n";
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    // Calcular la suma total de los números en el vector
    for (int i = 0; i < n; i++) {
        suma += numeros[i];
    }

    // Comprobar si existe un número en el vector cuyo valor sea igual a la suma del resto de números
    bool encontrado = false;
    for (int i = 0; i < n; i++) {
        // Si el número es igual a la suma del resto de los números
        if (numeros[i] == suma - numeros[i]) {
            cout << "El número " << numeros[i] << " es igual a la suma de los demás números." << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "No existe ningún número en el vector que sea igual a la suma de los demás números." << endl;
    }

    getch(); // Espera a que el usuario presione una tecla
    return 0;
}

