#include <iostream>
#include <fstream>

int main() {
    // Open a file for reading and writing in binary mode
    std::fstream file("example.txt", std::ios::in | std::ios::out | std::ios::binary);

    if (file.is_open()) {
        std::cout << "File opened successfully." << std::endl;

        // Seek to a specific position in the file
        file.seekp(5); // Move the put pointer to the 6th byte (0-based index)
        
        // Write data at the current position
        file.write("Hello", 5); // Write the string "Hello" with 5 characters
        
        file.close(); // Close the file
    } else {
        std::cout << "Failed to open the file." << std::endl;
    }
    return 0;
}

/*
n this example, we open a file named "example.txt" for reading and writing in binary mode using a file stream (fstream) object file.
We then check if the file is opened successfully.
We use the seekp() member function to move the put pointer (write position) to a specific position in the file (in this case, the 6th byte).
We use the write() member function to write data at the current position in the file (in this case, the string "Hello" with 5 characters).
Finally, we close the file.
*/