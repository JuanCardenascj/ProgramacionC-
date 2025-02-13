/*QUE ES UNA FUNCION

Realiza una tarea concreta y puede ser diseñada, implementada y depurada de 
manera independiente al resto de codigo.

   Sintaxis.
   
   tipo nombre(tipo var1, tipo var2 ...., tipó varn) {
         conjunto de instrucciones;
}
  Ejemplos:
  
  int numMax(int x, int y)
  double intercambio(double x, double y)
  void desplegar(float x, float y)
*/

//Ejemplo

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funcion
int encontrarMax(int x, int y);

int main(){
	int n1,n2;
	int mayor;	
	cout<<"Digite dos numeros: ";
	cin>>n1>>n2;
	
	mayor = contrarMax(n1,n2);
	
	cout<<"El mayor de los dos numeros es: "<<mayor<<endl;
	
	
	getch();
	return 0;
}

//Definicion de funcion
int encontrarMax(int x, int y){
	int numMax;
	
	if(x>Y){
		numMax = x;
	} else {
		numMax = y;
	}
	
	return numMax;
	
	
}
