/*Write a C++ program to open a file in read mode and display its contents.*/
#include <iostream> 
#include <fstream> 
using namespace std; 

int main() 
{ 
ifstream infile; 
string line; 

infile.open("data.txt"); 

if(!infile) 
{ cout << "File could not be opened."; 

return 0; 
} 

cout << "Contents of the file:" << endl; 

while(getline(infile, line)) 
{ cout << line << endl; 
} 

infile.close(); 

return 0; 

} 