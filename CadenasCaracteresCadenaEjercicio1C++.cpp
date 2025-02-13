/*Ejercicio 1:

Hacer un programa que pida al usuario que digite una cadena de 
caracteres, luego verificar la longitud de la cadena, y si esta
supera a 10 caracteres mostrarla en pantall, caso contrario no 
mostrarla.

*/

#include<iostream>
#include<string.h>

using namespace std;

int main() {
    char nombre[30];
    char segnombre[30];
    char apellido[30];
    char segapellido[30];
    
    cout << "Digite su nombre: ";
    cin.getline(nombre, 30);  // Leer el primer nombre
    
    cout << "Digite su segundo nombre: ";
    cin.getline(segnombre, 30);  // Leer el segundo nombre
    
    cout << "Digite su apellido: ";
    cin.getline(apellido, 30);  // Leer el apellido
    
    cout << "Digite su segundo apellido: ";
    cin.getline(segapellido, 30);  // Leer el segundo apellido
    
    // Verificar la longitud y mostrar la cadena si tiene más de 10 caracteres
    if (strlen(nombre) > 10) {
        cout << "Su nombre es: " << nombre << endl;
    } else {
        cout << "El nombre es demasiado corto." << endl;
    }
    
    if (strlen(segnombre) > 10) {
        cout << "Su segundo nombre es: " << segnombre << endl;
    } else {
        cout << "El segundo nombre es demasiado corto." << endl;
    }
    
    if (strlen(apellido) > 10) {
        cout << "Su apellido es: " << apellido << endl;
    } else {
        cout << "El apellido es demasiado corto." << endl;
    }
    
    if (strlen(segapellido) > 10) {
        cout << "Su segundo apellido es: " << segapellido << endl;
    } else {
        cout << "El segundo apellido es demasiado corto." << endl;
    }
    
    return 0;
}

