#include <iostream>
#include <string>

using namespace std;


int main() {

    int centimetros = 0;
    float metros = 0.00;

    cout << "Ingrese la cantidad de centimetros: " << endl;

    cin >> centimetros;

    metros = (float)centimetros / 100;

    cout << "El resultado es: " << metros << " metros" << endl;

    return 0;

     






}