#include <iostream>
#include <string>
using namespace std;

int main() {
    string food;
    char resp;

    cout << "Please enter the food you like: ";
    cin >> food;

    cout << "Do you wish to continue (Y/N)? ";
    cin >> resp;

    while (resp != 'N' && resp != 'n') {
        cout << "Please enter a food you like: ";
        cin >> food;

        cout << "Do you wish to continue (Y/N)? ";
        cin >> resp;
    }

    cout << "Thank you! Goodbye." << endl;

    return 0;
}
