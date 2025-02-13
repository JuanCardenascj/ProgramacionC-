 //Plantillas de Funcion
 
 //Ejemplo: Sacar el valor absoluto de un número
 
#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de Funcion
template <class TIPOD> //Engloba diferentes tipos de datos
void mostrarAbs(TIPOD numero);


int main(){
	int num1 = -4;
	float num2 = -56.67;
	double num3 = -123.5678;
	
	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);
	
	getch();
	return 0;
}

//Emplea la Funcion
template <class TIPOD> //Engloba diferentes tipos de datos
void mostrarAbs(TIPOD numero){
	if(numero<0){ //Si numero es menor a 0 - es negativo
		numero = numero * -1;
	}
	
	cout<<"El valor absoluto del numero es: "<<numero<<endl;
}
