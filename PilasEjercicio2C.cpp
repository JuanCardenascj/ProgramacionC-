/*Ejercicio 2: Hacer un programa en C++, utilizando pilas que contenga 
el siguiente menú:

1. Insertar un caracter a la pila
2. Mostrar todos los elementos de la pila
3. Salir*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo {
    char dato; // Cambié el tipo de dato a char, ya que estamos trabajando con caracteres
    Nodo* siguiente;
};

// Prototipo de Función
void agregarPila(Nodo*&, char); // Nodo, pasa por puntero y referencia
void mostrarPila(Nodo*);

int main() {
    Nodo* pila = NULL;
    char dato, rpt;
    int opcion;

    // Bucle
    do {
        // Menú
        cout << "1. Insertar un caracter a la pila\n";
        cout << "2. Mostrar todos los elementos de la pila\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion (1/2/3): ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Digite un caracter: ";
                cin >> dato;
                agregarPila(pila, dato);
                break;

            case 2:
                cout << "Elementos de la pila: ";
                mostrarPila(pila);
                break;

            case 3:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opcion no valida, intente de nuevo." << endl;
        }

    } while(opcion != 3);

    getch();
    return 0;
}

// Agregar un elemento a la PILA
void agregarPila(Nodo*& pila, char n) {
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout << "El caracter '" << n << "' ha sido agregado a la pila correctamente.\n";
}

// Mostrar todos los elementos de la PILA
void mostrarPila(Nodo* pila) {
    if (pila == NULL) {
        cout << "La pila esta vacia.\n";
        return;
    }
    
    Nodo* aux = pila;
    while (aux != NULL) {
        cout << aux->dato << " ";
        aux = aux->siguiente;
    }
    cout << endl;
}

