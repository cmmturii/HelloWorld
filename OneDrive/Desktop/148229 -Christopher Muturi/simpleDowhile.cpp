#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food;
    char resp;

    // First input (executes at least once)
    cout << "Enter the food you like: ";
    getline(cin, food);

    cout << "Do you wish to continue (Y/N)? ";
    cin >> resp;

    // Do-while loop: runs at least once, checks condition at the end
    do
    {
        cout << "You like " << food << "." << endl;

        cin.ignore();                  // Ignore the leftover newline from cin >> resp
        cin.clear();                   // Clear any error flags (good practice)

        cout << "Enter another food you like: ";
        getline(cin, food);

        cout << "Do you wish to continue (Y/N)? ";
        cin >> resp;

    } while (resp != 'N' && resp != 'n');   // Continue if not N or n

    cout << "You entered N. Thank you for sharing your food preferences!" << endl;

    return 0;
}