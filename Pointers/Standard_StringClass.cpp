/*
Standard C++ String Class:

C++ provides a built-in string class (std::string) to work with strings.
It offers various member functions for string manipulation and handling.
Example: std::string str = "Hello, World!"; declares and initializes a string object.
*/

// #include <iostream>
// #include <string>

// int main() {
//     std::string str = "Hello, World!";
//     std::cout << "String: " << str << std::endl;
//     return 0;
// }


//Defining and Assigning String Objects:
// #include <iostream>
// #include <string>

// int main() {
//     // Defining and initializing string objects
//     std::string str1 = "Hello"; // Initializing with a string literal
//     std::string str2("World"); // Initializing with a constructor

//     // Assigning new values to string objects
//     str1 = "Goodbye"; // Assigning a new value using an assignment operator
//     str2.assign("Universe"); // Assigning a new value using the assign() function

//     std::cout << "String 1: " << str1 << std::endl;
//     std::cout << "String 2: " << str2 << std::endl;

//     return 0;
// }



//Member Functions of String Class:
/*
length() returns the length of the string.
at() returns the character at a specified index.
substr() returns a substring of the original string.
find() searches for a substring within the string and returns its position.
*/
// #include <iostream>
// #include <string>

// int main() {
//     std::string str = "Hello, World!";

//     // Member functions of string class
//     std::cout << "Length of the string: " << str.length() << std::endl;
//     std::cout << "Character at index 7: " << str.at(7) << std::endl;
//     std::cout << "Substring from index 7 to 12: " << str.substr(7, 12) << std::endl;
//     std::cout << "Index of 'World': " << str.find("World") << std::endl;

//     return 0;
// }



//Modifiers of String Class:
/*
append() adds a string to the end of the original string.
insert() inserts a string at a specified position.
replace() replaces a portion of the string with another string.
erase() removes characters from the string starting at a specified position.
push_back() appends a single character to the end of the string.
*/

// #include <iostream>
// #include <string>

// int main() {
//     std::string str = "Hello";

//     // Modifiers of string class
//     str.append(", World!"); // Append a string
//     str.insert(5, " Beautiful"); // Insert a string at a specific position
//     str.replace(6, 7, "Universe"); // Replace a portion of the string
//     str.erase(13); // Erase characters from a specific position
//     str.push_back('!'); // Append a single character

//     std::cout << "Modified String: " << str << std::endl;

//     return 0;
// }

