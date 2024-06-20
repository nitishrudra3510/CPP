/*
Array Declaration and Processing of Multidimensional Arrays:

Arrays allow storing multiple elements of the same type in contiguous memory locations.
Multidimensional arrays are arrays of arrays, forming matrices or tables.
Example: int arr[3][2] declares a 2D array with 3 rows and 2 columns, and nested 
loops are used to access and process its elements.
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};
//     for(int i=0; i<3; i++){ // row index
//         for(int j=0; j<2; j++){ // column index
//             cout<<arr[i][j]<<" ";
//         }

//         cout<<endl;
//     }
//     return 0;
// }



// // Array inside the class in multidimensional arrays
// #include <iostream>

// class Matrix {
// private:
//     int rows;
//     int cols;
//     int arr[3][2];

// public:
//     Matrix() {
//         rows = 3;
//         cols = 2;
//         // Initialize the array
//         arr[0][0] = 1; arr[0][1] = 2;
//         arr[1][0] = 3; arr[1][1] = 4;
//         arr[2][0] = 5; arr[2][1] = 6;
//     }

//     void printMatrix() {
//         for (int i = 0; i < rows; i++) {
//             for (int j = 0; j < cols; j++) {
//                 std::cout << arr[i][j] << " ";
//             }
//             std::cout << std::endl;
//         }
//     }
// };



// int main() {
//     // Processing multidimensional array inside main function
//     int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 2; j++) {
//             std::cout << arr[i][j] << " ";
//         }
//         std::cout << std::endl;
//     }

//     // Processing multidimensional array inside class
//     Matrix matrix;
//     std::cout << "Matrix:" << std::endl;
//     matrix.printMatrix();

//     return 0;
// }


/// outside the class of multidimensional arrays


#include <iostream>

// Function to print a 2D array
void printMatrix(int arr[][2], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    
    // Processing multidimensional array outside class
    std::cout << "Matrix:" << std::endl;
    printMatrix(arr, 3, 2);

    return 0;
}










// what is the member function in the class:

/*
#include <iostream>

class MyClass {
private:
    int num;

public:
    // Constructor to initialize num
    MyClass(int n) : num(n) {}

    // Member function to print the value of num
    void printNum() {
        std::cout << "Value of num: " << num << std::endl;
    }
};

int main() {
    // Creating an object of MyClass
    MyClass obj(10);

    // Calling the member function printNum
    obj.printNum();

    return 0;
}

*/