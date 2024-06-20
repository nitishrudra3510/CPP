/*

Pointer arithmetic refers to the manpulation of pointers using arithmetic operations such as addition,
 subtraction, incrementation, and decrementation. In C and C++, pointer arithmetic is often
  used to navigate through arrays, access array elements, and iterate over data structures
   like arrays and linked lists.

When performing pointer arithmetic, the compiler automatically adjusts the pointer's address based on
 the size of the data type being pointed to. For example, adding 1 to a pointer of type int would
  increase the pointer's address by the size of an integer (typically 4 bytes on most systems).

*/


#include <iostream>
using namespace std;
int main(){
    int x = 7;
    int* ptr = &x;
    cout<<ptr<<endl;

    ptr = ptr + 1;
    cout<<ptr<<endl;
}