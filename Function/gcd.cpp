/*
Write a function to compute the greatest common divisor of two given numbers
*/
// #include<iostream>
// using namespace std;

// int gcd(int a, int b){
//     int hcf = 1;
//     for(int i = 1; i <= min(a,b); i++){
//         if(a % i == 0 && b % i == 0){  // i is a common factor;
//             hcf = i;
//         }
//     }
//     return hcf;  // Move the return statement outside the loop
// }

// int main(){
//     int a;
//     cout << "Enter a num: ";
//     cin >> a;

//     int b;
//     cout << "Enter b num: ";
//     cin >> b;

//     cout << "GCD is: " << gcd(a, b) << endl;  // Display the result
//     return 0;  // Indicate successful completion of the program
// }


#include<iostream>
using namespace std;

int gcd(int a, int b){
    int hcf = 1;
    //24 60
    // 24-> 24, 23, 22, 21......, 12, ......1;
    for(int i=min(a,b); i>=1; i--){
        if(a % i == 0 && b % i == 0){  // i is a common factor;
            hcf = i;
            break;
        }
    }
    return hcf;  // Move the return statement outside the loop
}

int main(){
    int a;
    cout << "Enter a num: ";
    cin >> a;

    int b;
    cout << "Enter b num: ";
    cin >> b;

    cout << "GCD is: " << gcd(a, b) << endl;  // Display the result
    return 0;  // Indicate successful completion of the program
}
