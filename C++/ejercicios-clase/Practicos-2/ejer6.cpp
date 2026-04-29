#include <iostream>
using namespace std;
int main(){
    int numero, multiplicacion, iterador_multiplicacion = 0;
    do{
        cout << "Ingrese el numero para ver su tabla de multiplicacion:" << endl;
        cin >> numero;
        cout << "\n";
        cout << "----------------------" << endl;
        for(int i = 0; i < 10; i++){
            iterador_multiplicacion = i + 1;
            multiplicacion = numero * iterador_multiplicacion;
            cout << numero << " * " << iterador_multiplicacion << " : " << multiplicacion << endl;
        }
        cout << "----------------------" << endl;
    }while( numero != 0);
    return 0;
}