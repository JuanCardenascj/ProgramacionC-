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
void menu();               // Crea el menú
Nodo *crearNodo(int);       // Crear nodo
void insertarNodo(Nodo *&, int); // Insertar nodo en el árbol
void mostrarArbol(Nodo*);   // Mostrar árbol en orden

// Inicialización del árbol
Nodo *arbol = NULL;

int main() {
    menu(); // Llamamos al Menú
    return 0;
}

// Función del Menú
void menu() {
    int dato, opcion;

    do {
        cout << ":MENU:" << endl;
        cout << "1. Insertar un nuevo nodo" << endl;
        cout << "2. Mostrar el árbol" << endl;
        cout << "3. Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Digite un número: ";
                cin >> dato;
                insertarNodo(arbol, dato); // Insertamos un nuevo Nodo
                break;
            case 2:
                cout << "Árbol en orden: ";
                mostrarArbol(arbol); // Mostrar el árbol en orden
                cout << endl;
                break;
        }
    } while (opcion != 3); // Se repite mientras no se elija la opción 3
}

// Función para crear un nuevo nodo
Nodo *crearNodo(int n) {
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    return nuevo_nodo;
}

// Función para insertar elementos en el árbol
void insertarNodo(Nodo *&arbol, int n) {
    if (arbol == NULL) { // Si el árbol está vacío
        Nodo *nuevo_nodo = crearNodo(n); // Crear un nuevo nodo
        arbol = nuevo_nodo; // Guardar el nuevo nodo
    } else { // Si el árbol tiene un nodo o más de uno
        int valorRaiz = arbol->dato; // Obtenemos el valor de la raíz
        if (n < valorRaiz) { // Si n es menor al valor de la raíz
            insertarNodo(arbol->izq, n); // Insertar el nodo en el lado izquierdo
        } else { // Si el elemento es mayor a la raíz
            insertarNodo(arbol->der, n); // Insertar en el lado derecho
        }
    }
}

// Función para mostrar el árbol en orden (Inorden)
void mostrarArbol(Nodo *arbol) {
    if (arbol != NULL) {
        mostrarArbol(arbol->izq); // Recorrer el subárbol izquierdo
        cout << arbol->dato << " "; // Imprimir el dato de la raíz
        mostrarArbol(arbol->der); // Recorrer el subárbol derecho
    }
}

