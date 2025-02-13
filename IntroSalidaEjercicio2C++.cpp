/*Ejercicio 2:
 
 Escribe un programa que lea de la entrada estandar
 el precio de un producto y muestre en la salida 
 estandar el precio del producto al aplicarle el IVA
 */
 
#include <iostream>
using namespace std;

int main() {
    // Declaramos las variables necesarias
    double precio, precioFinal;
    const double IVA = 0.16;  // Porcentaje de IVA

    // Leemos el precio del producto
    cout << "Introduce el precio del producto: ";
    cin >> precio;

    // Calculamos el precio con IVA
    precioFinal = precio * (1 + IVA);

    // Mostramos el precio final
    cout << "El precio con IVA es: " << precioFinal << endl;

    return 0;
}

 
