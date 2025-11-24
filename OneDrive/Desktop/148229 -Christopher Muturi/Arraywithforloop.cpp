#include <iostream>
using namespace std;

int main() {
    int nums[5]; 
    

    for (int i = 0; i < 5; i++) {
        cout << "Please enter an integer: " << ",";
        cin >> nums[i];
    }

  
    cout << "You entered the following integers : " << endl;
    for (int i = 0; i < 5; i++) {
        cout << nums[i] << ",";
    }

    return 0;
}