#include <iostream>
using namespace std;
//funcion para calcular promedio
float calcularPromedio(int suma, int cantidad){
    int promedio;
    promedio = suma / cantidad;
    return promedio;
}
//funcion para saber numero mayor
int calcularMayor(int actual, int mayor){
        if (actual > mayor) {
        return actual;
    }
    return mayor;
}
int main(){
    //definir variables
    int numero_entero, total_numeros = 0, acomulador_numeros = 0, mayor = 0;
    //bucle para la entrada de datos
    do{
        cout << "Ingresar un numero entero: " << endl;
        cin >> numero_entero;
        //bucle para verificar si es entero positivo
        while( numero_entero < 0 ){
            cout << "El numero debe ser positivo," << endl;
            cout << "Ingresar de nuevo un numero: " << endl;
            cin >> numero_entero;
        }
        // condicional para contar cada numero ingresado, sin contar el 0
        if(numero_entero != 0){
            total_numeros = total_numeros + 1;
            mayor = calcularMayor(numero_entero, mayor);
        }
        acomulador_numeros += numero_entero;
    }while( numero_entero != 0 );
    //salida de datos(resultados)
    cout << "\n";
    cout << "----------------------------------" << endl;
    cout << " * " << "La cantidad de numeros que se ingresaron son: " << total_numeros << " numeros." << endl;
    cout << " * " << "El promedio de los numeros ingresados es: " << calcularPromedio(acomulador_numeros,total_numeros) << endl;
    cout << " * " << "El mayor de los numeros que se ingreso es: " << mayor << endl;
    return 0;
}