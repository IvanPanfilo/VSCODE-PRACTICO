#include <iostream>
using namespace std;
int main(){
    int temperatura = 0;
    cout << "Ingrese la temperatura actual del proceso: " << endl;
    cin >> temperatura;
    if (temperatura > 80){
        cout << "!!!ALARMA!!!! La temperatura supera los 80 grados, cuidado." << endl;
    }

    else{
        cout << "La temperatura es la idonea, puede seguir con el proceso." << endl;
    }
    return 0;
}