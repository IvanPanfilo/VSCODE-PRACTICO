#include <iostream>
using namespace std;
int main(){
    int distancia = 0, velocidad = 0, tiempo = 0;
    cout << "Ingrese la velocidad del movil: " << endl;
    cin >> velocidad;
    cout << "Ahora ingrese el tiempo que tardo el movil: " << endl;
    cin >> tiempo;

    distancia = velocidad * tiempo;
    cout << "\n";
    cout << "----------------------------" << endl;
    cout << "La distancia que recorrio el movil es de: " << distancia << " m/s." << endl;
    return 0;
}