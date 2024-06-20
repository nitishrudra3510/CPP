/*

A null pointer is a special type of pointer in C and C++ that does not point to any memory location.
 It is used to represent the absence of a valid memory address. In other words, a null pointer
  does not point to any object or function.

In C++, the keyword nullptr is used to represent a null pointer explicitly. Prior to C++11, the macro 
NULL was commonly used for the same purpose.
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int* ptr = NULL; // reversed address, null charcter also assign - '\0'
//     int* ptr2 = NULL; 
//     cout<<ptr;  // 0x0
//     cout<<endl;
//     cout<<ptr2<<endl; //0x0

//     char ch = '\0';
//     cout<<(int)ch<<endl; //0
// }


#include <iostream>

int main() {
    int* ptr = nullptr; // Declaring a null pointer

    if (ptr == nullptr) { // Checking if the pointer is null
        std::cout << "Pointer is null" << std::endl;
    } else {
        std::cout << "Pointer is not null" << std::endl;
    }

    return 0;
}
