/*Ejercicio 6:

Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos
para N alumnos, y calcular cuál de todo tiene el mejor promedio, e 
imprimir sus datos.

*/

#include <iostream>
#include <conio.h>

using namespace std;

// Estructura para representar el promedio de un alumno
struct Promedio {
    float nota1;
    float nota2;
    float nota3;
    float promedio;  // Promedio de las calificaciones
    
    // Función para calcular el promedio
    void calcularPromedio() {
        promedio = (nota1 + nota2 + nota3) / 3;
    }
};

// Estructura para representar un alumno
struct Alumno {
    char nombre[50];
    char sexo[10];
    int edad;
    Promedio promedio;  // Anidamos la estructura Promedio dentro de Alumno
};

int main() {
    int N;  // Número de alumnos
    cout << "Ingrese el número de alumnos: ";
    cin >> N;
    cin.ignore();  // Para ignorar el salto de línea después de leer el número de alumnos

    Alumno alumnos[N];  // Creamos un arreglo de N alumnos
    
    // Variables para determinar el mejor promedio
    int indiceMejorPromedio = 0;
    float mejorPromedio = 0.0;

    // Pedimos los datos de los alumnos
    for (int i = 0; i < N; i++) {
        cout << "\nAlumno #" << i + 1 << ":\n";
        
        cout << "Ingrese el nombre del alumno: ";
        cin.getline(alumnos[i].nombre, 50);  // Usamos getline para permitir nombres con espacios

        cout << "Ingrese el sexo del alumno (M/F): ";
        cin.getline(alumnos[i].sexo, 10);  // Usamos getline para leer el sexo
        
        cout << "Ingrese la edad del alumno: ";
        cin >> alumnos[i].edad;
        
        // Pedimos las calificaciones
        cout << "Ingrese la nota 1: ";
        cin >> alumnos[i].promedio.nota1;

        cout << "Ingrese la nota 2: ";
        cin >> alumnos[i].promedio.nota2;

        cout << "Ingrese la nota 3: ";
        cin >> alumnos[i].promedio.nota3;
        cin.ignore();  // Para ignorar el salto de línea después de leer las calificaciones

        // Calculamos el promedio del alumno
        alumnos[i].promedio.calcularPromedio();

        // Comparamos el promedio del alumno con el mejor promedio encontrado hasta ahora
        if (alumnos[i].promedio.promedio > mejorPromedio) {
            mejorPromedio = alumnos[i].promedio.promedio;
            indiceMejorPromedio = i;  // Guardamos el índice del alumno con el mejor promedio
        }
    }

    // Mostrar los datos del alumno con el mejor promedio
    cout << "\nEl alumno con el mejor promedio es:\n";
    cout << "Nombre: " << alumnos[indiceMejorPromedio].nombre << endl;
    cout << "Sexo: " << alumnos[indiceMejorPromedio].sexo << endl;
    cout << "Edad: " << alumnos[indiceMejorPromedio].edad << endl;
    cout << "Promedio: " << alumnos[indiceMejorPromedio].promedio.promedio << endl;

    getch();  // Pausa la ejecución (solo si es necesario en tu entorno)
    return 0;
}

