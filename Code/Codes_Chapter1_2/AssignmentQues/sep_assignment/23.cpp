/*Write a C++ program to open a file in write mode and write data into it.*/
#include <iostream> 
#include <fstream> 
using namespace std; 

int main() 
{ ofstream outfile; 

string data; 
outfile.open("data.txt"); 

cout << "Enter a line of text: "; 
cin.ignore(); 

getline(cin, data); 

outfile << data; 

outfile.close(); 
cout << "Data written to file successfully."; 

return 0; 

} 