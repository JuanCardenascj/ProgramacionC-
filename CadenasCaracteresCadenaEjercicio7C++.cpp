/*Ejercicio 7:

Crear una cadena que tenga la siguiente frase
"Hola que tal", luego crear otra cadena para preguntar
al usuario su nombre, por ultimo añadir el nombre al final 
de la primera cadena y mostrar el mensaje completo
"Hola que tal (Nombre del usuario)
*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char frase[] = "Hola, ¿ que tal ? ";
	char nombre[30]; //Aqui va el nombre del usuario
	
	
	cout<<"Digite su nombre: "; 
	cin>>nombre;
	
	//Concatena cadenas	
	strcat(frase,nombre);//Concatena el nombre al final de la cadena
	
	cout<<frase<<nombre<<endl;
	
	getch();
	return 0;
}
