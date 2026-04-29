#include <iostream>
using namespace std;
int main(){
    int numero, unidades = 0, decenas = 0;
    //entrada de datos
    cout << "Ingrese un numero entero de dos cifras." << endl;
    cin >> numero;
    //calculos(obtencion unidad y decenas)
    unidades = numero % 10;
    decenas = (numero - unidades) * 0.1;
    //condicionales
    if(numero >= 100 || numero < 0){
    cout << "-------------------------------------------" << endl;
        cout << "El numero debe ser positivo y de dos cifras solamente." << endl;
    }
    else{
    //salida de datos(resultados)
    cout << "-------------------------------------------" << endl;
    cout << "El numero tiene " << decenas << " decenas y " << unidades << " unidades." << endl;
    }
    return 0;
}