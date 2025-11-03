#include <iostream>
using namespace std;

// ANSI escape code for red color and reset
const string RED = "\033[31m";
const string RESET = "\033[0m";

int main() {
    cout << "\n\n";
    cout << "           🌳          " << endl;
    cout << "          /|\\         " << endl;
    cout << "         //|\\\\        " << endl;
    cout << "        ///|\\\\\\       " << endl;
    cout << "          |||          " << endl;

    cout << "---------------------------------------------" << endl;
    cout << "   o      " << RED << " ♥ " << RESET << "    o" << endl;
    cout << "  /|\\           /|\\ " << endl;
    cout << "  / \\           / \\ " << endl;

    cout << "---------------------------------------------" << endl;
    cout << "                 🏠🏠🏠" << endl;
    cout << "                🏠🏠🏠🏠" << endl;
    cout << "               🏠🏠🏠🏠🏠" << endl;

    cout << "\nLevel ground: _______________________________\n" << endl;

    return 0;
}