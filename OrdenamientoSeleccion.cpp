//Ordenamiento por Seleccion

#include<iostream> //Libreria entrada y salida
#include<conio.h> //Libreria para impedir que el ejecutable se cierre

using namespace std;

int main(){
	
	//Variables
	int numeros[] = {3,2,1,5,4};
	int i, j, aux, min;
	
	//Bucles
	for(i=0;i<5;i++){
		min = i; //Numero minimo ( suponemos  i)
		for(j=i+1; j<5;j++){
			//Condicionales
			if(numeros[j] < numeros[min]){
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	
	// Imprimir el arreglo ordenado
	cout<<"Orde Ascendente: ";
	for(i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}
	
	// Imprimir el arreglo desordenado
	cout << "Orden Descendente: ";
	for(i = 4; i >=0; i--){
		cout << numeros[i] << " ";  // Imprimimos el arreglo
	}

	
	getch();
	return 0;
}
