/*
Friend of a Class (Friend Function and Friend Class):

Definition: Friend functions and classes are functions or classes that are granted access to the
 private and protected members of a class, even though they are not members of that class.
Example: In the code provided, printSecret is a friend function of the MyClass class, and FriendClass is a friend class.
*/


#include <iostream>
using namespace std;

class MyClass {
private:
    int secretNumber = 42;
    friend void printSecret(MyClass obj); // Friend function declaration
    friend class FriendClass; // Friend class declaration
};

// Friend function definition
void printSecret(MyClass obj) {
    cout << "The secret number is: " << obj.secretNumber << endl;
}

// Friend class definition
class FriendClass {
public:
    void accessSecret(MyClass obj) {
        cout << "Accessing secret number from FriendClass: " << obj.secretNumber << endl;
    }
};

int main() {
    MyClass obj;
    printSecret(obj); // Call to friend function
    FriendClass fc;
    fc.accessSecret(obj); // Call to friend class method
    return 0;
}
