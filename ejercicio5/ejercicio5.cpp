#include <iostream>
#include <string>




using namespace std;   

int main (){
   
    const float PI = 3.141592;
    float area = 0;
    float perimetro = 0;
    float radio = 0;

    cout << "Ingrese el radio de la circunferencia: " << endl;

    cin >> radio;

    perimetro = (float)radio * 2 * PI;
    area = (float)radio * radio * PI;

    cout << "El perimetro de la circunferencia es: " << perimetro << endl;
    
    cout << "El area de la circunferencia es: " << area << endl;

    return 0;


}