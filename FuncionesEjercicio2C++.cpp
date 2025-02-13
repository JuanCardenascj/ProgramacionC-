/*Ejercicio 2:

Escriba una funcion llamada al_cuadrado() que calcule el cuadrado
del valor que se le transmite y despliegue el resultado. La funcion
debera ser capaz de elevar numeros flotantes.

*/

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipos de funciones - Variables globales
void al_cuadrado(float num);


int main(){
	//Llama las funciones en orden
	float num;
	
	// Pedimos al usuario que ingrese un número
    cout << "Ingrese un número: ";
    cin >> numero;
    
    // Llamamos a la función para calcular el cuadrado
    al_cuadrado(numero);	
	
	getch();
	return 0;
}

// Definición de la función al_cuadrado()
void al_cuadrado(float num) {
    float resultado = num * num;  // Calculamos el cuadrado del número
    cout << "El cuadrado de " << num << " es " << resultado << endl;  // Mostramos el resultado
}
