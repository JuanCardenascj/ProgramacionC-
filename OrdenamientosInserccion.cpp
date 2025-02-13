//Ordenamiento por Inserccion O(n)

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	// Variables
	int numeros[] = {4, 2, 3, 1, 5}; // Arreglo de n�meros
	int i, pos, aux;
	
	// Algoritmo de Ordenamiento por Inserci�n
	for(i = 1; i < 5; i++){  // Comenzamos desde el segundo elemento
		pos = i;               // Organizador o indicador
		aux = numeros[i];      // Guardamos el n�mero actual
		
		// Mientras que pos sea mayor a cero y el n�mero anterior sea mayor al n�mero actual
		while((pos > 0) && (numeros[pos - 1] > aux)){
			numeros[pos] = numeros[pos - 1];  // Desplazamos el n�mero hacia la derecha
			pos--;  // Decrementamos la posici�n
		}
		numeros[pos] = aux;  // Colocamos el n�mero en su posici�n correcta
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
