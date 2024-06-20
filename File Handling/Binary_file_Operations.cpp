// #include <iostream>
// #include <fstream>

// void writeBinaryFile(const std::string& fileName, const int* data, int size) {
//     std::ofstream outFile(fileName, std::ios::binary);
//     if (outFile.is_open()) {
//         outFile.write(reinterpret_cast<const char*>(data), size * sizeof(int));
//         outFile.close();
//         std::cout << "Data successfully written to file: " << fileName << std::endl;
//     } else {
//         std::cerr << "Unable to open file " << fileName << " for writing." << std::endl;
//     }
// }

// void readBinaryFile(const std::string& fileName, int* data, int size) {
//     std::ifstream inFile(fileName, std::ios::binary);
//     if (inFile.is_open()) {
//         inFile.read(reinterpret_cast<char*>(data), size * sizeof(int));
//         inFile.close();
//         std::cout << "Data read from file " << fileName << ":" << std::endl;
//         for (int i = 0; i < size; ++i) {
//             std::cout << data[i] << " ";
//         }
//         std::cout << std::endl;
//     } else {
//         std::cerr << "Unable to open file " << fileName << " for reading." << std::endl;
//     }
// }

// int main() {
//     const std::string fileName = "data.bin";
//     int data[] = {1, 2, 3, 4, 5};
//     int size = sizeof(data) / sizeof(data[0]);

//     // Write data to binary file
//     writeBinaryFile(fileName, data, size);

//     // Read data from binary file
//     int readData[size];
//     readBinaryFile(fileName, readData, size);

//     return 0;
// }


#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char s[10];
ifstream inf("result.txt");
inf>>s;

inf.close();
cout<<s;
}