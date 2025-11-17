 //A proram to demonstrate use of Ternary operator
 #include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Please Enter the age of child:";
    cin>>age;

    //Using ternary operator to check admission eligibility
    string message =(age>=4)?"Admitted to school.":"Declined:Not admitted to school.";
    cout<<message<<endl;

    return 0;
}    