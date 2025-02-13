/*Ejercicio 3:

Pedir al usuario una cadena de caracteres, almacenarla en un arreglo
y copiar todo su contenido hacia otro arreglo de caracteres.

*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
    char palabras[100];  // Arreglo para guardar la entrada del usuario
    char arreglo[100];   // Arreglo donde copiarás la cadena

    // Pedir al usuario que ingrese una cadena de caracteres
    cout << "Digite una cadena de caracteres: ";
    cin.getline(palabras, 100);  // Usamos getline para leer toda la línea de texto

    // Copiar la cadena ingresada al segundo arreglo
    strcpy(arreglo, palabras);

    // Mostrar la cadena copiada
    cout << "Cadena copiada: " << arreglo << endl;

    return 0;
}
