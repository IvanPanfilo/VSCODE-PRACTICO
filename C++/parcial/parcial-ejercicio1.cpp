#include <iostream>
using namespace std;
//funcion para saber si es par o impar
bool esPar(int numero){
    int par, impar;
    numero %= 2;
    if(numero != 0){
        return false;
    }
    else if(numero == 0){
        return true;
    }
    return numero;
}
//funcion para saber si es multiplo de 3
bool esMultiploDeTres(int numero){
    if (numero % 3 == 0) {
        return true;
    } else {
        return false;
    }
}
int main(){
//defino las variables
int numero;
//entrada de datos(numero positivo)
cout << "Ingrese un numero entero positivo: " << endl;
cin >> numero;
//verificar que el numero sea positivo, si no repetir(bucle)
while( numero < 0 ){
    cout << "\n";
    cout << "El numero a ingresar no puede ser negativo." << endl;
    cout << "Ingrear de nuevo un numero: " << endl;
    cin >> numero;
}
//calculos con funciones
cout << "\n";
cout << "------------------------" << endl;
esPar(numero);
esMultiploDeTres(numero);
//salida de los datos(resultados)
//par o impar
if( esPar(numero) == true){
    cout << "* El numero que ingreso es par." << endl;
}
else if( esPar(numero) == false){
    cout << "* El numero que ingreso es impar." << endl;
}
//multiplo de 3
if(esMultiploDeTres(numero) == true){
    cout << "* El numero que ingreso es multiplo de 3." << endl;
}
else if( esMultiploDeTres(numero) == false){
    cout << "* El numero que ingreso no es multiplo de 3." << endl;
}
return 0;
}
