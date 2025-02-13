/*Ejercicio 13:

Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y otro
real, convertirlos a sus respectivos valores y por ultimo sumarlos.

*/

#include<iostream>
#include<conio.h>
#include<stdlib.h> //Funciona solo con ATOI Y ATOF

using namespace std;

int main(){    
    char cad1[30]; // Define el valor de la cadena de caracteres para el entero
    char cad2[30]; // Define el valor de la cadena de caracteres para el real
    int numero1;   // Variable donde guardar el valor entero
    float numero2; // Variable donde guardar el valor flotante
    float sumaN;   // Variable para guardar la suma

    cout << "Digite una cadena de caracteres tipo entero: ";
    cin >> cad1; // Lee la cadena para el número entero

    cout << "Digite una cadena de caracteres tipo real: ";
    cin >> cad2; // Lee la cadena para el número real

    // Convertimos las cadenas a los tipos correspondientes
    numero1 = atoi(cad1); // Convierte la cadena cad1 a entero
    numero2 = atof(cad2); // Convierte la cadena cad2 a flotante

    // Realizamos la suma
    sumaN = numero1 + numero2;

    // Imprimimos el resultado de la suma
    cout << "La suma de los números " << numero1 << " y " << numero2 << " es igual a: " << sumaN << endl;


    getch();
    return 0;
}
