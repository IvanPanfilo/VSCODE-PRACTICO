#include <iostream>
using namespace std;
int main(){
    //definicion de variables.
    int numero;
//entrada de datos
    cout << "Ingresa un numero: " << endl;
    cin >> numero;
//condicionales y salida de datos
    if ( numero % 2 == 0){
        cout << "El numero que ingresaste es par." << endl;
    }
    else if( numero % 2 == 1){
        cout << "El numero que ingresaste es impar. " << endl;
    }
    return 0;
}