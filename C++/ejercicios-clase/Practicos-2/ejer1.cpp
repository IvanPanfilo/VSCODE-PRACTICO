#include <iostream>
using namespace std;
int main(){
    int area = 0, perimetro = 0, base, altura;
    char desicion[1];
//bucle
do{
    //entrada de datos
    cout << "Ingrese la base del rectangulo: " << endl;
    cin >> base;
    cout << "Ahora ingrese la altura del rectangulo: " << endl;
    cin >> altura;
    //bucle y condicion para verificar datos
    while(base < 0 || altura < 0){
    cout << "\n";
    cout << "-----------------------------------------" << endl;
    cout << "Los valores tanto de la base como de la altura del rectangulo no pueden ser menores a 0." << endl;
    cout << "Ingrese nuevamente la base del rectangulo: " << endl;
    cin >> base;
    cout << "Ahora ingrese nuevamente la altura del rectangulo: " << endl;
    cin >> altura;
    }
    //calculos
    area = base * altura;
    perimetro = 2 * (base + altura);
    //salida de datos(resultados)
    cout << "\n";
    cout << "-----------------------------------" << endl;
    cout << "El area del rectangulo es de: "<< area << " cm/2" << endl;
    cout << "El perimetro del rectangulo es de: " << perimetro << " cm" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Si quiere ingresar nuevamente otros datos ingrese (y) o sino ingrese (n)." << endl;
    cin >> desicion;
}while(desicion[0] != 'n');
return 0;
}