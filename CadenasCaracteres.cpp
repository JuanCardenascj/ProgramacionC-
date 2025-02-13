/*Cadenas de caracteres*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "Juan"; //Una forma de rellenar caracteres
	char palabra2[] = {'J','U','A','N'}; //Otra forma de rellenar caracteres
	char nombre[30]; //No sabemos cuantos caracteres son - datos al usuario
	
	cout<<palabra<<endl;
	cout<<palabra2<<endl;
	
		cout<<"Digite su nombre: ";
		cin.getline(nombre,30,); //Guardar las cadenas de caracteres
	
	
	
	
	
	getch();
	return 0;
}
