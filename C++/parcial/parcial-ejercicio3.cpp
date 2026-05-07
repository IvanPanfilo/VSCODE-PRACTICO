#include <iostream>
using namespace std;
int main(){
    int sueldo, cantidad_sueldos1 = 0, cantidad_sueldos2 = 0, cantidad_sueldos3 = 0;
    do{
        cout << "Ingresar sueldo: " << endl;
        cin >> sueldo;
        if(sueldo < 500000){
            cantidad_sueldos1 += 1;
        }
        else if(sueldo >= 500000 && sueldo < 1000000){
            cantidad_sueldos2 += 1;

        }
        else if(sueldo > 1000000){
            cantidad_sueldos3 += 1;
        }
    }while(sueldo > 0);
    cout << cantidad_sueldos1;
    cout << cantidad_sueldos2;
    cout << cantidad_sueldos3;
}