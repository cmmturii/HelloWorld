 #include <iostream>
using namespace std;
int main()
{
    int age;
    string interest;
    cout<<"Please Enter the age of child:";
    cin>>age;
    if(age>=4 && age<= 10)
    {  
        cout<<"Enter the child's interest:";
        cin>>interest;
        
        if (interest == "soccer") {
            cout << "Assigned to Indoor 1" << endl;
            cout << "Assigned to Junior Playgroup" << endl;
        }
        else if (interest == "arts") {
            cout << "Assigned to Indoor 2" << endl;
            cout << "Assigned to Art Playgroup" << endl;
        }
        else {
            cout << "Assigned to Indoor 3" << endl;
            cout << "Assigned to Other Playgroup" << endl;
        }
    }
    else {
        cout << "Declined!Not admitted to school." << endl;
    }

   
    return 0;

}