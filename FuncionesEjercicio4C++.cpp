/*Ejercicio 4:

Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier
número introducido por el usuario. Por ejemplo, si se introduce un número 
256.879, debería desplegarse el número 0..879.

*/

#include <iostream>
#include <cmath>  // Para usar la función floor()
#include <conio.h> // Para usar getch()

using namespace std;

// Prototipo de la función
void mostrarParteFraccionaria(float numero);

int main() {
    float numero;
    
    // Pedimos al usuario que ingrese un número
    cout << "Ingrese un número con decimales: ";
    cin >> numero;
    
    // Llamamos a la función para mostrar la parte fraccionaria
    mostrarParteFraccionaria(numero);
    
    getch();  // Pausa la ejecución (solo si es necesario en tu entorno)
    return 0;
}

// Función para mostrar la parte fraccionaria de un número
void mostrarParteFraccionaria(float numero) {
    // Obtenemos la parte entera
    int parteEntera = floor(numero);
    
    // Restamos la parte entera del número para obtener la parte fraccionaria
    float parteFraccionaria = numero - parteEntera;
    
    // Mostramos la parte fraccionaria
    cout << "La parte fraccionaria de " << numero << " es " << parteFraccionaria << endl;
}

