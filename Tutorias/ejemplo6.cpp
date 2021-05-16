// Crear un programa que de la edad de una persona y mediante condicionales diga si es menor o mayor de edad.


#include <iostream> // Permite imprimir datos ne pantalla

using namespace std;

int main() { // Funcion principal

int edad;

cout<< "Ingrese su edad: "<<endl;
cin>>edad;

if(edad >= 18){
    cout<<"Usted es mayor de edad";
}else{
    cout<<"Usted es menor de edad";
}

    return 0;
}