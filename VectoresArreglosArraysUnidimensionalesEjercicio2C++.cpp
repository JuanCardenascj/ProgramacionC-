/*Ejercicio 2:

Escribe un programa que defina un vector o arreglo de numeros y calcule
la multiplicacion acumulada de sus elementos.

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {1,2,3,4,5,6,7,8,9,10};//Define el vector numero
	int multiplicacion = 1;//Define la multiplicacion
	
	//Define el bucle
	for(int i=0; i<10; i++){ //Desde que i sea igual 0 hasta que i sea menor a 10
	    multiplicacion *= numeros[i];//Multiplicacion iterativa
	}
	
	cout<<"La multiplicacion de los elementos del vector es: "<<multiplicacion<<endl;
	
	
	getch();
	return 0;
}
