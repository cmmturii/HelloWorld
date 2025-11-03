//Escape sequence operators. specal characters that
//control the formatting of output on CLI program.
#include <iostream>
using namespace std;

int main() {
    cout << "Strathmore university is the leading \n university in the region " ;
    cout<<"\t Testing the tab operator"<< endl;
    cout<<"\\ Testing the backslash operator"<< endl;
    cout<<"\'Testing the single quote operator\'"<< endl;
    cout<<"\" Testing the double quote operator\""<< endl;
    cout<<"\a Testing the alert operator"<< endl;
    return 0;
}
