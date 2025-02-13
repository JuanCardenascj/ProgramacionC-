/*La sentencia switch 

  Switch(Expresion){
    case literal1:
      conjunto de instrucciones1;
      break;
*/

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	
	cout<<"Digite un numero entre 1 y 5 ";
	cin>>numero;
	
	switch(numero){
		case 1: cout<<"Es el numero 1"; break;//Permite imprimir el caso que se cumpla
		case 2: cout<<"Es el numero 2"; break;//Permite imprimir el caso que se cumpla
		case 3: cout<<"Es el numero 3"; break;//Permite imprimir el caso que se cumpla
		case 4: cout<<"Es el numero 4"; break;//Permite imprimir el caso que se cumpla
		case 5: cout<<"Es el numero 5"; break;//Permite imprimir el caso que se cumpla
		default: cout<<"No estea en el rango de 1 a 5"; break;//Permite imprimir el caso que se cumpla
	}
	
	
	
	return 0;
}
