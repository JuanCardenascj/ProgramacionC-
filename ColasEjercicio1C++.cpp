/*Ejercicio 1: Hacer un programa en C++, utilizando Colas que
contenga el siguiente menu:
     
     1. Insertar un caracter a una ccola
     2. Mostrar todos los elementos de la cola
     3. Salir

*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo {
    char dato; // Tipo de dato para la cola (caracteres)
    Nodo* siguiente;
};

// Prototipos de funciones
void insertarCola(Nodo *&, Nodo *&, char);
void mostrarCola(Nodo*);

int main() {
    Nodo *frente = NULL; // Puntero al primer elemento de la cola
    Nodo *fin = NULL;    // Puntero al último elemento de la cola
    char dato, rpt;
    int opcion;

    do {
        // Menú de opciones
        cout << "1. Insertar un caracter a la cola" << endl;
        cout << "2. Mostrar todos los elementos de la cola" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion (1/2/3): ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                // Insertar un nuevo carácter en la cola
                cout << "Digite un caracter: ";
                cin >> dato;
                insertarCola(frente, fin, dato);
                break;

            case 2:
                // Mostrar todos los elementos de la cola
                cout << "Elementos en la cola: ";
                mostrarCola(frente);
                break;

            case 3:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opcion no valida, intente de nuevo." << endl;
        }

    } while(opcion != 3);

    getch(); // Para que no se cierre la consola inmediatamente
    return 0;
}

// Función para insertar un elemento a la cola
void insertarCola(Nodo *&frente, Nodo *&fin, char n) {
    Nodo* nuevo_nodo = new Nodo(); // Creamos un nuevo nodo
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if (frente == NULL) { // Si la cola está vacía
        frente = nuevo_nodo; // El nuevo nodo será el frente
    } else {
        fin->siguiente = nuevo_nodo; // Agregar el nuevo nodo al final
    }

    fin = nuevo_nodo; // El nuevo nodo se convierte en el fin de la cola
    cout << "El caracter '" << n << "' ha sido insertado a la cola correctamente." << endl;
}

// Función para mostrar todos los elementos de la cola
void mostrarCola(Nodo* frente) {
    if (frente == NULL) {
        cout << "La cola esta vacia." << endl;
        return;
    }

    Nodo* aux = frente; // Usamos un puntero auxiliar para recorrer la cola
    while (aux != NULL) {
        cout << aux->dato << " "; // Mostrar el dato del nodo actual
        aux = aux->siguiente;     // Mover al siguiente nodo
    }
    cout << endl;
}

