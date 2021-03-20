/*
Realizar un programa que pida la edad de una persona y  
muéstrelo en pantalla.
*/

#include <iostream> // Para poder mostrar datos en pantalla

using namespace std;

int main() {
    int edad;

    cout << "Bienvenido, ingrese su edad "; // pidiendo datos al usuario
    cin >> edad; 
    cout << "Su edad es:" << edad << " años"; 
  return 0;  
}