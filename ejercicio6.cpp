#include <iostream>

using namespace std;

int main() {
	int number;

	cout << "Ingrese un número: ";
	cin >> number;

	if (number % 2 == 0) {
		cout << "El número " << number << " es par." << endl;
	}
	else {
		cout << "El número " << number << " es impar." << endl;
	}

	return 0;
}