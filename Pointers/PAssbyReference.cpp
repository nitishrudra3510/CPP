
#include <iostream>
using namespace std;

// pass by value
void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

// pass by address
void swapByAddress(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// pass by reference
void swapByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 5, b = 10;
    
    cout << "Before swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    swapByValue(a, b);
    cout << "After swapping by value:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    swapByAddress(&a, &b);
    cout << "After swapping by address:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    swapByReference(a, b);
    cout << "After swapping by reference:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
