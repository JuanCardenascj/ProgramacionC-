//Añadir o concatenar una cadena con otra - funcion strcat()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace  std;

int main(){
	char cad1[] = "Esto es una cadena";
	char cad2[] = "Ejemplo";
	char cad3[30]; //Crea otra cadena donde almacenar
	
	
	//Concatena cadenas
	strcpy(cad3,cad1);//Cad3: "Esto es una cadena"
	
	strcat(cad3,cad2);//cad3: "esto es una cadena"
	
	cout<<cad3<<endl;
	
	
	
	
	
	
	getch();
	return 0;
}

