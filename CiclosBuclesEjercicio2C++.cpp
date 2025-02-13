/*Ejercicio 4:

Realice un programa que lea de la entrada estandar números hasta que se introduzca
un cero. En ese momento el programam debe terminar y mostrar en la salida estandar
el numero de valores mayores que cero leídos.

*/

#include<iostream>



using namespace std;
	
	int main(){
		int numero, contador = 0;
		
	  // Instrucciones para leer numeros hasta que se ingrese un cero
    do {
        cout << "Digite un numero (0 para terminar): ";
        cin >> numero;  // Leer el número
        
        if (numero > 0) {
            contador++;  // Incrementa el contador si el numero es mayor que cero
        }
    } while (numero != 0);  // El ciclo sigue hasta que el usuario ingresa 0
    
    cout << "Se leyeron " << contador << " numeros mayores que cero." << endl;
    
    return 0;
}
