#include <iostream>
using namespace std;
int main(){
    int temperatura = 0;
    //entrada de datos
    cout << "Ingrese la temperatura actual del proceso: " << endl;
    cin >> temperatura;
    // condicion
    if( temperatura >= 80 ){
        cout << "\n";
        cout << "-----------------" << endl;
        cout << "!! ALERTA !!, la temperatura supera los 80 grados, suspender proceso....." << endl;
        cout << "\n";
    }

    else{
        cout << "La temperatura actual es adecuada, continuar proceso....." << endl;
    }
    return 0;
}