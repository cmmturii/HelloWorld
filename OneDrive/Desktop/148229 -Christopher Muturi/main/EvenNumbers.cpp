#include <iostream>
using namespace std;

int main() {
    int num = 12;
    
  cout<<"Even numbers are from 12 to 28 are:"<<endl;
    while (num <= 28) {
        cout << num;
       
        num += 2;           
    }
    cout <<"\b"<< endl;

    return 0;
}