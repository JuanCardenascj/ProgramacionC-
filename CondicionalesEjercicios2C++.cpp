/*Ejercicio 2:

Escriba un programa que lea tres números y determine cuál de ellos es
el mayor.

*/

#include<iostream>

using namespace std;

int main(){
	int n1,n2,n3;
	
	cout<<"Digite tres numeros: ";//Pide al usuario que digite dos numero
	cin>>n1>>n2>>n3;//Guarda los numeros
	
	if(n1==n2==n3){
		cout<<"Los tres numeros son iguales";
	} else if (n1>n2==n3){
		cout<<"El numero: "<<n1<< "es mayor que: "<<n2<< " y "<<n3<< "es igual al numero: "<<n3<< endl;
	} else if (n1<n2==n3){
		cout<<"El numero: "<<n1<< "es menor que: "<<n2<< " y "<<n3<< "es igual al numero: "<<n3<< endl;
	} else {
		cout<<"Los numeros no cumplen las condiciones"<<endl;
	}
	
	
	
	
	
	
	
	
	return 0;
}
