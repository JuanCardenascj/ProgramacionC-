/*Ejercicio 6: Escriba una plantilla de funcion llamada maximo() que devuelva
el valor maximo de tres argumentos que se transmitan a la funcion cuando sea
llamada.
Suponga que los tres argumentos seran del  mismo tipo de datos.*/

#include<iostream>
#include<conio.h>
using namespace std;

// Plantilla de función para encontrar el valor máximo de tres elementos
template <typename T>
T maximo(T a, T b, T c) {
    T max = a;  // Asumimos inicialmente que 'a' es el máximo
    
    // Comparamos 'a' con 'b' y 'c'
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    
    return max;  // Devolvemos el valor máximo encontrado
}

int main() {
    int a = 10, b = 25, c = 15;
    float x = 10.5, y = 20.75, z = 15.3;
    
    // Usamos la plantilla para obtener el máximo de tres enteros
    cout << "El valor máximo entre " << a << ", " << b << " y " << c << " es: " << maximo(a, b, c) << endl;
    
    // Usamos la plantilla para obtener el máximo de tres números flotantes
    cout << "El valor máximo entre " << x << ", " << y << " y " << z << " es: " << maximo(x, y, z) << endl;

    getch();  // Pausa la ejecución (solo si es necesario en tu entorno)
    return 0;
}

