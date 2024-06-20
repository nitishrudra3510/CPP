/*
Reference Variables:

Definition: Reference variables provide an alternative name (alias) to an existing variable. They are often used as function parameters to avoid copying large objects.
Example: In the code, ref is a reference to the variable num.
*/


#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int &ref = num; // Reference variable
    cout << "Original value: " << num << endl;
    ref = 20; // Modify the value through reference
    cout << "Modified value through reference: " << num << endl;
    return 0;
}
