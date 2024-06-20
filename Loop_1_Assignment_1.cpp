//Print all the odd numbers from 1 to 100.
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<< " Enter the number of x: ";
//     cin>>x;

//     for(int i=1; i<=x; i++){
//         if(i%2!=0){
//             cout<<i<<endl;
//         }
//     }
// }


// ques 2:
// Print all numbers from 1 to 100 that are divisible by 3
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<< " Enter the number of x: ";
//     cin>>x;

//     for(int i=1; i<=x; i++){
//         if(i%3==0){
//             cout<<i<<endl;
//         }
//     }

// }


// ques 3:
//Print the table of ‘n’. Here ‘n’ is an integer which the user will input.


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< " Enter the number of x: ";
//     cin>>n;

//     for(int i=1; i<=10; i++){
//         int m  = n*i;
//         cout<<n<< " * "<<i<< " = "<<m<<endl;
//     }

// }

// ques 4:
//Display this AP - 4,7,10,13,16.. upto ‘n’ terms.


// #include <iostream>
// using namespace std;

// int main() {
//     int firstTerm = 4;
//     int commonDifference = 3;
//     int n;

//     cout << "Enter the number of terms (n): ";
//     cin >> n;

//     cout << "AP: ";
//     for (int i = 0; i < n; ++i) {
//         cout << firstTerm + i * commonDifference;
//         if (i != n - 1) {
//             cout << ",";
//         }
//     }
//     cout << endl;

//     return 0;
// }


// ques 5:
//Display this GP - 3,12,48,.. upto ‘n’ terms.
// ar^b-1 = nth term;
// #include <iostream>
// using namespace std;

// int main() {
//     int firstTerm = 3;
//     int commonRatio = 4;
//     int n;

//     cout << "Enter the number of terms (n): ";
//     cin >> n;

//     cout << "GP: ";
//     for (int i = 0; i < n; ++i) {
//         cout << firstTerm;
//         if (i != n - 1) {
//             cout << ",";
//         }
//         firstTerm *= commonRatio;  // Multiply the current term by the common ratio to get the next term
//     }
//     cout << endl;

//     return 0;
// }


// #include <iostream>
// #include <cmath>
// using namespace std;

// // Function to calculate the nth term of the geometric progression
// int nthTerm(int firstTerm, int commonRatio, int n) {
//     return firstTerm * pow(commonRatio, n - 1);
// }

// // Function to display the geometric progression up to 'n' terms
// void displayGP(int firstTerm, int commonRatio, int n) {
//     cout << "GP: ";
//     for (int i = 1; i <= n; ++i) {
//         cout << nthTerm(firstTerm, commonRatio, i);
//         if (i != n) {
//             cout << ",";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int firstTerm = 3;
//     int commonRatio = 4;
//     int n;

//     cout << "Enter the number of terms (n): ";
//     cin >> n;

//     displayGP(firstTerm, commonRatio, n);

//     return 0;
// }




// ques 6:
// Write a program to print all the ASCII values and their equivalent characters of 26 alphabe4ts using a wwhile loop.
#include<iostream>
using namespace std;
int main(){
    int i = 65;
    while(i<=90){
        
        cout<<i<< " "<<char(i)<< endl;
        i=i+1;
    }
}