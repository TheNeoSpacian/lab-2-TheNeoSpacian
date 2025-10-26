#include <iostream>
using namespace std;

int f(int x) {
    return (x * x * x) - (x * x) + 5;
}

int main() {

    cout << "**********" << endl;
    cout << "x  f(x)" << endl; 
    cout << "**********" << endl;

    for (int x = 0; x <= 5; ++x) {
        cout << x << "  " << f(x) << endl;
    }
    
    cout << "**********" << endl;

    return 0;
}