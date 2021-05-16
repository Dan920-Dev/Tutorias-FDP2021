/*  Dados tres números enteros indique si el tercero es igual a la suma del primero 
y el segundo. */ 


#include <iostream>

using namespace std;

int main(){

    int a, b, c, suma = 0;

    cout << "Ingrese un numero entreo: "; cin >> a;
    cout << "Ingrese un numero entreo: "; cin >> b;
    cout << "Ingrese un numero entreo: "; cin >> c;


    suma = a + b;

    if(c == suma) {
        cout << "El tecer numero ingresado es igual a la suma del primero mas el segundo";
    }else{
        cout << "El tecer numero ingresado  NO es igual a la suma del primero mas el segundo";
    }

    return 0;
}
