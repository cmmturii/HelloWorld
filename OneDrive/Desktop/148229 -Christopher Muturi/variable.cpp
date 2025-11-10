//Exploring different variables types in c++
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
    const float PI= 3.141599 ; /*A constant variable whose value cannot be changed after initializtion i.e it is read only*/

    //Static variable
    static int staticvar = 0;/*A static variable that retains ts value between function calls*/

    //calling the example function and passing an argument
    exampleFunction("Fredrick");//Passing "Fredrick"as an argument to the parameter variable

    //Displaying the values of the variables
    cout<<"Global Variable:"<<globalVar<<endl;
    cout<<"Local Variable:"<<localVar<<endl;
    cout<<"Constant Variable (PI):"<<PI<<endl;

    //Modifying and displaying te staic variable
    staticvar++;
    cout<<"Static variable after increment:"<<staticvar<<endl;

    return 0;
}
