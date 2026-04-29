#include <iostream>
using namespace std;
int main(){
    int horas_trabajadas = 0, precio_hora = 3500, sueldo;
    cout << "Ingrese la cantidad de horas trabajadas: " << endl;
    cin >> horas_trabajadas;
    sueldo = horas_trabajadas * precio_hora;

    cout << "------------------" << endl;
    cout << "El sueldo acorde es de: $" << sueldo << endl;
    return 0;
}