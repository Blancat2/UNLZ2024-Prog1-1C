#include <iostream>
#include <string>


using namespace std;   

int main (){
    int perimetro = 0;
    int area = 0;
    int altura = 0;
    int base = 0;

    cout << "Ingrese la base del triangulo: " << endl;

    cin >> base;

    cout << "Ingrese la altura del triangulo: " << endl;

    cin >> altura;

    perimetro = base * 3;

    area = base * altura / 2;

    cout << "El premitro es: " << perimetro << endl;

    cout << "El area es: " << area << endl;

    return 0;


}