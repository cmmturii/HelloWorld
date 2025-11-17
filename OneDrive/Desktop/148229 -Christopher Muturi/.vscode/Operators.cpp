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
    num1 = 16; num2 =4;
    
    cout << "COMBINED INCREMENT AND ASSIGNMENT: num1 += 2; " << (num1 += 2) << endl;
    cout << "COMBINED DECREMENT AND ASSIGNMENT: num1 -= 2; " << (num1 -= 2) << endl;
    cout << "COMBINED MULTIPLY AND ASSIGN: num1 *= 2; " << (num1 *= 2) << endl;
    cout << "COMBINED DIVIDE AND ASSIGN: num1 /= 2; " << (num1 /= 2) << endl;

    // COMPARISON/RELATIONAL OPERATORS
    cout << "3>2" << "="<<(3>2) << endl;        // Greater than
    cout << "3<2" << "="<<(3<2) << endl;       // Less than
    cout << "4>=3" << "="<<(4>=3) << endl;;       // Greater than or equal to
    cout << "4<3" << "="<<(4<=3) << endl;       // Less than or equal to
    cout << "3==3" << "="<<(3==3) << endl;        // Equal to
    cout << "3!=3" << "="<<(3!=3) << endl;    //  Not equal to
    cout << "!(4>=3)" << "="<<!(4>=3) << endl;     // Not operator

  // BOOLEAN OPERATORS (AND &&, OR ||, NOT !)
    cout << "True && True = " << ((3 > 2) && (4 >= 2)) << endl;
    cout << "True && False = " << ((3 > 2) && (4 <= 2)) << endl;
    cout << "False && True = " << ((3 < 2) && (4 >= 2)) << endl;
    cout << "False && False = " << ((3 < 2) && (4 >= 2)) << endl;
    
    // Boolean OR
    cout << "True || True = " << ((3 > 2) || (4 >= 2)) << endl;
    cout << "True || True = " << ((3 > 2) || (4 <= 2)) << endl;
    cout << "True || True = " << ((3 > 2) || (4 >= 2)) << endl;
    cout << "True || True = " << ((3> 2) || (4 >= 2)) << endl;
    return 0;
}