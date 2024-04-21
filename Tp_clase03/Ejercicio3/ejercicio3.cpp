#include <iostream>
#include <string>

using namespace std;

int main () {
    int año = 0;
    int añoIngresado = 0;

    cout << "Ingrese un año";
    cin >> añoIngresado;

    if (año = añoIngresado % 4){
        cout << "El año " << añoIngresado << " no es bisiesto";

    }else {
        
        cout << "El año " << añoIngresado << " es bisiesto" << endl;

    }
    return 0;
}