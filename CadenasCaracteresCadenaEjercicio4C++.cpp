//Comparar cadenas - funcion srtcmp()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra1[] = "Hola";
	char palabra2[] = "Hola";
	
	//Ambas cadenas son iguales
	if(strcmp(palabra1,palabra2) ==0){ //Para comparar ambas cadenas
	cout<<"Ambas cadenas son iguales";
	}
	
	//Ambas cadenas son diferenes
	if(strcmp(palabra1,palabra2) ==1){ //Para comparar ambas cadenas
	cout<<"Ambas cadenas son diferentes";
	}
	
    //Ambas cadenas son diferenes
	if(strcmp(palabra1,palabra2) !=0){ //Para comparar ambas cadenas
	cout<<"Ambas cadenas son diferentes";
	}
	
	//La cadenas es mayor (Becerro - Avion)
	if(strcmp(palabra1,palabra2) > 0){ //Para comparar ambas cadenas
	cout<<palabra1<<"Esta despues alfabeticamente";
	}
	
    //La cadenas es menor (Becerro - Avion)
	if(strcmp(palabra1,palabra2) < 0){ //Para comparar ambas cadenas
	cout<<palabra1<<"Esta antes alfabeticamente";
	}
	
	
	
	
	
	
	getch();
	return 0;
}
