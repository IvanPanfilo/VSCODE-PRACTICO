#include <iostream>
using namespace std;
int main(){
    int numero_notas, notas = 0, acomulador_notas = 0, promedio = 0, iterador = 0;

    cout << "Ingrese la cantidad de notas a ingresar: " << endl;
    cin >> numero_notas;
    do{
        iterador += 1;
        cout << "Ingresar nota: " << endl;
        cin >> notas;
        acomulador_notas += notas;
    }while( iterador != numero_notas );

    promedio = acomulador_notas / numero_notas;
    cout << "\n";
    cout << "----------------------" << endl;
    cout << "El promedio de las notas es de: " << promedio << endl;
    
    return 0;
}