#include <iostream>
using namespace std;
int main(){
    int ganados, perdidos, empatados, puntaje_final;

    cout << "Ingrese la cantidad de partidos ganados: " << endl;
    cin >> ganados;
    cout << "Ingrese la cantidad de partidos perdidos: " << endl;
    cin >> perdidos;
    cout << "Ingrese la cantidad de partidos empatados: " << endl;
    cin >> empatados;

    puntaje_final = (ganados * 3) + (empatados * 1) + (perdidos * 0);

    cout << "\n";
    cout << "--------------------------" << endl;
    cout << "El puntaje final es de: " << puntaje_final << endl;
    return 0;
}