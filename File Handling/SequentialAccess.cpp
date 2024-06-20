#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Open "example.txt" file for writing
    ofstream outputFile("example.txt");

    if (outputFile.is_open()) {
        // Print message if file opened successfully
        cout << "File opened successfully." << endl;

        // Sequentially write data to the file
        outputFile << "Data 1" << endl; // Write "Data 1" followed by a newline
        outputFile << "Data 2" << endl; // Write "Data 2" followed by a newline
        outputFile << "Data 3" << endl; // Write "Data 3" followed by a newline
        
        outputFile.close(); // Close the file
    } else {
        // Print message if file opening failed
        cout << "Failed to open the file." << endl;
    }

    return 0;
}


/*
In this example, we open a file named "example.txt" for writing using an output file stream (ofstream) object outputFile.
We then check if the file is opened successfully.
We sequentially write data to the file using the insertion operator (<<).
Finally, we close the file
*/