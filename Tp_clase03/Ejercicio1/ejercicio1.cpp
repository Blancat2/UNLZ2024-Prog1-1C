#include <iostream>
#include <string>

using namespace std;

int main () {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    
    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese otro numero: ";
    cin >> num2;
    cout << "Ingrese un ultimo numero: ";
    cin >> num3;

    if (num1 > num2 & num1 > num3) {
        cout << "El numero mayor es: " << num1 << endl;
    
    } else if (num2 > num1 & num2 > num3) {
        cout << "El numero mayor es: " << num2 << endl;

    }else {
        cout << "El numero mayor es: " << num3;
    }

    return 0;
}