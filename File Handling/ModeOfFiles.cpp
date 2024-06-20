#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Open a file named "example.txt" in append mode
    ofstream outputFile("example.txt", ios::app); // appending to the last in files.

    if (outputFile.is_open()) {
        cout << "File opened successfully." << endl;
        outputFile << "Appending new content." << endl;
        outputFile.close();
    } else {
        cout << "Failed to open the file." << endl;
    }

    return 0;
}

/*
We open a file named "example.txt" in append mode by passing std::ios::app as the second argument to the ofstream constructor.
Append mode allows us to write data to the end of the file without overwriting its existing contents.
We check if the file is opened successfully and then append new content to the file using the insertion operator (<<). Finally, we close the file.

*/





// #include <iostream>
// #include <fstream>

// int main() {
//     // Open a file named "example.txt" and move the file pointer to the end
//     std::fstream file("example.txt", std::ios::ate);

//     if (file.is_open()) {
//         std::cout << "File opened successfully." << std::endl;
//         // Perform operations on the file...
//         file.close();
//     } else {
//         std::cout << "Failed to open the file." << std::endl;
//     }

//     return 0;
// }
