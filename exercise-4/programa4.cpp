#include <iostream>
using namespace std;

int main () {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    cout << "Ingrese tres números enteros: " << endl;
    cin >> num1 >> num2 >> num3;

    int min = num1;
    if (num2 < min) min = num2;
    if (num3 < min) min = num3;
    
    int max = num1;
    if (num2 > max) max = num2;
    if (num3 > max) max = num3;

    int mid;
    if (num1 != min && num1 != max) mid = num1;
    else if (num2 != min && num2 != max) mid = num2;
    else mid = num3;

    cout << "El número de en medio es: " << mid << "." << endl;

    return 0;

}