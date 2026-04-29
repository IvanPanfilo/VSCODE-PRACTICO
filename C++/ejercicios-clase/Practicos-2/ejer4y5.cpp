#include <iostream>
using namespace std;
int main(){
    //definicion de variables
    int edad, acomulador_edad = 0, promedio, cantidad_edades;
    cout << "Ingrese la cantidad de personas para calcular el promedio de las edades: " << endl;
    cin >> cantidad_edades;
    cout << "El programa finalizara al ingresar las edades de " << cantidad_edades << " personas." << endl;
    //bucle
    for(int i = 0; i < cantidad_edades; i++){
        cout << "--------------" << endl;
        cout << "Ingresar edad:" << endl;
        cin >> edad;
        acomulador_edad += edad;
    }
    //calulo del promedio
    promedio = acomulador_edad / cantidad_edades;
    //salida de datos(promedio)
    cout << "\n";
    cout << "El promedio de edades entre las " << cantidad_edades << " personas es de: " << promedio << " años." << endl;
    return 0;
}