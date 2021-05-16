// Solicite al usuario una letra y detecte si es o no una vocal.


#include <iostream>

using namespace std;

int main() {

    char letra;

    cout << "ingrese una latra: ";
    cin >> letra; 

    // operador or

    if(letra == 'a' || letra == 'e' or letra == 'i' || letra == 'o' || letra == 'u') {
        cout << "La letra ingresada es un vocal";
    }else{
        cout << "La letra ingresada no es vocal";
    } 

    /*
    Operador &&
    int numero = 22;

    if(numero%2 == 0 && numero>=20) {
        cout << "Se cumple ambas condiciones";
    }else{
        cout << "No se cumple";
    } */

    return 0;
}