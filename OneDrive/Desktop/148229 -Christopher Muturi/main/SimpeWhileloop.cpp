#include <iostream>
#include <string>

using namespace std;

int main()
{
    string food;
    char resp;

    cout << "Enter the food you like: ";
    getline(cin, food);

    cout << "Do you wish to continue (Y/N)? ";
    cin >> resp;

    while (resp != 'N' && resp != 'n')
    {
        cout << "You like " << food << "." << endl;

        cin.ignore();  // To ignore the newline character left in the buffer
        cin.clear();   // Clear any error flags (just in case)

        cout << "Enter another food you like: ";
        getline(cin, food);

        cout << "Do you wish to continue (Y/N)? ";
        cin >> resp;
    }

    cout << "You entered N. Thank you for sharing your food preferences!" << endl;

    return 0;
}