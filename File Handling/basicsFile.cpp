// file open and closing
// #include<iostream>
// #include<fstream> // header file for file operations...
// using namespace std;
// int main(){
//     ofstream onFile;  // Declare an output file stream object
//     onFile.open("nitish.txt"); //Open a file named "nitish.txt" for writing
//     // onFile<<"Thanks You So Much : "; // write the text in the file..
//     // cout<<"File created and Data has been written in the file..";

//     // Check if the file is opened successfully
//     if (onFile.is_open()) {
//         std::cout << "File opened successfully." << std::endl;
//         onFile.close(); // Close the file
//     } else {
//         std::cout << "Failed to open the file." << std::endl;
//     }

//     return 0;
//     onFile.close();

// }


// // written in the file..
// #include<iostream>
// #include<fstream> // header file for file operations...
// using namespace std;
// int main(){
//     ofstream onFile;  // Declare an output file stream object
//     onFile.open("nitish.txt"); //Open a file named "nitish.txt" for writing
//     onFile<<"Thanks You So Much : "; // write the text in the file..
//     cout<<"File created and Data has been written in the file..";

   

//     return 0;
//     onFile.close();

// }



// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// int main() {
//     ifstream inFile; // Declare an input file stream object
//     string str;      // Variable to store the read string
    
//     inFile.open("nitish.txt"); // Open a file named "nitish.txt" for reading
    
//     if (!inFile) { // Check if file opening was successful
//         cerr << "Unable to open file nitish.txt"; // Print error message to standard error
//         return 1; // Return error code
//     }

//     // Read from file and print to standard output
//     while (inFile >> str) {
//         cout << str << " ";
//     }

//     inFile.close(); // Close the file

//     return 0;
// }


//write the file..

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char s[30];
ofstream of("result");
of<<"hello";
of.close();
cout<<"data saved\n";
ifstream inf(“result”);
inf>>s;
cout<<s;
inf.close();
return 0;
}