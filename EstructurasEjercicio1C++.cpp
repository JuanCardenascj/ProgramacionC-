/*Ejercicio 1:

Hacer una estructura llamada corredor, en la cual se tendran los siguientes 
campos: Nombre,Edad,Sexo,Club, pedir datos al usuario corredor, y asignarle
una categoria de competicion:

1.Juvenil <= 18 años
2.Señor <= 40 años
3. Veterano > 40 años

Posteriormente imprimir todos los datos del corredor, incluida su categoria de 
competicion.
*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct corredor{
	char nombre[20];
	int edad;
	char sexo[10];
	char club[20];
	
}c1; //Asigna las variables

 int main(){
 	char categorias[20];
 	
 	//Define Variables
 	cout<<"Nombre: ";
 	cin.getline(c1.nombre,20);
 	cout<<"Edad: ";
 	cin>>c1.edad;
 	fflush(stdin); //Vaciar el buffer y permitir digitar los valores
 	cout<<"Sexo: ";
 	cin.getline(c1.sexo,10);
 	cout<<"Club: ";
 	cin.getline(c1.club,20);
 	
 	if(c1.edad <= 18){
 		strcpy(categorias,"Juvenil");
 	} else if(c1.edad <= 40){
 		strcpy(categorias,"Señor");
 	} else {
 		strcpy(categorias,"Veterano");
 	}
 	
 	cout<<"Datos del corredor: "<<endl;
 	cout<<"Nombre: "<<c1.nombre<<endl;
 	cout<<"Edad: "<<c1.edad<<endl;
 	cout<<"Sexo: "<<c1.sexo<<endl;
 	cout<<"Club: "<<c1.club<<endl;
 	cout<<"Categorias: "<<categorias<<endl;
 	
 	
 	
 	
 	getch();
 	return 0;
 }
