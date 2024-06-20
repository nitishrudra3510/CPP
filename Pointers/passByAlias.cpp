/*
"Pass by alias" is not a standard term in programming. However, 
it may refer to passing parameters to a function using references or reference variables in C++.

In C++, parameters can be passed to a function by value, by reference, or by pointer.
 When passing by value, a copy of the parameter's value is made and passed to the function.
  When passing by reference, a reference to the original variable is passed to the function, 
  allowing the function to directly modify the original variable.


*/
#include <iostream>
using namespace std;


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

    

    swapByReference(a, b);
    cout << "After swapping by reference:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
