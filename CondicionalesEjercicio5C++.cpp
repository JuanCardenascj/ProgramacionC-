/*Ejercicio 5

Escriba un programa que lea de la entrada estandar un caracter e indique
en la salida estandar si el caracter es una vocal minuscula o no

*/

#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"Digite un caracter: "; //Pide datos al usuario
	cin>>letra; //Guarda los datos del usuario
	
	switch(letra){ //Para comprobar si es minuscula
		case 'a': cout<<"Es una vocal minuscula"; break;//Caso1
	    case 'e': cout<<"Es una vocal minuscula"; break;//Caso2
		case 'i': cout<<"Es una vocal minuscula"; break;//Caso3
		case 'o': cout<<"Es una vocal minuscula"; break;//Caso4
		case 'u': cout<<"Es una vocal minuscula"; break;//Caso5
		default: cout<<"No es una vocal minuscula"; break;
	} 
	
	
	
	
	return 0;
}
