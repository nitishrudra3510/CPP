/*
Q1 : Write a program to find the product of two numbers using pointers.
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int m;
//     cin>>n>>m;

//     int* ptr = &n;
//     int* ptr2 = &m;

//     int product = (*ptr) * (*ptr2);
//     cout<<product;

// }

/*
Q3: Find the output of the following code snippet.
int a = 10, b = 20;
int *ptr = &a;
b = *ptr + 1;
ptr = &b;
cout << *ptr << ‘ ‘ << a << ‘ ‘ << b;
11 11 10
10 10 10
11 10 11
10 11 10

*/
#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 20;
int *ptr = &a;
b = *ptr + 1;
ptr = &b;
cout << *ptr << " " << a << " "<< b;
}

// #include<iostream>
// using namespace std;
// int main(){
//    // Find the output of the following code snippet.
// int a = 15, b = 20;
// int *ptr = &a;
// int *ptr2 = &b;
// *ptr = *ptr2;

// cout<<*ptr<<*ptr2;
// ptr now points to b
// ptr2 now points to a
// a gets value of b
// b gets value of a
//}