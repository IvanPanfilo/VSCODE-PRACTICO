#include <iostream>
#include <string>
using namespace std;
int main(){
    //definicion de cadena de texto y variables
    int cantidad_perros, cantidad_gatos, promedio = 0, edad, acomulador_edad = 0;
    string decision;
    cout << "Para ver el promedio de edades en el sistema, ingrese el animal que quiere analizar: " << endl;
    cin >> decision;
    //condicion y bucle(eleccion perro)
    if( decision == "perro" || decision == "PERRO"){
        cout << "\n";
        cout << "Ahora ingrese la cantidad de perros atendidos: " << endl;
        cin >> cantidad_perros;
        cout << "---------------------" << endl;
        for(int i = 0; i != cantidad_perros; i++){
            cout << "Ingresar edad: " << endl;
            cin >> edad;
            acomulador_edad += edad;
            promedio = acomulador_edad / cantidad_perros;
        }
        cout << "\n";
        cout << "----------------------------------------" << endl;
        cout << "El promedio de edad de los perros es de: " << promedio << " años." << endl;
    }
    //condicion y bucle(eleccion gato)
    else if( decision == "gato" || decision == "GATO"){
        cout << "\n";
        cout << "Ahora ingrese la cantidad de gatos atendidos: " << endl;
        cin >> cantidad_gatos;
        cout << "---------------------" << endl;
        for(int i = 0; i != cantidad_gatos; i++){
            cout << "Ingresar edad: " << endl;
            cin >> edad;
            acomulador_edad += edad;
            promedio = acomulador_edad / cantidad_gatos;
        }
        cout << "\n";
        cout << "----------------------------------------" << endl;
        cout << "El promedio de edad de los gatos es de: " << promedio << " años." << endl;
    }
    //mensaje de eleccion fuera de las opciones permitidas
    else{
        cout << "\n";
        cout << "----------------------------------------" << endl;
        cout << "En esta veterinaria solo se atiende a perros y gatos." << endl;
    }
    return 0;
}