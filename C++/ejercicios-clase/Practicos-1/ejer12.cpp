#include <iostream>
using namespace std;
int main(){
    int numero, respuesta;
    //entrada de datos
    cout << "Ingresar un numero entero: " << endl;
    cin >> numero;
    //calculos
    respuesta = numero % 2;
    //condicional y salida de datos(respuestas)
    if( respuesta == 0 ){
        cout << "------------------------------" << endl;
        cout << "El numero que ingreso es par." << endl;
    }
    else if( respuesta != 0 ){
        cout << "------------------------------" << endl;
        cout << "El numero que ingreso es impar." << endl;
    }
    return 0;
}