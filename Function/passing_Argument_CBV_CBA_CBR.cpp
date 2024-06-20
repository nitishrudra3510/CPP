/*
Differences between Call by Value, Call by Address, and Call by Reference:

Definition: These are different methods for passing arguments to functions in C++.
Call by Value: Copies the actual value of the argument into the function's parameter.
Call by Address: Passes the address of the argument into the function's parameter.
Call by Reference: Passes a reference to the argument into the function's parameter.
Example: The code provided demonstrates swapping two variables using each of these methods.
*/


#include <iostream>
using namespace std;

// Call by value
void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

// Call by address
void swapByAddress(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Call by reference
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
