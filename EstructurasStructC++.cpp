/*ESTRUCTURAS STRUCT 

Supongamos que se desea almacenar los datos de una coleccion de dicos compactos (CD) 
de musica.
Estos datos pueden ser:

1.Título
2.Artista
3.Número de Canciones
4.Precio
5.Fecha de Compra

     Como se Declara una Estructura
     
     struct <nombreDeLaEstructura> {
       <tipoDeDato>  <nombreDeCampo>
       <tipoDeDato>  <nombreDeCampo>
       <tipoDeDato>  <nombreDeCampo>
       ......
       <tipoDeDato>  <nombreDeCampo>
   };

     Ejemplo: Una Estructura en C++

       struct coleccion_CD {
           char titulo[30];
           char artista[25];
           int numCanciones;
           float precio;
           char fecha_compra[20];
};

Coleccion de datos de diferentes TIPOS.

*/

//Estructuras basicas en c++

#include<iostream>
#include<conio.h>

using namespace std;

struct Persona{
	//DATOS
	char nombre[20];
	int edad;
	
	//VARIABLES	
}
persona1 = {"Juan", 29}, 
persona2 = {"Cardenas", 17};

int main(){
	cout<<"Nombre1: "<<persona1.nombre<<endl;
	cout<<"Edad1: "<<persona1.edad<<endl;
	
	cout<<"Nombre2: "<<persona2.nombre<<endl;
	cout<<"Edad2: "<<persona2.edad<<endl;
	
	
	getch();
	return 0;
}

/*Cuando no tiene los datos y se los tiene que pedir al usuario

struct Persona{
	//DATOS
	char nombre[20];
	int edad;
	
	//VARIABLES	
}persona1;

int main(){
     cout<<"Nombre: ";
     cin.getLine(persona1.nombre,20;
     cout<<"Edad: ";
     cin>>persona1.edad;
     
     cout<<"Imprimiento datos";
     cout<<"Nombre: "<<persona1.nombre<<endl;
     cout<<"Edad: "<<persona1.edad<<endl;

*/









