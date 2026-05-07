#include <iostream>
using namespace std;
int main(){
    //definicion de variables
    int cantidad_contenedores = 0, limite_peso_maximo = 0, cantidad_contenedores_peso_maximo = 0, peso_contenedor, promedio_total_peso = 0, acomulador_peso = 0;
    //entrada de datos
    cout << "Ingrese el limite de peso por contenedor que se permite: : " << endl;
    cin >> limite_peso_maximo;
    //bucle
    do{
        //entrada de datos
        cout << "--------------------------------" << endl;
        cout << "Registrar peso del contenedor: " << endl;
        cin >> peso_contenedor;
        acomulador_peso += peso_contenedor;
        //condiconales
        if(peso_contenedor != 0){
            cantidad_contenedores += 1;
        }
        if(peso_contenedor > limite_peso_maximo){
            cantidad_contenedores_peso_maximo += 1;
        }
    }while(peso_contenedor != 0);
    //promedio del total del peso de los contenedores
    promedio_total_peso = acomulador_peso / cantidad_contenedores;
    //salida de datos(resultados)
    cout << "-----------------------------------" << endl;
    cout << "Se registraron " << cantidad_contenedores << " contenedores." << endl;
    cout << "* Contenedores que superan el limite de peso permitido: " << cantidad_contenedores_peso_maximo << endl;
    cout << "* El promedio de peso de los contenedores es de: " << promedio_total_peso << endl;
    return 0;
}