/*
Pointer to Data Member:

C++ allows pointers to data members of a class, which point to specific members of objects.

They are useful when dealing with dynamic data structures or when accessing members indirectly.

Example: int MyClass::* ptr is a pointer to the num member of the MyClass objects,
 allowing access to this member through object instances.

*/

#include <iostream>

class MyClass {
public:
    int num;
    MyClass(int n) : num(n) {}
};

int main() {
    MyClass obj(10);
    int MyClass::* ptr = &MyClass::num; // Pointer to data member
    std::cout << "Value of num using pointer to data member: " << obj.*ptr << std::endl;
    return 0;
}


/*
Class Definition (MyClass):

Here, a class named MyClass is defined, which contains a single public integer member variable called num.
The class has a constructor that initializes num with the value passed to it.
Main Function:

Inside the main() function, an object obj of type MyClass is created, and the constructor is called with the argument 10, initializing the num member variable of obj to 10.
Pointer to Data Member:

The line int MyClass::* ptr = &MyClass::num; declares a pointer to a data member of the class MyClass.
Here, int MyClass::* indicates that ptr is a pointer to an integer member of the MyClass class.
&MyClass::num assigns the address of the num member variable of the MyClass class to the pointer ptr.
Dereferencing and Accessing Member using Pointer:

The line obj.*ptr dereferences the pointer ptr to access the num member variable of the object obj.
This syntax obj.*ptr is used to access a member through a pointer to a data member.
The value of num accessed through the pointer is then printed to the standard output using std::cout.
Output:

The output of the program will be: Value of num using pointer to data member: 10.
This indicates that the value of the num member variable of the obj object is accessed successfully using a pointer to a data member.
In
*/