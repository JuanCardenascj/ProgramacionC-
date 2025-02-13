/*Sentencia if

    if(condicion){
	   Instrucciones 1;
	}else {
	   Instrucciones 2;
	}
*/

/*   OPERADOR DIFERENCIA

	if(numero != dato){ //Si numero es diferente a dato
		cout<<"El numero no es 5"; //Imprime el numero no es 5
	} else { //Pero si no es igual a dato
	    cout<<"El numero es diferente de 5";//Entonces el numero es 5
	}
	
	OPERADOR MAYOR O MENOR
	
	if(numero > dato){ //Si numero es mayor a dato
		cout<<"El numero mayor a 5"; //Imprime el numero es mayor a 5
	} else { //Pero si no es mayor a dato
	    cout<<"El numero es menor a 5";//Entonces el numero es menor a5
	}
	
	OPERADOR MAYOR O IGUAL
	
	if(numero >= dato){ //Si numero es mayor o igual a dato
		cout<<"El numero mayor o igual a 5"; //Imprime el numero es mayor o igual a 5
	} else { //Pero si no es mayor o igual a dato
	    cout<<"El numero es menor a 5";//Entonces el numero es menor a 5
	}
	
	OPERADOR MENOR O IGUAL
	
	if(numero =< dato){ //Si numero es mayor o igual a dato
		cout<<"El numero menor o igual a 5"; //Imprime el numero es menor o igual a 5
	} else { //Pero si no es menor o igual a dato
	    cout<<"El numero es mayor a 5";//Entonces el numero es mayor a 5
	}

*/

#include<iostream>

using namespace std;

int main(){
	//Variables
	int numero, dato = 5;
	
	cout<<"Digite un numero: ";//Pide datos al usuario
	cin>>numero; //Guarda los datos introducidos del usuario
	
	if(numero == dato){ //Si numero es igual a dato
		cout<<"El numero es 5"; //Imprime el numero es 5
	} else { //Pero si no es igual a dato
		cout<<"El numero es diferente de 5";//Entonces el numero es diferente de 5
	}
	
	
	return 0; //Retorna 0
	
}
