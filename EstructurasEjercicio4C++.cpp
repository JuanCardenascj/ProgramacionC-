/*Ejercicio 4:

Hacer un arreglo de estructuras llamada atleta para N atletas
que contenga los siguientes campos: Nombre, País, Numero_Medallas.
y devuelva los datos (Nombre, país) del atleta que ha ganado
el mayor número de medallas.

*/

#include <iostream>
#include <conio.h>  // Si estás usando un compilador que soporte conio.h (como Turbo C++). Si no, puedes quitar esta línea.

using namespace std;

struct Atleta {
    char nombre[30];
    char pais[20];
    int n_medallas;
};

int main() {
    int N;  // Número de atletas
    cout << "Ingrese el número de atletas: ";
    cin >> N;
    
    Atleta Atletas[100];  // Array de estructuras para almacenar hasta 100 atletas
    
    // Leer los datos de los atletas
    for (int i = 0; i < N; i++) {
        cout << "\nIngrese el nombre del atleta #" << i + 1 << ": ";
        cin >> Atletas[i].nombre;
        cout << "Ingrese el país del atleta #" << i + 1 << ": ";
        cin >> Atletas[i].pais;
        cout << "Ingrese el número de medallas del atleta #" << i + 1 << ": ";
        cin >> Atletas[i].n_medallas;
    }

    // Buscar al atleta con el mayor número de medallas
    int max_medallas = Atletas[0].n_medallas;
    int indice_max = 0;
    
    for (int i = 1; i < N; i++) {
        if (Atletas[i].n_medallas > max_medallas) {
            max_medallas = Atletas[i].n_medallas;
            indice_max = i;
        }
    }

    // Mostrar el atleta con el mayor número de medallas
    cout << "\nEl atleta con el mayor número de medallas es: ";
    cout << "Nombre: " << Atletas[indice_max].nombre << ", País: " << Atletas[indice_max].pais << endl;

    getch();  // Para pausar la ejecución si estás utilizando un compilador que soporte conio.h
    return 0;
}

