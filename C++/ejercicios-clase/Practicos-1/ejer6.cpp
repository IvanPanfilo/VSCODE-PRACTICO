#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float lado1, lado2, lado3, area, semiperimetro;
//entrada de datos
    cout << "Ingrese el valor del primer lado: " << endl;
    cin >> lado1;
    cout << "Ingrese ahora el valor del segundo lado: " << endl;
    cin >> lado2;
    cout << "Ingrese por ultimo el valor del tercer lado: " << endl;
    cin >> lado3;
    //calculos y asignacion de variable area y semiperimetro
    semiperimetro = (lado1 + lado2 + lado3) / 2;
    area = sqrt(semiperimetro * (semiperimetro - lado1) * (semiperimetro - lado2) * (semiperimetro - lado3));
    //salida de datos(resultado)
    cout << "--------------------" << endl;
    cout << "El area del triangulo es: " << area << " cm." << endl;
    return 0;
}