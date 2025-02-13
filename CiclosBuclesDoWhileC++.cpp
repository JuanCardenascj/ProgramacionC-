/*La sentencia do while

   do{ 
      conjunto de instrucciones;
	  } while (Expresiones lógica);
	  
Do while - Actua y luego piensa
While - primero piensa y luego actua	  
	  
*/

#include<iostream>
#include<conio.h> //No cierre el ejecutable
#include<stdlib.h> //No permite cerrar el ejecutable hasta no presionar una tecla

using namespace std;

int main(){
	int i;
	
	i = 1;
	
	do{
		cout<<i<<endl;
		i++; //Aumenta el iterador de uno en uno,
	}while(i<=10);
	
	
	getch();	
	return 0;
}
