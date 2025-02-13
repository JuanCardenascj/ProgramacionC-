//Transformar una cadena a numeros - funcion atoi()  y atof()

#include<iostream>
#include<conio.h>
#include<stdlib.h> //Funciona solo con ATOI Y ATOF

using namespace std;

int main(){
	//T. FUNCION ATOI
	
	char cad1[] = "123"; //Define el valor de la cadena de caracteres
	int numero1; //Variable donde guardar
	
	numero1 = atoi(cad1); //Para convertir la cadena en un numero entero
	
	cout<<numero1<<endl; //Para imprimir cadena
	
	//T. FUNCION ATOI
		
	char cad2[] = "123.456"; //Define el valor de la cadena de caracteres
	float numero2; //Variable donde guardar
	
	numero2 = atof(cad2); //Para convertir la cadena en un numero flotante
	
	cout<<numero2<<endl; //Para imprimir cadena

	getch()
	return 0;
}
