#include <iostream>
using namespace std;
int main(){
    int numero = 0;
    float decena = 0, unidad = 0;
    cout << "Ingrese un numero entero de dos cifras: " << endl;
    cin >> numero;
    
    decena = numero / 10;
    unidad = numero % 10;

    cout << "El numero que ingreso tiene " << decena << " decenas y " << unidad << " unidades." << endl;
    return 0;
}
