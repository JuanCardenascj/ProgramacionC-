/*Ejercicio 7:

Escriba un programa que solicite una edad (un entero) e indique en la
salida estandar si la edad introducida esta en el rango [18-25].

*/

#include<iostream>

using namespace std;

int main(){
    int edad;
    
    cout << "Digite su edad: "; // Pide datos al usuario
    cin >> edad; // Guarda los datos del usuario
    
    // Verificamos si la edad está dentro del rango [18-25]
    if (edad >= 18 && edad <= 25) { //Si la edad es mayor o igual a 18 && - y la edad es menor o igual a 25.
        cout << "La edad se encuentra dentro del rango de 18 a 25 años" << endl;
    } else {
        cout << "La edad se encuentra fuera del rango de 18 a 25 años" << endl;
    }

    return 0;
}

