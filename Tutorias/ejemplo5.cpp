/*
Escribir un  programa que reciba el radio de un cırculo y 
que muestra en pantalla el diametro, 
la longitud de la circunferencia y el área de ese cırculo.
*/

#include <iostream> // para mostrar datos en pantalla

using namespace std;

int main () { // Funcion principal
    // declarando variables
    float radio, PI = 3.1416, diametro = 0, L = 0, Area = 0;
    
    // pidiendo datos al usuario
    cout << "Bienvenido, ingrese el radio del circulo: " << endl;
    cin >> radio;

    // haciendo procedimientos
    diametro = radio * 2;
    L = 2 * PI * radio;
    Area = PI * radio * radio;

    // Mostrando Datos en pantalla
    cout << "El diametro es: " << diametro << endl;
    cout << "La longitud es: " << L << endl;
    cout << "El area es: " << Area;

 
    return 0;
}

