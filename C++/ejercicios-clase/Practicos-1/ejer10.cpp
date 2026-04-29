#include <iostream>
using namespace std;
int main(){
    int lado1, lado2, lado3;
    //entrada de datos
    cout << "Ingresar primer lado: " << endl;
    cin >> lado1;
    cout << "Ingresar segundo lado: " << endl;
    cin >> lado2;
    cout << "Ingrese el tercer lado: " << endl;
    cin >> lado3;
    //condicionales
    if(lado1 == lado2 && lado1 == lado3){
        cout << "------------------------------" << endl;
        cout << "El triangulo es equilatero." << endl;
    }
    else if(lado1 == lado2 && lado2 != lado3){
        cout << "------------------------------" << endl;
        cout << "El triangulo es isoceles." << endl;
    }
    else if(lado1 != lado2 && lado2 != lado3){
        cout << "------------------------------" << endl;
        cout << "El triangulo es escaleno." << endl;
    }
    return 0;
}