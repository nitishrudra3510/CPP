/*
Write a function to print squares of first n natural numbers, taking n as argument to the function
*/
// #include <iostream>
// using namespace std;

// void printSquares(int n) {
//     for (int i = 1; i <= n; i++) {
//         cout << i * i << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout << "Squares of the first " << n << " natural numbers: ";
//     printSquares(n);
//     return 0;
// }



/*
: Write a function that takes the radius of a circle as an argument and returns its area.

*/

// #include <iostream>
// using namespace std;

// int Circle(int n) {
//     int radius = n;
//     float area_circle = 3.14*pow(radius, 2);
//     return area_circle;
//     cout << endl;
// }

// int main() {
//     int n;
//     cout << "Enter the value of radius: ";
//     cin >> n;
//     cout << "Area of the circle :  "<<Circle(n);;
    
    
//     return 0;
// }


// #include <iostream>
// #include <cmath> // Include the <cmath> header for pow function
// using namespace std;

// float Circle(float radius) { // Change return type to float
//     float area_circle = 3.14 * pow(radius, 2);
//     return area_circle;
// }

// int main() {
//     float radius; // Change data type to float
//     cout << "Enter the value of radius: ";
//     cin >> radius;
//     cout << "Area of the circle: " << Circle(radius) << endl; // Call the Circle function and output the result
    
//     return 0;
// }


/*
Q3: Given two numbers a and b, write a function to print all odd numbers between them.
*/


// #include <iostream>
// using namespace std;

// void PrintOddNumbers(int a, int b) {
//     for (int i = a; i <= b; i++) {
//         if (i % 2 != 0) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int n, m;
//     cout << "Enter two numbers (separated by space): ";
//     cin >> n >> m;

//     cout << "Odd numbers between " << n << " and " << m << " are: ";
//     PrintOddNumbers(n, m);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int PrintOddNumbers(int a, int b) {
//     int count = 0;
//     for (int i = a; i <= b; i++) {
//         if (i % 2 != 0) {
//             cout << i << " ";
//             count++;
//         }
//     }
//     cout << endl;
//     return count;
// }

// int main() {
//     int n, m;
//     cout << "Enter two numbers (separated by space): ";
//     cin >> n >> m;

//     int oddCount = PrintOddNumbers(n, m);
//     cout << "Number of odd numbers between " << n << " and " << m << " is: " << oddCount << endl;

//     return 0;
// }




/*
Write a function to count the number of digits in a number and then print the square of this number.
*/
#include<iostream>
#include<cmath>
using namespace std;

int CountDigitsAndPrintSquare(int a) {
    int count = 0;
    int temp = a;
    
    // Count the number of digits
    while (temp != 0) {
        temp = temp / 10;
        count++;
    }

    // Print the square of the number
    int square = a * a;
    cout << "Square of the number: " << square << endl;

    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int digitCount = CountDigitsAndPrintSquare(n);
    cout << "Number of digits in the entered number: " << digitCount << endl;

    return 0;
}


/*
Q5: The minimum number of functions present in any C++ program is:
0
1
2
Infinite

ans: The minimum number of functions present in any C++ program is 1.
*/

/*

Can the same function name be used for different functions without any conflict?'

ans: No, in C++, the same function name cannot be used for different functions without causing a conflict. Each function in C++ must have a unique name within its scope to avoid ambiguity.
*/


/*
Q6: State True and False:
A function may be called more than once from any other function
It is necessary for a function to return some value.


ans:

True: A function may be called more than once from any other function.
False: It is not necessary for a function to return some value.
*/