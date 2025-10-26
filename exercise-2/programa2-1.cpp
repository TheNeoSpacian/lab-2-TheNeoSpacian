#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    cout << "Ingrese dos números enteros: " << endl;
    cin >> num1;
    cin >> num2;
    
    if (num2 == 0) {
        cout << "Error, no se puede dividir por cero" << endl;
    }else if (num1 % num2 == 0) {
        cout << num1 << " sí es un multiplo de " << num2 << "." << endl;
    } else
    cout << num1 << " no es un multiplo de " << num2 << "." << endl;

    return 0;

}