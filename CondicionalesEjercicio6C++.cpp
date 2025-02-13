/*Ejercicio 6:

Escriba un programa que lea de la entrada estandar un caracter e indique
en la salida estandar si el caracter es una vocal minuscula, o es una vocal
mayuscula o no es una vocal.

*/

#include<iostream>

using namespace std;

int main(){
	char vocal;
	
	cout<<"Digite un caracter: "; //Pide datos al usuario
	cin>>vocal; //Guarda los datos del usuario
	
	switch(vocal){ //Para comprobar si es mayuscula o minuscula
		case 'a': cout<<"Es una vocal minuscula"; break;//Caso1
	    case 'e': cout<<"Es una vocal minuscula"; break;//Caso2
		case 'i': cout<<"Es una vocal minuscula"; break;//Caso3
		case 'o': cout<<"Es una vocal minuscula"; break;//Caso4
		case 'u': cout<<"Es una vocal minuscula"; break;//Caso5
		
		case 'A': cout<<"Es una vocal mayuscula"; break;//Caso1
	    case 'E': cout<<"Es una vocal mayuscula"; break;//Caso2
		case 'I': cout<<"Es una vocal mayuscula"; break;//Caso3
		case 'O': cout<<"Es una vocal mayuscula"; break;//Caso4
		case 'U': cout<<"Es una vocal mayuscula"; break;//Caso5
		
		default: cout<<"No es una vocal minuscula"; break;
	} 	
	
	return 0;
}
