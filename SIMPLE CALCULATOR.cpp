#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    // Ask the user for operator and numbers
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Invalid operator." << endl;
            break;
    }

    return 0;
}

/*
Output example:
If the user inputs the following:
Enter operator (+, -, *, /): +
Enter two operands: 5 3

The output will be:
5 + 3 = 8

If the user inputs the following:
Enter operator (+, -, *, /): /
Enter two operands: 9 3

The output will be:
9 / 3 = 3

If the user inputs the following:
Enter operator (+, -, *, /): /
Enter two operands: 9 0

The output will be:
Division by zero is not allowed.

If the user inputs an invalid operator:
Enter operator (+, -, *, /): ^
Enter two operands: 2 3

The output will be:
Invalid operator.
*/
