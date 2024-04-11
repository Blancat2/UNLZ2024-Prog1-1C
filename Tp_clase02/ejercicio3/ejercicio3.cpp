#include <iostream>
#include <string>


using namespace std;            

int main(){

    float dolares = 0;
    int pesos = 0;
    int cotizacion = 0;

    cout << "Ingrese la cantidad de pesos que quiere convertir: " << endl;

    cin >> pesos;

    cout << "Ahora ingrese la cotizacion del dolar actual: " << endl;

    cin >> cotizacion;

    dolares = (float)pesos / cotizacion;

    cout << "Usted tiene: " << dolares << " dolares" << endl;

    return 0;

    
}