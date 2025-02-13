/*Ejercicio 3:

Escriba una funcion nombrada funpot() que eleve un numero entero que se le
transmita a una potencia en numero entero positivo y despligue el resultado.
El número entero positivo deberá ser el segundo valor transmitido a la funcion.

*/

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipos de la funcion 
void pedirDatos();
void funpot(int x, int y);


//Declara funciones globales
int numero, exponente;


int main(){
	pedirDatos();
	funpot(numero, exponente);
	
	
	getch();
	return 0;
}

//Dlecara Funciones Locales
void pedirDatos(){
	cout<<"Digite un numero: ";
	cin>>numero;
	cout<<"Digite el exponenete de elevacion: ";
	cin>>exponente;
}

void funpot(int x, int y){
	long resultado=1;
	for(int i=1;i<=y;i++){
		resultado *= x;
	}
	
	cout<<"El resultado es:"<<resultado<<endl;
}

