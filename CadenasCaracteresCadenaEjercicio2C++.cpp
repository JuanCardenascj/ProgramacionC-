//Copiar el contenido  de una cadena a otra - funcion Strcpy()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[] = "Juan"; //Define nombre
	char nombre2[20]; //No se sabe cuantos nombres ([20])
	
	//Usada para copiar el contenido de una cadena a otra
	strcpy(nombre2,nombre); //Primero la cadena vacia, luego la que tiene la informacion
	
	cout<<nombre2<<endl;
		
	
	getch();
	return 0;
}
