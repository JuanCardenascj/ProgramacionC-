/*Ejercicio 1:

Escriba una funcion llamada mult() que acepte dos números en punto
flotante como parametros, multiplique estos dos números y despliegue (No retorna)
el resultado.

*/

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipos de funciones - Variables globales
void pedirDatos(); //VOID NO RETORNA
void mult(float x, float y); //VOID NO RETORNA - despliegue

float num1,num2;

int main(){
	//Llama las funciones en orden
	pedirDatos();
	mult(num1, num2);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite dos numeros: ";
	cin>>num1>>num2; //Guarda los datos
}

void mult(float x, float y){
	float mult = x * y;
	
	cout<<"La multiplicacion es: "<<mult<<endl;
}
