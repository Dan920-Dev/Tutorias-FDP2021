/* Solicite el sueldo al usuario y muestre un menú con las opciones de calcular sus 
aportes de renta (10%), AFP (6.25%) o ISSS (2%). Muestre el descuento de 
acuerdo a la opción seleccionada. */

#include <iostream>


using namespace std;

int main() {
    float salario, salarioFinal = 0;
    int opcion;

    cout << "Ingrese su salario";
    cin >> salario;

    cout << "***Menu***" << endl;
    cout << "1. Renta" << endl;
    cout << "2. AFP" << endl;
    cout << "3. ISSS" << endl;
    cout << "digite el numero de la opcion del menu: ";
    cin >> opcion;

    // Forma 2
    if(opcion == 1) {
        salarioFinal = (salario) - (salario * 0.10);
        cout << "Su salario final es: $" << salarioFinal;
    }else{
       if(opcion == 2) {
        salarioFinal = (salario) - (salario * 0.625);
        cout << "Su salario final es: $" << salarioFinal;
        }else{
            if(opcion == 3) {
        salarioFinal = (salario) - (salario * 0.02);
        cout << "Su salario final es: $" << salarioFinal;
        }else{
            cout << "Estimado usuario usted a ingresado una opcion incorrecta";
        }
        }
    }


    /* Forma 1

    
    if(opcion == 1){
        salarioFinal = (salario) - (salario * 0.10);
        cout << "Su salario final es: $" << salarioFinal;
    }

    if(opcion == 2) {
        salarioFinal = (salario) - (salario * 0.625);
        cout << "Su salario final es: $" << salarioFinal;
    }

    if(opcion == 3) {
        salarioFinal = (salario) - (salario * 0.02);
        cout << "Su salario final es: $" << salarioFinal;
    } */



    return 0;
}