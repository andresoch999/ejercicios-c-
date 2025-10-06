#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double radio, area, perimetro;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    area = M_PI * pow(radio, 2);      
    perimetro = 2 * M_PI * radio;     

    cout << "El area del circulo es: " << area << endl;
    cout << "El perimetro del circulo es: " << perimetro << endl;

    return 0;
}
