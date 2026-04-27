#include <iostream>
using namespace std;
int main(){
    int i = 0, nota = 0, notas_total = 0, promedio = 0;
    do{
        i += 1;
        cout << "Ingresar nota: " << endl;
        cin >> nota;
        notas_total += nota;
    }while( i < 4 );
    
    promedio = notas_total / 4;
    cout << "--------------------" << endl;
    cout << "El promedio de las notas ingresadas es: " << promedio << endl;
    return 0;
}