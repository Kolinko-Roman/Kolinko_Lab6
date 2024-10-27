#include <iostream>
using namespace std;

int main() {
    float a = 5, b = 10;
    float *ptrA = &a;
    float *ptrB = &b;
    
    cout << "Початкові значення:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    
    float temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    cout << "Значення після обміну:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
