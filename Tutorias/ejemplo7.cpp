// Crear un programa que dado un número diga si es par o impar



#include <iostream> // Permite imprimir datos ne pantalla

using namespace std;

int main() { // Funcion principal
int numero;

cout<<"ingrese un numero: ";
cin>>numero;

    (numero%2==0)?cout<<"Es par":cout<<"Es impar";

    return 0;
}