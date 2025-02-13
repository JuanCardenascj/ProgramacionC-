/*Ejercicio 7:

Realiza un programa que define dos vectores de caractares y despues alamcene el contenido de ambos vectores en un nuevo vector, 
situando en primer lugar los elementos del primer vector seguido por los elementos del segundo vector.
Muestre el conteido del nuevo vector en la salida estandar.

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	//Define los dos vectores de caracteres
	char letras1[] = {'a','b','c','d','e'}; //Define un vector de caracteres
	char letras2[] = {'f','g','h','i','j'}; //Define un vecot de caracteres
	
	//Almacena el contenido de ambos vectores 
	char letras3[10]; //Nuevo vector que almacena los caracteres
	
	//Copiando los Elemento del arreglo letras 1 hacia letras3.
	for(int i = 0; i < 5; i++){ //i < 5 ( Porque el arreglo solo tiene 5 elementos cada uno
		letras3[i] = letras1[i]; //Copia en letras 3 el vector letras 1.
	}
	
	//Copiando los Elementos del arreglo letras 2 hacia letras3
	for(int i = 5; i < 10; i++){ //Apartir de la posicion 5 copiar los arreglos letras 2 en letras 3
		letras3[i] = letras2[i-5]; //
	}
	
	//Proceder al nuevo arreglo - Mostrar el nuevo vector
	for(int i = 0; i < 10; i++){
			cout<<letras3[i]<<endl;
	}

		
	getch();
	return 0;
}
