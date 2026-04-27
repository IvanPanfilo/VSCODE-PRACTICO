#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b, c;
    float area = 0, s = 0;
    cout << "Ingresa el valor de A: " << endl;
    cin >> a;
    cout << "Ahora el valor de B: " << endl;
    cin >> b;
    cout << "Por ultimo el valor de C: " << endl;
    cin >> c;

    s = ( a + b + c ) / 2;
    area = sqrt( s * (s-a) * (s-b) * (s-c) );

    cout << "----------------------" << endl;
    cout << "El area del triangulo es de: " << area << endl;
    return 0;
}