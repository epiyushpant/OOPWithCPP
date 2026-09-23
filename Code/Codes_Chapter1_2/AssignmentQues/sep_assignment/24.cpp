/*Write a C++ program to demonstrate random access file handling and explain how it differs from sequential access. */
#include <iostream> 
#include <fstream> 
using namespace std; 

int main() 
{ fstream file; 
file.open("record.txt", ios::in | ios::out | ios::trunc); 
file << "AAAAA" << "BBBBB" << "CCCCC" << "DDDDD" << "EEEEE"; 

// random access: move directly to the 3rd block of 5 characters 
file.seekg(10); 
char data[6]; 

file.read(data, 5); 
data[5] = '\0'; 

cout << "Data read using random access (seekg): " << data << endl; 

cout << "Random access jumps directly to any byte position using seekg()/seekp(),\n"; 

cout << " unlike sequential access which must read through the file from the start."; 

file.close(); 

return 0; 

} 