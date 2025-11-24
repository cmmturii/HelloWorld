// Simple program for greetings using user input name
   #include <iostream>
   #include <string>
   using namespace std;
 
   int main()
   {
       string fullName,fullName2;
      cout << "Enter your full name\n";
      cin >> fullName;      

      cout << "Hi " << fullName << ". Nice to meet you." << endl;   // Using cin

      // Using getline(cin, variable) function
      cout << "Enter your full name : \n";
     getline(cin, fullName);
     cout<<"Hi again"<<fullName<<".Nice to meet you."<<endl;// Using getline(cin, variable) 
   }
