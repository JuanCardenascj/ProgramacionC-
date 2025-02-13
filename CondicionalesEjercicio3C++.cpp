/*Ejercicio 3:
Realice un programam que lea un valor y determine si se trata
de un numero par o impar.
*/

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero ==0 ){
		cout<<"El numero es cero";
	} else if(numero%2==0){ // % Signica que divide numero entre 2 y saca el residuo
		cout<<"El numero es par"; //Imprime
	} else { //Si no puede dividir
		cout<<"El numero es impar";//Imprime el numero es impar
	}
	
	
	
	
	return 0;
}
