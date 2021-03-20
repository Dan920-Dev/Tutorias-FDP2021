/*
Escribir un programa que lea una cadena de cuatro caracteres y 
la muestre en orden inverso
*/


#include <iostream>// para mostrar datos en pantalla

using namespace std;

int main () {
    char a, b, c,d;
    // pidiendo datos al usuario
    cout << "ingrese 4 caracteres: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    // mostrando inversamente 
    cout << "Mostrando inversamente: " << endl;
    cout << d << endl; 
    cout << c << "\n";
    cout << b << endl;
    cout << a;
    
    return 0;
}