/*Suma de los elementos de un arreglo

Escribe un programa que defina un vector de numeros y calcule la suma 
de sus elementos.

*/

#include<iostream>
#include<conio.h>

using namespace std; //Permite usar cout y cin

int main(){
	int numeros[] = {1,2,3,4,5}; //Defin el vector numero
	int suma = 0; //Define la suma
	
	//Define el bucle
	for(int i=0; i<5; i++){ //Desde que i sea igual 0 hasta que i sea menor a 5
	    suma += numeros[i];//Suma iterativa
	}
	
	cout<<"La suma de los elementos del vector es: "<<suma<<endl;
	
	
	getch();
	return 0;
}
