/*Ejercicio 1: Crear una lista que almacene "n" números enteros
y calcular el menor y mayor de ellos.*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void insertarLista(Nodo *&, int);

int main(){
	Nodo *lista = NULL;
	
	getch();
	return 0;
}

//Agregar elementos al final de la lista
void insertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(lista == NULL){ //Si la lista esta vacia
	lista = nuevo_nodo; //Agregamos el primer elemento a la lista
	} else {
		aux = lista; //Aux apunta al inicio de la lista
		while(aux->siguiente != NULL){//Recorrer la lista
		aux = aux->siguiente; //Avanzamos posisiciones en la lista
		}
	}
}
