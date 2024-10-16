#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    // Ask the user for their name
    cout << "Enter your name: ";
    cin >> name;

    // Ask the user for their age
    cout << "Enter your age: ";
    cin >> age;

    // Output the information back to the user
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}

/*
Output example:
If the user inputs the following:
Enter your name: Alice
Enter your age: 25

The output will be:
Hello, Alice! You are 25 years old.
*/
