//Busqueda Secuencial

/*Busca secuencialmente el dato para ver si el dato existe
Arreglo  a[5] = {3,4,2,1,5}; dato = 4;
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	//Varaibles
	int a[] = {3,4,2,1,5};
	int i,dato;
	char band = 'F';
	
	dato = 4;
	//Busqueda Secuencial
	i=0; //Inicializa Iterador
	
	//Bucle
	while((band == 'F') && (i < 5)){
		//Condicional
		if(a[i] == dato){
			band = 'V';
		}
		i++;
	}
	if(band == 'F'){
		cout<<"El numero a buscar no existe en el arreglo";
	} else if(band == 'V'){
		cout<<"El numero ha sido encontrado en la pos: "<<i-1<<endl; //
	}
	
	
	
	
	
	
	
	getch();
	return 0;
}
