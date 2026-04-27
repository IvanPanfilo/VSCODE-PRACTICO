#include <iostream>
using namespace std;
int main(){
    int hs_trabajadas = 0, precio_hs = 3500, sueldo;
    cout << "Ingrese la cantidad de horas trabajadas." << endl;
    cin >> hs_trabajadas;
    sueldo = hs_trabajadas * precio_hs;
    cout << "-----------------------" << endl;
    cout << "El sueldo acorde a las horas trabajadas es de: " << sueldo << endl;
    return 0;
}