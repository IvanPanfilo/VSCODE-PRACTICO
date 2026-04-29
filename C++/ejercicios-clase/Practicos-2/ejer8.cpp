#include <iostream>
using namespace std;
int main(){
    int numero, digitos[4] = {0,0,0,0};
    cout << "Ingresa un numero de maximo 4 digitos: " << endl;
    cin >> numero;
    for(int i = 0; i < 4; i++){
        digitos[i] = numero % 10;
        numero /= 10;
    }

    cout << "Los digitos que componen el numero ingresado son: " << "d1 = " << digitos[3] << " d2 = " << digitos[2] << " d3 = " << digitos[1] << " d4 = " << digitos[0] << endl;
}