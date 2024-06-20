/*
Manipulator Functions:

Definition: Manipulator functions are functions provided by the iostream library that manipulate the output stream, such as setting precision, formatting output, etc.
Example: In the code, setprecision(2) is used to set the precision of floating-point output to two decimal places.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float num = 123.45678;
    cout << "Default output: " << num << endl;
    cout << "Set precision to 2 decimal places: " << fixed << setprecision(2) << num << endl;
    return 0;
}
