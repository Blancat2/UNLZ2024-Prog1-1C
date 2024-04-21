#include <iostream>
#include <string>

using namespace std;

int main() {
    int edad = 0;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18){
        cout << "Usted es mayor de edad";

    }else{
        cout << "Usted es menor de edad";
    }

    return 0;
}