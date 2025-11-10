#include <iostream>

using namespace std;
int main()

{//IMPLICIT/AUTOMATIC TYPE CASTING
int num= 5;
float num2;
double num3;
char mychar;

bool var= true;
bool var2= false;


num2= num; //int to float
num3= num; //int to double
num3= num2; //float to double
mychar= num; //int into char

cout<<num<<"casted to float"<<"="<<num2<<endl;
cout<<num<<"casted to double"<<"="<<num3<<endl;
cout<<num2<<"casted to double"<<"="<<num3<<endl;
cout<<"Boolean TRUE ="<<var<<endl;
cout<<"Boolean FALSE ="<<var2<<endl;
cout<<num<<"casted int a character ="<<mychar<<endl;
}
