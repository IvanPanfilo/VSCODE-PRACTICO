#include <iostream>
using namespace std;
int main(){
    int edad;
    char nombre[8];
    //entrada de datos
    cout << "Para acceder al beneficio impositivo se necesita:" << endl;
    cout << "\n";
    cout << "Nombre: " << endl;
    cin >> nombre;
    cout << "\n";
    cout << "Año de nacimiento: " << endl;
    cin >> edad;
    //condicionales
    if( edad >= 2009 ){
        cout << "\n";
        cout << "---------------" << endl;
        cout << nombre << " si cumples los requisitos necesarios para obtener el beneficio." << endl;
    }
    else if( edad < 2009 ){
        cout << "\n";
        cout << "---------------" << endl;
        cout << nombre << " no cumples los requisitos necesarios para obtener el beneficio." << endl;
    }
    return 0;
}