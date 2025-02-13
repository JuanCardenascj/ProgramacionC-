/*Ejercicio 7: 

Hacer un programa que determine si una palabra es Políndroma

*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cad[] = "Ana";
	
	strrev(cad); //(nombre de la cadena que quiere invertir sus digitos
	
	cout<<cad<<endl;//Imprime
	
	char cad2[] = "Oso";
	
	strrev(cad); //(nombre de la cadena que quiere invertir sus digitos
	
	cout<<cad2<<endl;//Imprime
	
	char cad3[] = "Radar";
	
	strrev(cad); //(nombre de la cadena que quiere invertir sus digitos
	
	cout<<cad3<<endl;//Imprime
	
	char cad4[] = "Arenera";
	
	strrev(cad); //(nombre de la cadena que quiere invertir sus digitos
	
	cout<<cad4<<endl;//Imprime
	
	//Son palabras que al escribirlas al contrario o al reves dicen
	//Lo mismo que escritas en orden
	getch();
	return 0;
}
