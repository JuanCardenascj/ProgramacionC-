/*Ejercicio 2:

Hacer una estructura llamada alumno, en la cual se tendran los sigueintes campos:
Nombre, Edad, Promedio, 
Pedir datos al usuario para 3 alunos, comprobar cúal de los 3 tiene 
el mejor promedio y posteriormente imprimir los datos del alumno.

*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct Alumnos{
	char nombre[20];
	int edad;
	float promedio;
	
}alumno1, alumno2, alumno3;

int main(){
	
	//Definimos Variables Alumno 1
	cout<<"Nombre: ";
	cin.getline(alumno1.nombre,20);
	cout<<"Edad: ";
	cin>>alumno1.edad;
	cout<<"Promedio: ";
	cin>>alumno1.promedio;
	
	//Definimos Variables Alumno 2
	cout<<"Nombre: ";
	cin.getline(alumno2.nombre,20);
	cout<<"Edad: ";
	cin>>alumno2.edad;
	cout<<"Promedio: ";
	cin>>alumno2.promedio;
	
	//Definimos Variables Alumno 3
	cout<<"Nombre: ";
	cin.getline(alumno3.nombre,20);
	cout<<"Edad: ";
	cin>>alumno3.edad;
	cout<<"Promedio: ";
	cin>>alumno3.promedio;
	
	// Condicional para encontrar el alumno con mejor promedio
    Alumnos mejorAlumno;
    
    // Asumimos que el primer alumno tiene el mejor promedio inicialmente
    mejorAlumno = alumno1;
    
    if (alumno2.promedio > mejorAlumno.promedio) {
        mejorAlumno = alumno2;
    }
    
    if (alumno3.promedio > mejorAlumno.promedio) {
        mejorAlumno = alumno3;
    }
	
 // Imprimir datos del alumno con el mejor promedio
    cout << "\nDatos del alumno con el mejor promedio:" << endl;
    cout << "Nombre: " << mejorAlumno.nombre << endl;
    cout << "Edad: " << mejorAlumno.edad << endl;
    cout << "Promedio: " << mejorAlumno.promedio << endl;
	
	
	
	getch();
	return 0;
}
