/*Estructura de datos de entradas ordenadas tales que solo se pueden introducir y eliminar por un extremo 
llamado cima*/

//Insertar elementos en la pila

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&,int); //Prototipo
int main(){
	Nodo *pila = NULL;
	int n1,n2,n3;
	
	cout<<"Digite un numero: ";
	cin>>n1;
	agregarPila(pila,n1);
	
	cout<<"Digite un numero: ";
	cin>>n1;
	agregarPila(pila,n2);
	
	cout<<"Digite un numero: ";
	cin>>n1;
	agregarPila(pila,n3);
	
	
	getch();
	return 0;
}
 //Agregar a pial - Cuatro pasos - Cuatro línea de Codigo
void agregarPila(Nodo *&pila,int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"Elemento "<<n<<" agregado a PILA correctamente"<<endl;
}
