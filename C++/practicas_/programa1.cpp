#include <iostream>
using namespace std;
int main(){
    int nota = 0, sum_nota = 0;
    float c;
    
    for( int i = 0; i < 5; i++ ){
        cout << "Ingrese la nota: " << endl;
        cin >> nota;
        sum_nota += nota;
    }

    c = sum_nota / 5.0;
    cout << "El promedio de las notas es: " << c << endl;

    return 0;
}