/*
Realizar un programa que devuelva el resultado 
de  las operaciones básicas de dos números enteros.
*/

#include <iostream> // permite mostrar datos en pantalla

using namespace std; // que nos permite usar el cout, cin.

int main() { // funcion principal

    // declarando variables
    float numero1, numero2;
    int suma = 0, multiplicacion = 0, resta = 0;
    float div = 0;

    // pidiendo datos al usuario
    cout << "Por favor digite dos numeros: "; 
    cin >> numero1 >> numero2;

    // suma
    suma = numero1 + numero2;
    // multiplicacion
    multiplicacion = numero1 * numero2;
    // resta
    resta = numero1 - numero2;
    // division
    div = numero1 / numero2;

    // Mostrando datos en pantalla
    cout << "El resultado de la suma es: " << suma << "\n";
    cout << "El resultado de la multiplicacion es: " << multiplicacion << "\n";
    cout << "El resultado de la resta es: " << resta << "\n";
    cout << "El resultado de la division es: " << div << "\n"; // valor entero 

    return 0;
}