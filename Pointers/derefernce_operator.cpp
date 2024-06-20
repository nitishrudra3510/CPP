/*
The dereference operator () is used in C++ to access or manipulate the value pointed to by a pointer.
 When you have a pointer variable that stores the memory address of another variable,
  you can use the dereference operator () to access the value stored at that memory address.
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int x = 9;
//     int* p = &x;
    
//     cout << *p;        
// }


//WAP to calculate sum of two numbers using pointers;
#include<iostream>
using namespace std;
int main(){
    // int x = 9;
    // int y = 10;
    // int*p = &x;
    // int* q = &y;
    // int sum  = *p+*q;
    
    int x,y;
    int* p1 = &x;
    int* q1 = &y;

    cout<<"Enter the 1st numbers : ";
    cin>>*p1;
    cout<<"Enter the 2nd numbers : ";
    cin>>*q1;

    cout<<*p1+*q1;
}