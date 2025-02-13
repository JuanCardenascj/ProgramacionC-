/*La sentencia for


   for (Expresion 1; expresion logica; expresion 2) {
           conjunto de instrucciones;
		}
*/

#include<iostream>
#include<conio.h>
#include<>


using namespace std;

int main(){ //C++ SIEMPRE SE INICIALIZAN LAS VARIABLES
	int i; //Iterador
	
	for(i=1; i<=10; i++){ //Para que i sea = 1; i menor o igual a 10; i aumente de uno en uno.
		cout<<i<<endl; //Imprime el valor de i
	}
	

	getch(); //Impedir que se cierre
	return 0;
}
