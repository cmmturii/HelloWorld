#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctPassword = "Murimi";
    string enteredPassword;
    int attempts = 0;

    cout << "Enter password: ";
    cin >> enteredPassword;

    while (enteredPassword != correctPassword && attempts < 2) {
        attempts++;
        cout << "Wrong password! Attempt " << attempts << " of 3." << endl;
        cout << "Enter password again: ";
        cin >> enteredPassword;
    }

    if (enteredPassword == correctPassword) {
        cout << "Access granted! Welcome!" << endl;
    } else {
        cout << "Password blocked. Too many wrong attempts." << endl;
    }

    return 0;
}