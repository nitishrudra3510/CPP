/*
quez1:

Write a program to count the minimum number of notes in a given amount using the switch statement.
Input 1: 510
Output1 : notes of “500” = 1 and notes of “10” = 1

*/

//code:

// #include <iostream>
// using namespace std;

// int main() {
//     int amount;
//     cout << "Enter the amount above 500: ";
//     cin >> amount;

//     int notes500 = 0, notes100 = 0, notes50 = 0, notes10 = 0;

//     // Count the number of notes for each denomination
//     switch (amount / 500) {
//         case 1:
//             notes500++;
//             amount -= 500;
//             break;
//     }

//     switch (amount / 100) {
//         case 1:
//             notes100++;
//             amount -= 100;
//             break;
//     }

//     switch (amount / 50) {
//         case 1:
//             notes50++;
//             amount -= 50;
//             break;
//     }

//     switch (amount / 10) {
//         case 1:
//             notes10++;
//             amount -= 10;
//             break;
//     }

//     // Output the count of each denomination
//     cout << "notes of \"500\" = " << notes500 << " and ";
//     cout << "notes of \"100\" = " << notes100 << " and ";
//     cout << "notes of \"50\" = " << notes50 << " and ";
//     cout << "notes of \"10\" = " << notes10 << endl;

//     return 0;
// }


// Predict the output:
// #include<iostream>
// using namespace std;
// int main() {
// int x = 3 ;
// float y = 3.0 ;
// if (x == y)
// cout <<"x and y are equal" ;
// else
// cout << "x and y are not equal" ;
// return 0;
// }

//
//predict the output:

// #include<iostream>
// using namespace std;
// int main(){
// int test = 0;
// cout << "First character " << '1' << endl;
// cout << "Second character " << (test ? 3 : '1') << endl;
// return 0;
// }

//predict the output:
// #include <iostream>
// using namespace std;
// int main(){
// int a = 18; int b = 12;
// bool t = (a > 20 && b < 15)? true : false;
// cout <<"Value of t: " << t ;
// return 0;
// }



// predict the output:

#include <iostream>
using namespace std;
int main() {
int number = -4;
char result;
result = number > 0 ? 'P' : 'N';
cout << result << endl;
return 0;
}

