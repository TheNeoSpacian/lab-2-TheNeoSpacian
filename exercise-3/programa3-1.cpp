#include <iostream>
using namespace std;

int main () {
    int numero;

    cout << "Ingrese un número de cinco dígitos: \n";
    cin >> numero;

    int d1 = numero / 10000;
    numero = numero % 10000;

    int d2 = numero / 1000;
    numero = numero % 1000;

    int d3 = numero / 100;
    numero = numero % 100;

    int d4 = numero / 10;
    numero = numero % 10;

    int d5 = numero;

    cout << d1 << "   " << d2 << "   " << d3 << "   " << d4 << "   " << d5 << endl;

    return 0;
}