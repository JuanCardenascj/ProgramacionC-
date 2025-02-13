/*Ejercicio 3:

Realice un programa que calcule y muestre en la salida estandar la suma de 
los cuadrados de los 10 primeros enteros mayor que cero.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int suma = 0, cuadrado;
	
	for(int i=1;i<=10;i++){
		cuadrado = i * i;
		suma += cuadrado;//Suma es igual a suma mas cuadrado
	}
	
	cout<<"El resultado de la suma es: "<<suma<<endl;
	
	
	getch();
	return 0;
}
