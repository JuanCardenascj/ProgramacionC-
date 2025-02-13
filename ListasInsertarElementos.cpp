#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

// Prototipo de funciones
void menu();
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void buscarLista(Nodo *, int);
void eliminarNodo(Nodo *&, int);

Nodo* lista = NULL; // Inicialización de la lista vacía

int main() {
    menu(); // Llamamos al menú para iniciar el programa
    getch(); // Esperar la entrada del usuario antes de cerrar
    return 0;
}

// Menú de opciones
void menu() {
    int opcion, dato;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insertar elementos a la lista\n";
        cout << "2. Mostrar los elementos de la lista\n";
        cout << "3. Buscar un elemento en lista\n";
        cout << "4. Eliminar un nodo de la lista\n";
        cout << "5. Salir \n";
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Digite un numero: ";
                cin >> dato;
                insertarLista(lista, dato); // Insertar un número en la lista
                break;

            case 2:
                mostrarLista(lista); // Mostrar los elementos de la lista
                break;

            case 3:
                cout << "Digite un numero a buscar: "; // Opción para salir
                cin >> dato;
                buscarLista(lista,dato);
                cout<<"\n";
                break;
                
            case 4:
                cout << "Digite el elemento que desea eliminar : ";
                cin >> dato;
                eliminarNodo(lista,dato);
                cout << "Elemento eliminado (si existía).\n";
                break;

            default:
                cout << "Opcion no valida, intente de nuevo.\n";
        }
        
    } while(opcion != 5);
}

// Función para insertar un elemento en la lista de forma ordenada
void insertarLista(Nodo*& lista, int n) {
    Nodo* nuevo_nodo = new Nodo();  // Crear un nuevo nodo
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    // Si la lista está vacía o el nuevo nodo debe ir al principio
    if (lista == NULL || lista->dato >= n) {
        nuevo_nodo->siguiente = lista;
        lista = nuevo_nodo;
    } else {
        Nodo* aux1 = lista;
        // Encontrar el lugar donde insertar
        while (aux1->siguiente != NULL && aux1->siguiente->dato < n) {
            aux1 = aux1->siguiente;
        }
        // Insertar el nuevo nodo en la posición correcta
        nuevo_nodo->siguiente = aux1->siguiente;
        aux1->siguiente = nuevo_nodo;
    }

    cout << "Elemento " << n << " insertado a lista correctamente.\n";
}

// Función para mostrar los elementos de la lista
void mostrarLista(Nodo *lista) {
    if (lista == NULL) {
        cout << "La lista esta vacia.\n";
        return;
    }

    Nodo *actual = lista; // Inicializamos el puntero actual a la cabeza de la lista
    cout << "Elementos de la lista: ";
    while (actual != NULL) {
        cout << actual->dato << " -> "; // Imprimir el valor del nodo
        actual = actual->siguiente;     // Avanzar al siguiente nodo
    }
    cout << "NULL\n"; // Para indicar el final de la lista
}

// Función para buscar un elemento en la lista
void buscarLista(Nodo *lista, int n) {
    bool band = false;
    Nodo *actual = lista;

    // Bucle para recorrer la lista
    while (actual != NULL) {
        // Si encontramos el dato
        if (actual->dato == n) {
            band = true;
            break;
        }
        actual = actual->siguiente;
    }

    if (band) {
        cout << "Elemento " << n << " ha sido encontrado en la lista.\n";
    } else {
        cout << "Elemento " << n << " NO ha sido encontrado en la lista.\n";
    }
}

// Función para eliminar un elemento en la lista
void eliminarNodo(Nodo *&lista, int n) {
    // Verificar si la lista no está vacía
    if (lista != NULL) {
        Nodo *aux_borrar = lista;
        Nodo *anterior = NULL;

        // Recorrer la lista buscando el nodo a eliminar
        while (aux_borrar != NULL && aux_borrar->dato != n) {
            anterior = aux_borrar;
            aux_borrar = aux_borrar->siguiente;
        }

        // Si el nodo no se encuentra
        if (aux_borrar == NULL) {
            cout << "El elemento " << n << " no ha sido encontrado.\n";
        } 
        // Si el nodo a eliminar es el primer elemento de la lista
        else if (anterior == NULL) {
            lista = lista->siguiente; // Cambiar la cabeza de la lista
            delete aux_borrar;        // Eliminar el primer nodo
        } 
        // Si el nodo a eliminar no es el primer elemento
        else {
            anterior->siguiente = aux_borrar->siguiente; // Bypass del nodo a eliminar
            delete aux_borrar;                          // Eliminar el nodo
        }
    } else {
        cout << "La lista está vacía.\n";
    }
}

