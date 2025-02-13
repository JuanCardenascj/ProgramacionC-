//Ordenamiento por Inserccion O(n)

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	// Variables
	int numeros[] = {4, 2, 3, 1, 5}; // Arreglo de números
	int i, pos, aux;
	
	// Algoritmo de Ordenamiento por Inserción
	for(i = 1; i < 5; i++){  // Comenzamos desde el segundo elemento
		pos = i;               // Organizador o indicador
		aux = numeros[i];      // Guardamos el número actual
		
		// Mientras que pos sea mayor a cero y el número anterior sea mayor al número actual
		while((pos > 0) && (numeros[pos - 1] > aux)){
			numeros[pos] = numeros[pos - 1];  // Desplazamos el número hacia la derecha
			pos--;  // Decrementamos la posición
		}
		numeros[pos] = aux;  // Colocamos el número en su posición correcta
	}
	
	// Imprimir el arreglo ordenado
	cout << "Orden Ascendente: ";
	for(i = 0; i < 5; i++){
		cout << numeros[i] << " ";  // Imprimimos el arreglo
	}
	
	// Imprimir el arreglo desordenado
	cout << "Orden Descendente: ";
	for(i = 4; i >=0; i--){
		cout << numeros[i] << " ";  // Imprimimos el arreglo
	}
	
	
	cout << endl;
	

	getch();
	return 0;
}
