/*
A double pointer, also known as a pointer to a pointer, is a special type of pointer in C 
and C++ that stores the address of another pointer. In other words, it is a pointer
 variable that points to the memory location of another pointer variable.
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int x = 5;
//     int* ptr = &x;
//     int** p = &ptr;
//     cout<<x<<endl;
//     cout<<*ptr<<endl;
//     cout<<**p<<endl;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int x = 5;
//     int* ptr = &x;
//     int** p = &ptr;
//     cout<<x<<endl;
//     cout<<ptr<<endl;  // address of x;
//     cout<<*p<<endl; // address of ptr
// }


#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* ptr = &x;
    int** p = &ptr;
    cout<<x<<endl;
    cout<<ptr<<endl;  // address of x;
    cout<<*p<<endl; // address of ptr
}