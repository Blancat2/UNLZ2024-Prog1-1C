#include <iostream>
#include <string>

using namespace std;

int main(){

    const int velocidadSonido = 343;
    int distancia = 0;
    int segundos = 0;

    cout << "Ingrese los segundos entre el relampago y el trueno: " << endl;

    cin >> segundos;

    distancia = velocidadSonido * segundos;

    cout << "La distancia es: " << distancia << " metros " << endl;

    return 0;
}