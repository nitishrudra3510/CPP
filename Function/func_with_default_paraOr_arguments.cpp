/*
Functions with Default Parameters/Arguments:

Definition: Functions with default parameters allow you to specify default values for some of the function parameters.
 If a value is not provided for those parameters when the function is called, the default values are used.


Example: In the code provided, the greet function has a default parameter name 
set to "Guest". If no argument is passed to name when calling greet, it defaults to "Guest".
*/
#include <iostream>
using namespace std;

// Function with default parameter
void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet(); // Call the function without passing any argument
    greet("Alice"); // Call the function with an argument
    return 0;
}
