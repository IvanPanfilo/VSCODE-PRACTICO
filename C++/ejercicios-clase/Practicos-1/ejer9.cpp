#include <iostream>
using namespace std;
int main(){
    int produccion_diaria, produccion_total = 0, iterador = 0, promedio_produccion;
    //bucle(entrada produccion por dia)
    do{
        iterador += 1;
        cout << "\n";
        cout << "Ingrese la cantidad de productos producida: " << endl;
        cin >> produccion_diaria;
        produccion_total += produccion_diaria;
    }while( iterador != 5 );
    //calculo promedio
    promedio_produccion = produccion_total / 5;
    //condicionales
    if(promedio_produccion < 100){
        cout << "\n";
        cout << "--------------------" << endl;
        cout << "El promedio de produccion semanal no supera las 100 unidades." << endl;
        cout << "--------------------" << endl;
    }
    else if(promedio_produccion > 100 && promedio_produccion < 200){
        cout << "\n";
        cout << "--------------------" << endl;
        cout << "El promedio de produccion semanal supera las 100 unidades" << endl;
        cout << "--------------------" << endl;
    }
    else if(promedio_produccion > 200 && promedio_produccion < 300){
        cout << "\n";
        cout << "--------------------" << endl;
        cout << "El promedio de produccion semanal supera las 200 unidades." << endl;
        cout << "--------------------" << endl;
    }
    else if(promedio_produccion > 300){
        cout << "\n";
        cout << "--------------------" << endl;
        cout << "Felicidades, el promedio de la produccion semanal supera las 300 unidades." << endl;
        cout << "--------------------" << endl;
    }
    return 0;
}