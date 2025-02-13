/*Ejercicio 5:
La calificacion final de un estudiante es la media ponderada de tres
notas: la nota de practicas que cuenta un 30% del totalm la nota teorica
que cuenta un 60% y la nota de participacion que cuenta el 10% restante.
Escriba un programa que lea de la entrada estandar las tres notas de un 
alumno y escriba en la salida su nota final.*/

#include<iostream> //Libreria estandar c++

using namespace std;

int main(){
	float practica, teorica, participacion, nota_final;
	
	cout<<"Digite la nota de practica: "; cin>>practica;
	cout<<"Digite la nota teorica: "; cin>>teorica;
	cout<<"Digite la nota de participacion: "; cin>>participacion;
	
	practica *= 0.30;
	teorica *= 0.60;
	participacion *= 0.10;
	
	nota_final = practica + teorica + participacion;
	
	cout<<"La nota final es: " <<nota_final;
	
	
	
	
	
	
	return 0;
}
