#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{

 ofstream outFile("output.txt");
outFile << "Writing to a file." << endl;
outFile.close();
 
 ifstream inFile("output.txt");
 string content;
 while (std::getline(inFile, content))
 {
 cout << content << endl;
}
 inFile.close(); 
 return 0;
}
