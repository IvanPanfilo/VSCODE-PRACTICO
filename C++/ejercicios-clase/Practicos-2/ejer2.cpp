#include <iostream>
using namespace std;
int main(){
    //definicion de variables
    float perimetro, radio;
    //entrada de datos
    cout << "Ingrese el radio de la circunferencia: " << endl;
    cin >> radio;
    //condicional
    while(radio < 0){
        cout << "\n";
        cout << "ERROR: El radio no puede ser negativo." << endl;
        cout << "Ingrese nuevamente el radio: " << endl;
        cin >> radio;
    }
    if(radio == 0){
        cout << "/PROGRAMA FINALIZADO/" <<  endl;
    }
    //salida de datos(resultado)
    else{
        perimetro = 2 * 3.1416 * radio;
        cout << "El perimetro de la circunferencia es de: " << perimetro << " cm." << endl;
    }
    return 0;
}