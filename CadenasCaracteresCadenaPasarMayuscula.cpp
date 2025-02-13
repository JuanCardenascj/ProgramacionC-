//Pasar una palabra a MAYUSCULA - Funcion strupr()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "Juan";
	
	strupr(palabra); //(Nombre de la varibales)
	
	cout<<palabra<<endl;
 
	getch();
	return 0;
}

