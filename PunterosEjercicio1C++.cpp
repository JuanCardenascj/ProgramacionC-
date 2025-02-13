/*Ejercicio1: Comprobar si un numero es par o impar y señalar la posicion de 
memoria ddonde se esta guardando. Con punteros*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero, *dir_numero; //Variable puntero
	
	cout<<"Digite un numero: "; cin>>numero;
	
	dir_numero = &numero; //Guardando la posicion de memria
	
	if(*dir_numero%2==0){ //* Adelante la variable puntero - señala lo que esta dentro de la posicion de memoria
		cout<<"El numero "<<*dir_numero<<"es par "<<endl;
		cout<<"posicion: "<<dir_numero<<endl;
	} else {
		cout<<"El numero es "<<*dir_numero<<" es impar"<<endl;
		cout<<"Posicion: "<<dir_numero<<endl;
	}
	
	getch();
	return 0;
}
