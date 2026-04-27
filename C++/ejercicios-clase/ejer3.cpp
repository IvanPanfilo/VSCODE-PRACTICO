#include <iostream>
using namespace std;
int main(){
    int resp_correctas = 0, resp_incorrectas = 0, puntaje_final = 0;

    cout << "Ingrese la cantidad de respuestas correctas: " << endl;
    cin >> resp_correctas;
    cout << "Ingrese la cantidad de respuestas incorrectas: " << endl;
    cin >> resp_incorrectas;
    puntaje_final =( resp_correctas * 4) + (resp_incorrectas * -1);

    cout << "----------------------------------------" << endl;
    cout << "El puntaje final es de: " << puntaje_final << " puntos." << endl;
    return 0;
}