//Estructuras Anidadas 

#include<iostream>
#include<conio.h>

using namespace std;

struct info_direccion{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};

struct empleado{
	char nombre[20];
	struct info_direccion dir_empleado;
	double salario;
}empleados[2];

int main(){
	
	//Bucle
	for(int i = 0; i<2; i++){
		fflush(stdin); //Vaciar el buffer y permitir digitar los valores
		//Cadenas Caracteres
		cout<<"Digite su nombre: ";
		cin.getline(empleados[i].nombre,20); //[i]Arreglo estructuras
		cout<<"Digite su direccion: ";
		cin.getline(empleados[i].dir_empleado.direccion,30); //[i]Arreglo estructuras
		cout<<"Digite su ciudad: ";
		cin.getline(empleados[i].dir_empleado.ciudad,20); //[i]Arreglo estructuras
		cout<<"Digite su provincia: ";
		cin.getline(empleados[i].dir_empleado.provincia,20); //[i]Arreglo estructuras
		cout<<"Digite el salario: ";
		cin>>empleados[i].salario; //[i]Arreglo estructuras
		cout<<" ";
	}
	
	//Imprimiento los datos
	
	for(int i = 0; i < 2; i++){
		cout<<"Nombre: "<<empleados[i].nombre;
		cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
		cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
		cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
		cout<<"Salario: "<<empleados[i].salario;
		cout<<" ";
	}
	
	
	getch();
	return 0;
}
