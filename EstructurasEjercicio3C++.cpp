/*Ejercicio 3:

Realizar un programa que lea un arreglo de estructuras los datos N
empleados de la empresa y que imprima los datos del empleado con mayor y 
menor salario.

*/

#include<iostream>
#include<conio.h>

using namespace std;

struct Empleado{
	char nombre[20];
	float salario;
	
//Define el Arreglo
}emp[100];

int main(){
	int n_empleados, posM=0, posm=0;
	float mayor=0, menor = 999999;
	
	//Pide datos al usuario
	cout<<"Digite el numero de empleados: ";
	cin>>n_empleados;
	
	/*Determina empleado de mayor salario*/
	//Bucles
	for(int i = 0; i < n_empleados; i++){
		fflush(stdin);
		cout<<"Digite su nombre: ";
		cin.getline(emp[i].nombre,20); //Se define así porque es cadena
		cout<<"Digite su salario: ";
		cin>>emp[i].salario; //Se define cin directo ya que son valores numericos
		
		if(emp[i].salario > mayor){
			mayor = emp[i].salario;
			posM = i;
		}
		
		/*Determina el empleado con menor salario*/
		if(emp[i].salario < menor){
			menor = emp[i].salario;
			posm = i;
		}
		cout<<" ";
	}
	
	cout<<"Datos del empleado con mayor salario: ";
	cout<<"Nombre: "<<emp[posM].nombre<<endl; //Imprimir datos
	cout<<"Salario: "<<emp[posM].salario<<endl; //Imprimir datos
	
	cout<<"Datos del empleado con menor salario: ";
	cout<<"Nombre: "<<emp[posm].nombre<<endl;//Imprimir datos
	cout<<"Salario: "<<emp[posm].salario<<endl;//Imprimir datos
	
	
	
	
	getch();
	return 0;
}
