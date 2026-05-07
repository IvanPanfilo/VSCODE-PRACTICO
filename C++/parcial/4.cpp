#include <iostream>

using namespace std;

// Requisito: int calcularMayor(int actual, int mayor)
int calcularMayor(int actual, int mayor) {
    if (actual > mayor) {
        return actual;
    }
    return mayor;
}

// Requisito: float calcularPromedio(int suma, int cantidad)
float calcularPromedio(int suma, int cantidad) {
    if (cantidad == 0) return 0; // Evita división por cero
    return (float)suma / cantidad;
}

int main() {
    int numero;
    int suma = 0;
    int contador = 0;
    int mayor = 0;

    cout << "Ingrese numeros enteros positivos (finalice con 0):" << endl;

    do {
        cin >> numero;

        if (numero > 0) {
            suma += numero;
            contador++;
            mayor = calcularMayor(numero, mayor);
        } else if (numero < 0) {
            cout << "El numero debe ser positivo." << endl;
        }

    } while (numero != 0);

    if (contador > 0) {
        cout << "\n--- Informe de resultados ---" << endl;
        cout << "Cantidad total de numeros: " << contador << endl;
        cout << "El mayor valor ingresado: " << mayor << endl;
        cout << "Promedio de los numeros: " << calcularPromedio(suma, contador) << endl;
    } else {
        cout << "No se ingresaron numeros validos." << endl;
    }

    return 0;
}