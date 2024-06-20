#include <iostream>
#include <fstream>

int main() {
    std::ofstream outputFile("example.txt");

    if (outputFile.is_open()) {
        std::cout << "File opened successfully." << std::endl;

        // Writing data to the file
        outputFile << "Hello, World!" << std::endl;
        outputFile << 123 << std::endl;
        
        outputFile.close();
    } else {
        std::cout << "Failed to open the file." << std::endl;
    }

    return 0;
}


/*
We open a file named "example.txt" in write mode using an output file stream object outputFile.
We check if the file is opened successfully and then use the insertion operator (<<) to write data to the file.
We write a string "Hello, World!" and an integer value 123 to the file, each followed by a newline character.
Finally, we close the file.
*/