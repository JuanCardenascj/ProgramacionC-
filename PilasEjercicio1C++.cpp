/*Ejercicio 1: Hacer un programa para agregar números enteros a una pila,
hasta que el usuario lo decida, después mostrar todos los números introducidos en la pila*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
	
};

//Prototipo de Función
void agregarPila(Nodo *&, int); // Nodo, pasa por puntero y referencia
void sacarPila(Nodo *&, int &);

int main(){
	Nodo *pila = NULL;
	int dato;
	char rpt;
	
	//Bucle
	do{
		cout<<"Digite un numero: ";
		cin>>dato;
		agregarPila(pila,dato);
		
		cout<<"Desea agregar otro elemento a PILA(S/N): ";
		cin>>rpt;
	} while((rpt=='S') || (rpt=='s'));
	
	cout<<"Sacando los elementos de la pila: ";
	while(pila != NULL){ //Mientras no sea el final de la pila
	sacarPila(pila,dato);
	if(pila != NULL){
		cout<<dato<<" , ";
	} else{
		cout<<dato<<" , ";
	}
	}
	
	
	getch();
	return  0;
}

//Agregar un elemento a la PILA
void agregarPila(Nodo *&pila, int n){// Nodo, pasa por puntero y referencia - entero n
    Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"El elemento "<<n<<" ha sido agregado a PILA correctamente";
}

//Sacar PILA
void sacarPila(Nodo *&pila,int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete  aux;
}
