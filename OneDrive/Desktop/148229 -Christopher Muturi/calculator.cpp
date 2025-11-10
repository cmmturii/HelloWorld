#include <iostream>
#include <cmath>  // for sqrt(), pow(), log()
using namespace std;

int main() {
    float num1, num2;
    
    cout << "=== BASIC CALCULATOR ===" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << endl;

    // Basic operations
    cout << "Addition: " << (num1 + num2) << endl;
    cout << "Subtraction: " << (num1 - num2) << endl;
    cout << "Multiplication: " << (num1 * num2) << endl;

    if (num2 != 0) {
        cout << "Division: " << (num1 / num2) << endl;
        cout << "Modulus: " << fmod(num1, num2) << endl;  // works with floats too
    } else {
        cout << "Division: Undefined (cannot divide by zero)" << endl;
        cout << "Modulus: Undefined (cannot divide by zero)" << endl;
    }

    // Square root of first number
    if (num1 >= 0)
        cout << "Square root of first number: " << sqrt(num1) << endl;
    else
        cout << "Square root: Undefined (cannot take sqrt of negative number)" << endl;

    // Power: num1^num2
    cout << "Power (first number ^ second number): " << pow(num1, num2) << endl;

    // Logarithm (natural log)
    if (num1 > 0)
        cout << "Logarithm (base e) of first number: " << log(num1) << endl;
    else
        cout << "Logarithm: Undefined (log only defined for positive numbers)" << endl;

    cout << "\n=== End of Calculations ===" << endl;
    return 0;
}
