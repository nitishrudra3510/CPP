/*
Pointer to Objects:

Pointers can be used to reference objects of classes.
They enable dynamic memory allocation and manipulation of objects.
Example: MyClass* ptr holds the address of a MyClass object, allowing access to

its member functions and data.
*/

#include<iostream>
using namespace std;

class Myclass{
    public:
        void print(){
            cout<<"Hello from MyClass\n";
        }
};

int main(){
    Myclass obj;
    Myclass* ptr = &obj;
    ptr->print();  // accessing member function using pointer to object.
    return 0;

}