/*Ejercicio 6:

Escribe un programa que define un vector de un n�meros y calcule
si existe alg�n numeros en el vector cuyo valor equivale a la suma
del resto de n�meros del vector.

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
    int numeros[100], n, suma = 0;

    cout << "Digite la cantidad de numeros del arreglo: "; // Solicitar la cantidad de n�meros
    cin >> n;

    // Solicitar los n�meros al usuario
    cout << "Introduce los " << n << " n�meros: \n";
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    // Calcular la suma total de los n�meros en el vector
    for (int i = 0; i < n; i++) {
        suma += numeros[i];
    }

    // Comprobar si existe un n�mero en el vector cuyo valor sea igual a la suma del resto de n�meros
    bool encontrado = false;
    for (int i = 0; i < n; i++) {
        // Si el n�mero es igual a la suma del resto de los n�meros
        if (numeros[i] == suma - numeros[i]) {
            cout << "El n�mero " << numeros[i] << " es igual a la suma de los dem�s n�meros." << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "No existe ning�n n�mero en el vector que sea igual a la suma de los dem�s n�meros." << endl;
    }

    getch(); // Espera a que el usuario presione una tecla
    return 0;
}

