/*
Recursion (Function, Member Function):

Definition: Recursion is a programming technique where a function calls itself directly or indirectly to solve a problem. It is often used to solve problems that can be broken down into smaller, similar subproblems.
Example: The factorial function calculates the factorial of a number recursively, while the fibonacci function calculates the Fibonacci sequence recursively.

Recursion (Member Function):
Recursion is a programming technique where a function calls itself directly or indirectly to solve a problem. When recursion is applied within a member function of a class, it's called recursion in a member function.

Example:
Consider a class named MyClass with a member function named recursiveFunction. This function can call itself recursively to solve a problem.
*/
#include <iostream>
using namespace std;

// Recursive function
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

class MyClass {
public:
    // Recursive member function
    int fibonacci(int n) {
        if (n <= 1)
            return n;
        else
            return fibonacci(n - 1) + fibonacci(n - 2);
    }
};

int main() {
    // Recursive function example
    cout << "Factorial of 5 is: " << factorial(5) << endl;

    // Recursive member function example
    MyClass obj;
    cout << "Fibonacci of 6 is: " << obj.fibonacci(6) << endl;
    
    return 0;
}
