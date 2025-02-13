/*Ejercicio 5:

Desarrolle un programa que lea de la entrada estandar un vector
de enteros y determine el mayor del vector.

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int enteros[100],n,mayor = 0;
	
	cout<<"Digite la cantidad de numeros: ";
	cin>>n;
	
	for(int i=0; i<=n; i++){
		cout<<i+1<<"Digite un numero: "; //i+1 = Inicia desde uno y no desde 0
		cin>>enteros[i]; //Guarda dentro del arrelgo enteros e itera
		
		//1 2 4 10 5
		if(enteros[i] > mayor){
			mayor = enteros[i];
		}
	}
	
	cout<<"El mayor elemento del vector es: "<<mayor<<endl;
	
	
	
	
	getch();
	return 0;
}
