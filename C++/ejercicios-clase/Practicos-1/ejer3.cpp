#include <iostream>
using namespace std;
int main(){
    int correctas = 0, incorrectas = 0, blanco, puntaje_final;
    cout << "Ingrese la cantidad de respuestas correctas: " << endl;
    cin >> correctas;
    cout << "Ingrese la cantidad de respuestas incorrectas: " << endl;
    cin >> incorrectas;
    cout << "Ingrese la cantidad de respuestas en blanco: " << endl;
    cin >> blanco;

    puntaje_final = (correctas * 4) + (incorrectas * -1) + (blanco * 0);
    cout << "\n";
    cout << "------------------------" << endl;
    cout << "EL puntaje final de acuerdo a las respuestas es: " << puntaje_final << endl;
    return 0;
}