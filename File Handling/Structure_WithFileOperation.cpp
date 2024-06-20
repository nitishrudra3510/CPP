#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Define a struct for Employee
struct Employee {
    string name;
    int age;
    double salary;
};

// Function to write employee data to a file
void writeEmployeeToFile(const string& fileName, const Employee& emp) {
    // Open the file in append mode
    ofstream outFile(fileName, ios::app);
    
    // Check if the file is opened successfully
    if (outFile.is_open()) {
        // Write employee data to the file
        outFile << emp.name << "," << emp.age << "," << emp.salary << endl;
        
        // Close the file
        outFile.close();
        
        // Print success message
        cout << "Employee data successfully written to file." << endl;
    } else {
        // Print error message if file opening failed
        cerr << "Unable to open file for writing." << endl;
    }
}

int main() {
    // Creating employee data
    Employee emp1 = {"John Doe", 30, 50000.0};
    Employee emp2 = {"Jane Smith", 35, 60000.0};

    // Writing employee data to a file
    writeEmployeeToFile("employees.txt", emp1);
    writeEmployeeToFile("employees.txt", emp2);

    return 0;
}


/*
In this code, we define a structure Employee that contains fields for the name, age, and salary of an employee.
We define a function writeEmployeeToFile that takes a file name and an Employee object as input, opens the file for writing in append mode, writes the employee data to the file in a comma-separated format, and then closes the file.
In the main function, we create two Employee objects (emp1 and emp2) with sample data.
We then use the writeEmployeeToFile function to write the employee data to a file named "employees.txt".
*/