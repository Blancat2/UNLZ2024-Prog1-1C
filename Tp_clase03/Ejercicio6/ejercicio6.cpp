#include <iostream>
#include <string>

using namespace std;

int main() {
    int num1 = 0;
    int num2 = 0;
    int resultadoSuma = 0;
    int resultadoResta = 0;
    int resultadoMult = 0;
    float resultadoDiv = 0;
    int opcion = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> num1;
    cout << "Ingrese otro numero: " << endl;
    cin >> num2;

    cout << "Ahora ingrese la operacion que quiere realizar: " << endl;
    cout << "1. Suma " << endl;
    cout << "2. Resta " << endl;
    cout << "3. Multiplicacion " << endl;
    cout << "4. Division " << endl;
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        resultadoSuma = num1 + num2;
        cout << "El resultado de la suma es: " << resultadoSuma << endl;
        break;
    case 2:
        resultadoResta = num1 - num2;
        cout << "El resultado de la resta es: " << resultadoResta << endl;
        break;
    case 3: 
        resultadoMult = num1 * num2;
        cout << "El resultado de la multiplicacion es: " << resultadoMult << endl;
        break;
    case 4:
        resultadoDiv = (float)num1 / (float)num2;
        cout << "El resultado de la division es: " << resultadoDiv << endl;
        break;
    default:
        cout << "No ingreso ninguna opcion, vuelva a intentarlo";
        break;
    }

    return 0;
}