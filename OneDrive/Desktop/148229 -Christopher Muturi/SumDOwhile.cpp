#include <iostream>
using namespace std;

int main() {
    int num = 12, sum = 0;

    cout << "Even numbers from 12 to 50: ";

    do {
        
        sum += num;              
        num += 2;                

    } while (num <= 50);

    cout << "Sum of even numbers from 12 to 50 is = " << sum << endl;

    return 0;
}