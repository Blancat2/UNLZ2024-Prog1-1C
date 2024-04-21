#include <iostream>
#include <string>

using namespace std;

int main() {
    char caracter = 'a';

    cout << "Ingrese un caracter en minuscula: ";
    cin >> caracter;

    switch (caracter)
    {
    case 'a' :
        cout << "Usted ingreso una vocal";
        break;
    case 'e' :
        cout << "Usted ingreso una vocal";
        break;
    case 'i' :
        cout << "Usted ingreso una vocal";
        break;
    case 'o' :
        cout << "Usted ingreso una vocal";
        break;
    case 'u' :
        cout << "Usted ingreso una vocal";
        break;
    
    default:
        cout << "Usted ingreso una consonante";
        break;
    }

    return 0;
}