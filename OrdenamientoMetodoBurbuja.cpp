//Metodo burbuja

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {4,1,2,3,5};
	int i,j,aux;
	 
	//Algoritmo metodo Burbuja
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(numeros[j] > numeros[j+1]){
				aux = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = aux;
			}
		}
	}
	
	cout<<"Orden Ascendete: ";
	for(i=0;i<5;i++){ //Se usa bucle para poder imprimir sus elementos
		cout<<numeros[i];
	}
	
	cout<<"Orden Descendente: ";
	for(int i=0;i<5;i--){//Se usa bucle para poder imprimir sus elementos
		cout<<numeros[i];
	}	
	
	
	
	getch();
	return 0;
}
