/*Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas 
y columnas, posteriormente mostrar la matriz en pantalla
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100][100], filas, columnas;
	
	cout<<"Digite el numero de filas: ";
	cin>>filas;
	cout<<"Digite el numero de columnas: ",
	cin>>columnas;
	
	//Rellenar y almacenar
	for(int i = 0; i < filas; i++){ //Controla las filas - rectas
		for(int j= 0; j < columnas; j++){ //Anidado controlado - controla las columnas
		    cout<<"Digite un numero: ["<<i<<"]["<<j<<"]"; //Guardado en la posicion i y guardado en la posicion J
		    cin>>numeros[i][j]; //Guarda ubicaciones
		}
	}
	
	//Mostrando la Matriz
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			cout<<numeros[i][j];
		}
		cout<<"";
	}
	
	
	
	getch();
	return 0;
}
