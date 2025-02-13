/*la sentencia while

   while (expresion logica){
        conjunto de instrucciones;
    }
*/

#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	int i;
	
	i = 1; //Incializa desde el valor de 1
	
	while(i<=10){ //Mientras que I sea menor que 10
		cout<<i<<endl; //Imprime i 
		i++;// de uno en uno hasta llegar a 10
	}
	
	getch();//Permite abrir el ejecutable y que no se cierren automaticamente	
	return 0;
}


