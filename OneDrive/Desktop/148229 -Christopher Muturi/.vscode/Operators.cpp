 #include <iostream>
using namespace std;

int main() {
    // Variable declarations
    int num1 = 16, num2 = 4;
    
    // ARITHMETIC/MATHEMATICAL Operators
    cout << "ADDITION: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << "SUBTRACTION: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << "MULTIPLICATION: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << "DIVISION: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << "MODULUS: " << num1 << " % " << num2 << " = " << num1 % num2 << endl;
    
    // Reset values for increment/decrement demonstrations
    num1 = 16;
    num2 = 4;
    
    cout << "INCREMENT: ++" << num1 << " = " << ++num1 << endl; // Pre-increment
    cout << "INCREMENT: " << num1++ << " = " << num1 << endl; // Post-increment
    
    // Reset for decrement
    num1 = 16;
    num2 = 4;
    
    cout << "DECREMENT: --" << num2 << " = " << --num2 << endl; // Pre-decrement
    cout << "DECREMENT: " << num2-- << " = " << num2 << endl; // Post-decrement
    
    // Reset for combined operations
    num1 = 16;
    
    cout << "COMBINED INCREMENT AND ASSIGNMENT: num1 += 2; " << (num1 += 2) << endl;
    cout << "COMBINED DECREMENT AND ASSIGNMENT: num1 -= 2; " << (num1 -= 2) << endl;
    cout << "COMBINED MULTIPLY AND ASSIGN: num1 *= 2; " << (num1 *= 2) << endl;
    cout << "COMBINED DIVIDE AND ASSIGN: num1 /= 2; " << (num1 /= 2) << endl;

    return 0;
}