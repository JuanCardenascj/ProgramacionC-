//Busqueda Binaria

/*El arreglo debe estar ordenado de manera asccendete*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	//Variables
	int numeros[] = {1,2,3,4,5};
	int inf,sup,mitad,dato;
	char band = 'F';
	
	dato = 4;
	
	//Algoritmo de la busqueda binaria
	inf = 0;
	sup = 5;
	
	//Bucle
	while(inf <= sup){ //Mientras inferior sea menor o igual a superior
		mitad = (inf+sup)/2; //Saca la mitad
		
		//Condicional
		if(numeros[mitad] == dato){ //Se define mitad porque es donde se encuentra
		band = 'V'; //Cada vez que encuentre el numero cambie la Band a verdadero
		break; //Salir del bucle
		} if (numeros[mitad] == dato){
			sup = mitad;
			mitad = (inf+sup)/2;
		} if (numeros[mitad] < dato){
			inf = mitad;
			mitad = (inf+sup)/2;
		}
		
	}
	
	if(band == 'V'){
		cout<<"El numero a sido encontrado en la posicion: " <<mitad<<endl;
	} else {
		cout<<"El numero NO a sido encontrado";
	}
	
	
	getch();
	return 0;
}
