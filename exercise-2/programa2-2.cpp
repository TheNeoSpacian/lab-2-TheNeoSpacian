#include <iostream>
using namespace std;

int main() {
    int num = 0;
    cout << "Ingrese un número entero" << endl;
    cin >> num;

    if (num % 2 == 0) {
        cout << "El número " << num << " es par." << endl;
    } else {
        cout << "El número " << num << " es impar." << endl;
    }

    return 0;

}