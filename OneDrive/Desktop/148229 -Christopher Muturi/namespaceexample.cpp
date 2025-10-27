#include <iostream>
using namespace std;
// Creating a namespace called MyNamespace
namespace MyNamespace
{
 int myVariable = 10;
void myFunction()
{
cout << "Hello from MyNamespace!" << endl;
}
}
int main()
{
cout << "Variable from namespace: " << MyNamespace::myVariable <<endl;
MyNamespace::myFunction();
return 0;
}
