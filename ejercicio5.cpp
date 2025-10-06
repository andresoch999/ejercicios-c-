#include <iostream>
using namespace std;

int main() {
    int segundos;
    double minutos;

    cout << "Ingrese la cantidad de segundos: ";
    cin >> segundos;

    minutos = segundos / 60.0;  

    cout << segundos << " segundos equivalen a " << minutos << " minutos." << endl;

    return 0;
}
