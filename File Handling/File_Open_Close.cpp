#include <iostream>
#include <fstream>

int main() {
    std::ofstream outputFile; // Declare an output file stream object
    outputFile.open("example.txt"); // Open a file named "example.txt" for writing

    // Check if the file is opened successfully
    if (outputFile.is_open()) {
        std::cout << "File opened successfully." << std::endl;
        outputFile.close(); // Close the file
    } else {
        std::cout << "Failed to open the file." << std::endl;
    }

    return 0;
}
