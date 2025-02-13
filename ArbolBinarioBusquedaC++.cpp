//Arbol Binario - Busqueda

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Nodo {
    int dato;
    Nodo *der;
    Nodo *izq;
};

// Prototipos
void menu();               // Crea el men�
Nodo *crearNodo(int);       // Crear nodo
void insertarNodo(Nodo *&, int); // Insertar nodo en el �rbol
void mostrarArbol(Nodo*);   // Mostrar �rbol en orden

// Inicializaci�n del �rbol
Nodo *arbol = NULL;

int main() {
    menu(); // Llamamos al Men�
    return 0;
}

// Funci�n del Men�
void menu() {
    int dato, opcion;

    do {
        cout << ":MENU:" << endl;
        cout << "1. Insertar un nuevo nodo" << endl;
        cout << "2. Mostrar el �rbol" << endl;
        cout << "3. Salir" << endl;
        cout << "Opci�n: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Digite un n�mero: ";
                cin >> dato;
                insertarNodo(arbol, dato); // Insertamos un nuevo Nodo
                break;
            case 2:
                cout << "�rbol en orden: ";
                mostrarArbol(arbol); // Mostrar el �rbol en orden
                cout << endl;
                break;
        }
    } while (opcion != 3); // Se repite mientras no se elija la opci�n 3
}

// Funci�n para crear un nuevo nodo
Nodo *crearNodo(int n) {
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    return nuevo_nodo;
}

// Funci�n para insertar elementos en el �rbol
void insertarNodo(Nodo *&arbol, int n) {
    if (arbol == NULL) { // Si el �rbol est� vac�o
        Nodo *nuevo_nodo = crearNodo(n); // Crear un nuevo nodo
        arbol = nuevo_nodo; // Guardar el nuevo nodo
    } else { // Si el �rbol tiene un nodo o m�s de uno
        int valorRaiz = arbol->dato; // Obtenemos el valor de la ra�z
        if (n < valorRaiz) { // Si n es menor al valor de la ra�z
            insertarNodo(arbol->izq, n); // Insertar el nodo en el lado izquierdo
        } else { // Si el elemento es mayor a la ra�z
            insertarNodo(arbol->der, n); // Insertar en el lado derecho
        }
    }
}

// Funci�n para mostrar el �rbol en orden (Inorden)
void mostrarArbol(Nodo *arbol) {
    if (arbol != NULL) {
        mostrarArbol(arbol->izq); // Recorrer el sub�rbol izquierdo
        cout << arbol->dato << " "; // Imprimir el dato de la ra�z
        mostrarArbol(arbol->der); // Recorrer el sub�rbol derecho
    }
}

