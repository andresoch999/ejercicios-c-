#include <iostream>
using namespace std;

int main() {
    int segundos;
    double horas;

    cout << "Ingrese la cantidad de segundos: ";
    cin >> segundos;

    horas = segundos / 3600.0;  

    cout << segundos << " segundos equivalen a " << horas << " horas." << endl;

    return 0;
}
