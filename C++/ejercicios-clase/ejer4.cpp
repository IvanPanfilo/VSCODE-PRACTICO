#include <iostream>
using namespace std;
int main(){
    int partidos_ganados = 0, partidos_perdidos = 0, partidos_empatados = 0, puntaje_final = 0;
    cout << "Ingrese la cantidad de partido ganados: " << endl;
    cin >> partidos_ganados;
    cout << "Ingrese la cantidad de partidos perdidos: " << endl;
    cin >> partidos_perdidos;
    cout << "Ingrese por ultimo los partidos empatados: " << endl;
    cin >> partidos_empatados;
    
    puntaje_final = partidos_ganados * 3 + partidos_empatados * 1 + partidos_perdidos * 0;
    cout << "------------------------------------" << endl;
    cout << "El puntaje final del equipo es: " << puntaje_final << endl;
    return 0;
}