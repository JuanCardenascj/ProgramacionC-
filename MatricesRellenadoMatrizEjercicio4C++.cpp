/*Ejercicio 4:

Hacer una matriz preguntando al usuario el numero de filas y
columnas, llenarla de n�meros aleatorios, copiar el contenido a
otras matriz y por ultimo mostrarla en pantalla

*/

#include<iostream>
#include<cstdlib>  // Necesario para usar rand()
#include<ctime>    // Necesario para usar time()

using namespace std;

int main() {
    int matriz1[20][20], matriz2[20][20], filas, columnas;

    // Pedir al usuario el n�mero de filas y columnas
    cout << "Digite el n�mero de filas: ";
    cin >> filas;
    cout << "Digite el n�mero de columnas: ";
    cin >> columnas;

    // Inicializar la semilla para generar n�meros aleatorios
    srand(time(0));

    // Llenar la matriz1 con n�meros aleatorios
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz1[i][j] = rand() % 100; // N�meros aleatorios entre 0 y 99
        }
    }

    // Copiar el contenido de matriz1 a matriz2
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz2[i][j] = matriz1[i][j];
        }
    }

    // Mostrar la matriz original (matriz1)
    cout << "Matriz original (matriz1):\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz1[i][j] << " ";  // Mostrar los elementos en una fila
        }
        cout << "\n";  // Salto de l�nea despu�s de cada fila
    }

    // Mostrar la matriz copiada (matriz2)
    cout << "\nMatriz copiada (matriz2):\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz2[i][j] << " ";  // Mostrar los elementos en una fila
        }
        cout << "\n";  // Salto de l�nea despu�s de cada fila
    }

    return 0;
}

