#include <iostream>
using namespace std;

int main () {
    int arr[3];
    double sum=0;
    float prom=0;
    double prod=0;
    cout << "Ingrese tres enteros diferentes: " << endl;

    for (int i = 0; i < 3; i++){
        cout << "Ingrese el primer entero: ";
        cin >> arr[0];
        cout << "Ingrese el segundo entero: ";
        cin >> arr[1];
        cout << "Ingrese el tercer entero: ";
        cin >> arr[2];
        break;
    }
    for (int i = 0; i < 3; i++){
        sum = sum + arr[i];
        prom = sum / 3;
        prod = arr[0] * arr[1] * arr[2];
    }

    int min = arr[0];
    if (arr[1] < min) min = arr[1];
    if (arr[2] < min) min = arr[2];
    
    int max = arr[0];
    if (arr[1] > max) max = arr[1];
    if (arr[2] > max) max = arr[2];

    cout << "La suma es: " << sum << endl;
    cout << "El promedio es: " << prom << endl;
    cout << "El producto es: " << prod << endl;
    cout << "El más pequeño es: " << min << endl;
    cout << "El más grande es: " << max << endl;
}