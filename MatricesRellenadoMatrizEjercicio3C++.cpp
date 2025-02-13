/*Ejercicio 3:

Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego
copiar todo su contenido hacia otra matriz

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int matriz1[2][2] = {{1,2},{3,4}};
	int matriz2[2][2];
	
	//Pasando el contenido hacia matriz2
	for(int i = 0; i < 2; i++){
		for( int j = 0; j < 2; j++){
			matriz2[i][j] = matriz1[i][j];
		}
	}
	
	 // Mostrar la matriz
    cout << "Matriz ingresada:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matriz2[i][j] << " ";  // Mostrar los elementos en una fila
        }
        cout << "\n";  // Salto de línea después de cada fila
    }
	
	
	
	
	getch();
	return 0;
}
