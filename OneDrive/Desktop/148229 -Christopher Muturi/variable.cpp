//Exploring different variables thpes in c++
#include <iostream>
using namespace std;
//Global variable
int globalVar = 100;/*Variable declared outside of any fuction and accesible from any part of this source file*/\

//Example function with parameter variable
void exampleFunction(int paramVar)/*Variable declared in the function brackets,Parameters are using for 
passing data when a function is called*/
{
    cout<<"Parameter Variable :"<<paramVar<< endl;
}
int main()
{
   
    //Local variable
    int localVar= 50; /* Variable declared outside of any function and accessible only withn te fuction */

    //constant variable
    const float PI= 3.141599 ; /*A constant variable whose value cannot be changed after initializtion*/
}
double weight;
char gender;