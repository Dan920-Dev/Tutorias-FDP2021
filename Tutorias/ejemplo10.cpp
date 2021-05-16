/* Solicite un carácter desde teclado. Si es una letra minúscula, despliegue la 
mayúscula correspondiente. Si es una letra mayúscula, despliegue la minúscula 
correspondiente. Puede valerse de la tabla ASCII para resolver este problema. */


#include <iostream>
#include <ctype.h>
using namespace std;

int main() {

    char letra;

    cout << "Ingrese la letra: ";
    cin >> letra;


    if(letra >= 'a' && letra <= 'z'){ // Letra este entre a y z pero en minuscula
        char letra2 = toupper(letra);
        cout << "La letra en Mayuscula es: " << letra2; 
    }else{
        char letra2 = tolower(letra);
        cout << "La letra en minuscula es: " << letra2; 
    }

    return 0;
}