// print the content from the files..

/*
We open a file named "example.txt" in read mode using an input file stream object inputFile.
We check if the file is opened successfully and then use a while loop with std::getline() to read each line of the file.
Inside the loop, we print each line to the console.
Finally, we close the file.
*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Open "example.txt" file for reading
    ifstream inputFile("example.txt");

    if (inputFile.is_open()) {
        // Print message if file opened successfully
        cout << "File opened successfully." << endl;

        // Read and print each line of the file
        string line;
        while (getline(inputFile, line)) {
            cout << line << endl; // Print each line of the file
        }

        inputFile.close(); // Close the file
    } else {
        // Print message if file opening failed
        cout << "Failed to open the file." << endl;
    }

    return 0;
}
