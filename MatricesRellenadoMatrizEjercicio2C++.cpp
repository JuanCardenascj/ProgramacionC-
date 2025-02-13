/*Ejercicio 2:

Realiza un programa que defina una matriz de 3x3
y escriba un ciclo para que muestre la diagonal 
principal de la matriz

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
    int matriz[3][3];  // Matriz 3x3
    int filas = 3, columnas = 3;  // Definimos las filas y columnas como 3 para que sea una matriz 3x3

    // Rellenar y almacenar los valores en la matriz
    for(int i = 0; i < filas; i++) { 
        for(int j = 0; j < columnas; j++) { 
            cout << "Digite un numero para [" << i << "][" << j << "]: ";
            cin >> matriz[i][j]; // Guardar valor en la posición i, j
        }
    }

    // Mostrar la matriz
    cout << "Matriz ingresada:\n";
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";  // Mostrar los elementos en una fila
        }
        cout << "\n";  // Salto de línea después de cada fila
    }

    // Mostrar la diagonal principal
    cout << "Diagonal principal de la matriz:\n";
    for(int i = 0; i < filas; i++) {
        cout << matriz[i][i] << " "; // Mostrar el valor de la diagonal principal
    }

    getch();
    return 0;
}

