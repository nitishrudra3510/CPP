/*
Differences between Pointer and Reference Variables:

Both pointers and reference variables provide indirect access to data, but they have different behaviors and use cases.
Pointers can be reassigned and can point to null or invalid memory, while references 
are aliases and cannot be reassigned once initialized.
Example: int* ptr is a pointer variable, while int& ref is a reference variable, 
both pointing to the same integer num.


Meaning of above contents:
Pointers can be reassigned: Pointers are variables that store memory addresses. They can be assigned a memory address initially,
 but later on, that memory address can be changed or reassigned to point to a different location in memory. This allows flexibility
  in pointing to different data or memory locations.

Pointers can point to null or invalid memory: Pointers can be assigned a special value called nullptr (in C++11 and later)
 or NULL (in older versions of C++) to indicate that they are not pointing to any valid memory address. Alternatively,
  they can inadvertently point to memory that is no longer valid (for example, after deallocation or if the memory goes
   out of scope), leading to what's called a dangling pointer, which can cause undefined behavior if dereferenced.

References are aliases: References are like an alternative name or alias for an existing object. Once a reference is initialized to refer
 to an object, it cannot be reinitialized or made to refer to a different object. It essentially acts as an alias to the original object.

References cannot be reassigned once initialized: Unlike pointers, which can be reassigned to point to different memory locations,
 references are fixed once they are initialized to refer to an object. They maintain a constant association with the
  object they are referencing throughout their lifetime.
*/

#include <iostream>

int main() {
    int num = 10;
    int* ptr = &num;
    int& ref = num; // Reference variable
    *ptr = 20; // Dereferencing pointer
    ref = 30; // Changing value using reference
    std::cout << "Value of num: " << num << std::endl; // Output: 30
    return 0;
}
