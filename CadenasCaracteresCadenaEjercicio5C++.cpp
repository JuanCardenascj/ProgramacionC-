/*Ejercicio 7:

Pedir al usuario que digite 2 cadenas de caracteres, e indicar
si ambas cadenas son iguales, en caso de no serlo, indicar cual
es mayor alfabeticamente.

*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char texto1[] = "When_Your";
	char texto2[] ="When_Name";
	
	//Ambas cadenas son iguales
	if(strcmp(texto1,texto2) ==0){ //Para comparar ambas cadenas
	cout<<"Ambas cadenas son iguales";
	} else if(strcmp(texto1,texto2) > 0){ //Para comparar ambas cadenas
	cout<<texto1<<"Esta despues alfabeticamente";
	} else {
		cout<<"No hay respuesta";
	}
	
	
	getch();
	return 0;
}
