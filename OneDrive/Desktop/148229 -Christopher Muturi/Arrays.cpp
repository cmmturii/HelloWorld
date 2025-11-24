#include <iostream>
using namespace std;

int main() {
    int nums[5];  
    
    cout << "Enter 5 integers: " << endl;
    cin >> nums[0] >> nums[1]>> nums[2]>> nums[3]>> nums[4];

  
    cout << "You entered the following integers: " << endl;
    cout << nums[0] << ","<<nums[1] << "," << nums[2] << ","<< nums[3] << "," << nums[4] ;

    return 0;
}