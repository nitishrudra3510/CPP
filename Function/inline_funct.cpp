
/*
Inline Functions:

Definition: Inline functions are small functions that are expanded in place by the compiler rather than being called like normal functions. This can potentially improve performance by eliminating the overhead of function calls.
Example: The square function provided is declared as inline. When you call square(num), the compiler replaces the function call with the actual code of the function.

*/

/*
explanation: 

Certainly! Let me explain inline functions in simpler terms.

**Definition**: Inline functions are small functions that, when called, are expanded directly at the place where they are called in your code, rather than being executed as separate function calls. This means that the code inside the inline function is directly inserted into the calling code during compilation.

**Example**: Suppose you have a function named `square` that calculates the square of a number. Normally, when you call this function, the program jumps to the `square` function, executes its code, and then returns to where it was called from. However, if you declare `square` as an inline function, when you call `square(num)`, the compiler doesn't make a separate function call. Instead, it simply replaces the call to `square(num)` with the actual code of the `square` function, effectively eliminating the overhead of a function call.

This can potentially improve performance because it reduces the overhead associated with function calls, especially for small and frequently called functions. However, it's important to note that the decision to use inline functions should be made judiciously, as excessive use of inline functions can increase the size of your compiled code.
*/
#include <iostream>
using namespace std;

// Inline function definition
inline int square(int x) {
    return x * x;
}

int main() {
    int num = 5;
    cout << "Square of " << num << " is: " << square(num) << endl;
    return 0;
}
