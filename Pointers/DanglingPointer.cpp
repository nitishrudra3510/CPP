/*
Dangling Pointer:

A dangling pointer is a pointer that points to memory that has been deallocated or is no longer valid.
It often occurs when the memory it points to goes out of scope or is explicitly deallocated.
Dereferencing a dangling pointer leads to undefined behavior.
Example: In the code, createInt() returns the address of a local variable, which becomes invalid once
 the function returns, resulting in a dangling pointer.
*/

#include <iostream>
int* createInt() {
    int num = 5;
    return &num; // Returning address of local variable
}

int main() {
    int* ptr = createInt();
    std::cout << "Value pointed by dangling pointer: " << *ptr << std::endl; // Accessing dangling pointer
    return 0;
}
