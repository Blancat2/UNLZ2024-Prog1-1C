#include <iostream>
#include <string>

using namespace std;

int main(){

    string nombre, apellido, direccion, localidad, provincia, pais;
    int edad, telefono;

    cout << "ingrese sus datos (nombre, apellido, edad, direccion, localidad, provincia, pais y telefono): " << endl;

    cin >> nombre >>apellido >>edad >>direccion >>localidad >>provincia >>pais >>telefono;

    cout << "Sus datos son: Nombre: " << nombre << " Apellido: " << apellido << " Edad: " << edad << " Direccion: " << direccion << " Localidad: " << localidad << " Provincia: " << provincia << " Pais: " << pais << " Telefono: " << telefono << endl;

    return 0;

} 