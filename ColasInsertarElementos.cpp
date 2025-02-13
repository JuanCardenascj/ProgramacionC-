//Insertar elemento en una cola

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;
};

// Prototipos
void insertarCola(Nodo *&, Nodo *&, int);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&, Nodo *&, int &);

void mostrarCola(Nodo *frente);

int main() {
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    
    int dato;
    
    // Insertar elementos en la cola
    cout << "Digite un numero: ";
    cin >> dato;
    insertarCola(frente, fin, dato); // Inserta el elemento en la cola
    
    // Insertar más elementos
    cout << "Digite otro numero: ";
    cin >> dato;
    insertarCola(frente, fin, dato); // Inserta el siguiente elemento
    
    // Mostrar todos los elementos de la cola
    cout << "Elementos en la cola: ";
    mostrarCola(frente);
    
    //Eliminar los elementos de la Cola
    cout<<"Quitando los Nodos de la cola:  ";
    while(frente != NULL){
    	suprimirCola(frente,fin,dato);
    	
    	if(frente != NULL){
    		cout<<dato<<" , ";
    	} else {
    		
    	}
    }
    
    getch();
    return 0;
}

// Función para insertar elementos en una cola
void insertarCola(Nodo *&frente, Nodo *&fin, int n) { 
    Nodo *nuevo_nodo = new Nodo();
    
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;
    
    if (cola_vacia(frente)) {
        frente = nuevo_nodo;
    } else {
        fin->siguiente = nuevo_nodo;
    }
    
    fin = nuevo_nodo;
    
    cout << "Elemento " << n << " insertado a cola correctamente.\n";
}

// Función para determinar si la cola está vacía o no
bool cola_vacia(Nodo *frente) { 
    return (frente == NULL); // Si frente está vacío, retorna true
}

// Función para mostrar todos los elementos de la cola
void mostrarCola(Nodo *frente) {
    if (cola_vacia(frente)) {
        cout << "La cola está vacía.\n";
        return;
    }
    
    Nodo *aux = frente;
    while (aux != NULL) {
        cout << aux->dato << " ";
        aux = aux->siguiente;
    }
    cout << endl;
}

// Función para eliminar elementos de la cola
void suprimirCola(Nodo *&frente, Nodo *&fin, int &n){
	n = frente -> dato;
	Nodo *aux = frente;
	
	//Condicional
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	} else {
		frente = frente -> siguiente;
	} 
	delete aux;
}

