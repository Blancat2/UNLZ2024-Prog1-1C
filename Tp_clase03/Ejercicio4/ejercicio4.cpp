#include <iostream>
#include <string>

using namespace std;

int main () {
    int opcionSeleccionada = 0;
    
    cout << "Ingrese que dia es: " << endl;
    cout << "1. Lunes" << endl;
    cout << "2. Martes" << endl;
    cout << "3. Miercoles" << endl;
    cout << "4. Jueves" << endl;
    cout << "5. Viernes" << endl;
    cout << "6. Sabado" << endl;
    cout << "7. Domingo" << endl;

    cin >> opcionSeleccionada;

    switch (opcionSeleccionada){
        case 1: 
            cout << "Hoy es Lunes";
        break;

        case 2:
            cout << "Hoy es Martes";
        break;
        case 3: 
            cout << "Hoy es Miercoles";
        break;

        case 4:
            cout << "Hoy es Jueves";
        break;
        case 5: 
            cout << "Hoy es Viernes";
        break;

        case 6:
            cout << "Hoy es Sabado";
        break;

        case 7:
            cout << "Hoy es Domingo";
        break;

        default: 
            cout << "Opcion ingresada incorrecta";
        break;


        
    }


}