// #include <iostream>

// int main() {
//     int* ptr; // Declaration of a pointer without initialization

//     // Attempting to dereference the wild pointer
//     std::cout << "Value pointed by wild pointer: " << *ptr << std::endl;

//     return 0;
// }


#include <iostream>

int main() {
    int* ptr; // Declaration of a pointer without initialization

    // Attempting to dereference the wild pointer
    std::cout << "Attempting to dereference the wild pointer..." << std::endl;

    // Dereferencing the pointer to access the value it points to
    // This is undefined behavior since ptr is uninitialized and points to an arbitrary memory address
    // It may result in a segmentation fault, memory access violation, or other unexpected behavior
    // Uncommenting the line below may lead to a crash or undefined behavior
    // std::cout << "Value pointed by wild pointer: " << *ptr << std::endl;

    return 0;
}


/*
int* ptr; // Declaration of a pointer without initialization

means: 

In this declaration, ptr is a pointer variable of type int*, meaning it can store the memory address of an integer variable. However, at this point,
 ptr does not point to any specific memory location. It could contain any value, typically referred to as a "garbage value",
  which may be a leftover
 value from the memory location where ptr is stored or some arbitrary value.

Since ptr is not initialized with a valid memory address, attempting to dereference it (i.e., accessing the
 value it points to using the * operator) will result in undefined behavior. This is because there's no guarantee 
 that ptr points to a valid memory location, and accessing the value it points to could lead to reading from or writing
  to an unintended memory address.


*/