#include <iostream>
using namespace std;
int main(){
    //definicion de variables
    int numero1, numero2, suma;
    //entrada de datos
    cout << "Ingrese un numero: " << endl;
    cin >> numero1;
    cout << "Ingrese otro numero: " << endl;
    cin >> numero2;
    //condicion
    if( numero1 < 0 && numero2 < 0 ){
        numero1 *= -1;
        numero2 *= -1;
    }
    else if ( numero1 < 0){
        numero1 *= -1;
    }
    else if ( numero2 < 0 ){
        numero2 *= -1;
    }
    //suma de variables
    suma = numero1 + numero2;
    //salida de datos(resultado)
    cout << "La suma de ambos numeros es: " << suma << endl;
    return 0;
}