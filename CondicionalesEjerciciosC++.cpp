/*Ejercicio 1:

Escriba un programa que lea dos numeros y determine cual de ellos
es el mayor

*/

#include<iostream>

using namespace std;

int main(){
	int n1,n2;
	
	cout<<"Digite dos numero: " ; //Pide al usuario que digite dos numero
	cin>>n1>>n2; //Guarda los numeros 
	
	/*Setencias dobles IGUALDAD IF - Else*/
	
	if(n1==n2){ //Si n1 es igual que n2
		cout<<"Ambos numeros son iguales";//Imprime Ambos numeros son iguales
	} else if(n1>n2){ //Pero Si n1 es mayor que n2
		cout<<"El mayor es: "<<n1;//Imprime el mayor es n1
	} else {//Pero sino es mayor que n2
		cout<<"El mayor es: " <<n2;//Entonces el mayor es n2
	}
	
	/*Setencias Dobles MAYOR IF - ELSE*/
		
	if(n1>n2){ //Si n1 es mayor que n2
		cout<<"El mayor es: "<<n1;//Imprime el mayor es n1
	} else {//Pero sino es mayor que n2
		cout<<"El menor es: " <<n2;//Entonces el menor es n2
	}
	
	/*Setencias Dobles MENOR IF - ELSE*/	
	
	if(n1<n2){ //Si n1 es menor que n2
		cout<<"El menor es: "<<n1;//Imprime el menor es n1
	} else {//Pero sino es menor que n2
		cout<<"El mayor es: " <<n2;//Entonces el mayor es n1
	}
	
	/*Setencias Dobles MAYOR o IGUAL IF - ELSE*/
		
	if(n1>=n2){ //Si n1 es mayor o igual que n2
		cout<<"El mayor o igual es: "<<n1;//Imprime el mayor o el igual es n1
	} else {//Pero sino no es mayor o igual que n2
		cout<<"El menor es: " <<n2;//Entonces el menor es n2
	}
	
	/*Setencias Dobles MENOR O IGUAL IF - ELSE*/	
	
	if(n1=<n2){ //Si n1 es menor o igual que n2
		cout<<"El menor es: "<<n1;//Imprime el menor es n1
	} else {//Pero sino es menor que n2
		cout<<"El mayor es: " <<n2;//Entonces el mayor es n2
	}
	
	
	return 0;
}
