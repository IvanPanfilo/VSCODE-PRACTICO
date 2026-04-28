#include <iostream>
using namespace std;
int main(){
    int velocidad, tiempo, distancia = 0;
    cout << "Ingrese la velocidad de dicho movil: " << endl;
    cin >> velocidad;
    cout << "Ingrese el tiempo que tardo el movil en alcanzar dicha distancia: " << endl;
    cin >> tiempo;
    
    distancia = velocidad * tiempo;

    cout << "\n";
    cout << "------------------------" << endl;
    cout << "La distancia que recorrio el movil es de: " << distancia << " m/s." << endl;
    
    return 0;
}