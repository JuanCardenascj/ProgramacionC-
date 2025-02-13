/*Ejercicio 4:

Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier
n�mero introducido por el usuario. Por ejemplo, si se introduce un n�mero 
256.879, deber�a desplegarse el n�mero 0..879.

*/

#include <iostream>
#include <cmath>  // Para usar la funci�n floor()
#include <conio.h> // Para usar getch()

using namespace std;

// Prototipo de la funci�n
void mostrarParteFraccionaria(float numero);

int main() {
    float numero;
    
    // Pedimos al usuario que ingrese un n�mero
    cout << "Ingrese un n�mero con decimales: ";
    cin >> numero;
    
    // Llamamos a la funci�n para mostrar la parte fraccionaria
    mostrarParteFraccionaria(numero);
    
    getch();  // Pausa la ejecuci�n (solo si es necesario en tu entorno)
    return 0;
}

// Funci�n para mostrar la parte fraccionaria de un n�mero
void mostrarParteFraccionaria(float numero) {
    // Obtenemos la parte entera
    int parteEntera = floor(numero);
    
    // Restamos la parte entera del n�mero para obtener la parte fraccionaria
    float parteFraccionaria = numero - parteEntera;
    
    // Mostramos la parte fraccionaria
    cout << "La parte fraccionaria de " << numero << " es " << parteFraccionaria << endl;
}

