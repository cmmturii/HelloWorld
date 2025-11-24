#include <iostream>
using namespace std;

int main() {
    int num = 20, sum = 0;
    cout<<"Calculating sum of whole numbers from 20 to 25."<<endl;

    while (num <= 25) {
        sum += num;
        num++;
    }

    cout << "The sum of numbers from 20 to 25 is: " << sum << endl;
    return 0;
}