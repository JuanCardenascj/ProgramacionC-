/*Ejercicio 9:

Convertir dos cadenas de minusculas a MAYUSCULAS. 
Compararlas, y decir si son iguales o no.

*/

#include <iostream>
#include <cstring>  // Para usar funciones de manipulación de cadenas
#include <cctype>   // Para usar la función toupper

using namespace std;

int main() {
    char cadena1[100], cadena2[100];

    // Pedir al usuario que ingrese dos cadenas
    cout << "Ingrese la primera cadena: ";
    cin.getline(cadena1, 100);  // Usamos getline para permitir cadenas con espacios

    cout << "Ingrese la segunda cadena: ";
    cin.getline(cadena2, 100);

    // Convertir las cadenas a mayúsculas
    for (int i = 0; cadena1[i] != '\0'; i++) {
        cadena1[i] = toupper(cadena1[i]);
    }

    for (int i = 0; cadena2[i] != '\0'; i++) {
        cadena2[i] = toupper(cadena2[i]);
    }

    // Comparar las dos cadenas
    if (strcmp(cadena1, cadena2) == 0) {
        cout << "Las cadenas son iguales." << endl;
    } else {
        cout << "Las cadenas no son iguales." << endl;
    }

    return 0;
}

