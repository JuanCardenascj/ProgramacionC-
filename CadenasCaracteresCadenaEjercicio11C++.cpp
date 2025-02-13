/*Ejercicio 11:

Pedir su nombre al usuario en MAYUSCULA, si su nombre 
comienza por la letra A, convertir su nombre a minusculas,
caso contrario no convertirlo.

*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[100];
	
    cout << "Introduzca su nombre en este espacio: ";
    cin >> nombre;
    
    // Comprobamos si la primera letra es 'A'
    if(nombre[0] == 'A'){
        // Convertimos todo el nombre a minúsculas si comienza con 'A'
        strlwr(nombre);
    } else if(nombre[0] != 'A'){
    	//No lo convertirmos a minusculas, no comienza por 'A'
    	cout<<"Su nombre no clasifica para convertir en minusculas";
    }
    
    // Imprimimos el nombre (ya modificado si es necesario)
    cout << nombre << endl;
		
	getch();
	return 0;
	
}
