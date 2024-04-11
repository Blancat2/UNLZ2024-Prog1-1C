#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int area = 0;
    int perimetro = 0;
    int medidaBase = 0;
    int medidaAltura = 0;

    cout << " Ingrese la medida de la base: " << endl;

    cin >> medidaBase;

    cout <<" Ingrese medida de la altura: " << endl;

    cin >> medidaAltura;

    area = medidaAltura * medidaBase;

    perimetro = medidaAltura * 2 + medidaBase * 2;

    cout << "El area del rectangulo es: " << area << endl;

    cout << "El perimetro del rectanculo es: " << perimetro << endl;

    return 0;
    



}
