/*Ejercicio 3:
Realice un programa que lea de la entrada estadar los siguientes
datos de una persona:

    Edad: dato tipo entero
	Sexo: dato tipo caracter
	Altura: dato tipo real
	
Tras leer los datos, el programa debe mostrarlos en la salida estandar*/

#include<iostream>

using namespace std;

int main(){
	int edad;
	char sexo[10]; //[] para guardar todos los caracteres
	float altura;
	
	cout<<"Digite su edad: "; cin>>edad;
	cout<<"Digite su sexo: "; cin>>sexo;
	cout<<"Digite su altura: "; cin>>altura;
	
	cout<<"Edad"<<edad<<endl;
	cout<<"Sexo:"<<sexo<<endl;
	cout<<"Altura:"<<altura<<endl;
	
	
	
	
	return 0;
}
