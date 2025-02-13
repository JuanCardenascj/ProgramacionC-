/*Ejercicio 5:

Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos:
nota1, nota2, nota3; y otro llamada alumno que tendrá los siguientes miembros:
nombre,sexo,edad; hacer que la estructura promedio este anidad en la estructura 
alumno, luego pedir todos los datos para un alumno, luego calcular su promedio,
y por ultimo imprimir sus datos includos en el promedio.

*/

#include<iostream>
#include<conio.h>

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

int main(){
	// Creamos un alumno y asignamos valores a sus campos
    Alumno alumno1;
	
    // Pedimos al usuario que ingrese los datos del alumno
    cout << "Ingrese el nombre del alumno: ";
    cin.getline(alumno1.nombre, 50);  // Usamos getline para permitir nombres con espacios

    cout << "Ingrese el sexo del alumno (M/F): ";
    cin.getline(alumno1.sexo, 10);  // Usamos getline para leer el sexo
    
    cout << "Ingrese la edad del alumno: ";
    cin >> alumno1.edad;
    
    // Pedimos las calificaciones
    cout << "Ingrese la nota 1: ";
    cin >> alumno1.promedio.nota1;

    cout << "Ingrese la nota 2: ";
    cin >> alumno1.promedio.nota2;

    cout << "Ingrese la nota 3: ";
    cin >> alumno1.promedio.nota3;

    // Calculamos el promedio
    alumno1.promedio.calcularPromedio();
    
    // Mostramos los datos del alumno y su promedio
    cout << "\nDatos del Alumno:\n";
    cout << "Nombre: " << alumno1.nombre << endl;
    cout << "Sexo: " << alumno1.sexo << endl;
    cout << "Edad: " << alumno1.edad << endl;
    cout << "Promedio: " << alumno1.promedio.promedio << endl;
	
	getch();
	return 0;
}
